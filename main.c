/*
 * This program reads the amount of values the user chooses.
 * Then depending on the user choice the program will compute the sum,
 * average, or display the smallest or biggest value of the given numbers.
 *
 * Email: A01411277@itesm.mx
 * Author: Jonathan Nuñez de Caceres
 * Date: 12/10/18
 */

#include <stdio.h>

// Menu
void Menu(){
    printf("---Menu---\n");
    printf("1. Sum.\n");
    printf("2. Average.\n");
    printf("3. Smallest number.\n");
    printf("4, Biggest number.\n");
    printf("0. Exit.\n");
    printf("Choose an option:\n");
}

// This function the array and the size of the array as parameters.
double Sum(double numbers[], int n){
    double sum = 0;
    // Sums every number of the array.
    for(int i = 0; i < n; i++){
        sum += numbers[i];
    }

    return sum;
}
// This function calculaes the average by using
// the Sum function then divides by the size.
double Average(double numbers[], int n){
    return Sum(numbers, n)/n;
}

// This function returns the minimum value.
double Minimum(double numbers[], int n){
    double min = numbers[0];

    for(int i = 0; i < n; i++){
        if(min > numbers[i]){
            min = numbers[i];
        }
    }

    return min;
}

// This function returns the maximum value.
double Maximum(double numbers[], int n){
    double max = numbers[0];

    for(int i = 0; i < n; i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
    }

    return max;
}

int main() {
    // Declaration of variables.
    int n;
    int choice;

    printf("How many values you want to enter?");
    scanf("%d", &n);

    // Declaraion of the array
    double numbers[n];

    // Storing of the values.
    for(int i = 0; i < n; i++){
        printf("%d:", i+1);
        scanf("%lf", &numbers[i]);
    }

    do{
        // Displays menu and goes to the section chosen.
        Menu();
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Sum: %lf\n\n", Sum(numbers, n));
                break;
            case 2:
                printf("Average: %lf\n\n", Average(numbers, n));
                break;
            case 3:
                printf("Minimum: %lf\n\n", Minimum(numbers, n));
                break;
            case 4:
                printf("Maximum: %lf\n\n", Maximum(numbers, n));
                break;
            case 0:
                printf("Good bye!");
                break;
            default:
                printf("Option not valid.");
                break;
        }
    } while(choice != 0);

    return 0;
}