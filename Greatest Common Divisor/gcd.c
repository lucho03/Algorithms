#include "stdio.h"

int i = 1;
int divisor = 1;
int current = 2;

int calculate( int first, int second ) {
    if( (first == 0 && second == 0)  || (current > first || current > second)) {
        return divisor;
    }
    
    if( first % current == 0 && second % current == 0 ) {
        first /= current;
        second /= current;
        divisor *= current;
    }
    else {
        current++;
    }

    i++;
    calculate( first, second );
}

int main() {
    int first_number, second_number;

    printf("Enter first number: ");
    scanf("%d", &first_number);

    printf("Enter second number: ");
    scanf("%d", &second_number);

    int divisor = calculate( first_number, second_number );
    printf("Divisor: %d\n", divisor);

    printf("Steps: %d\n", i);

    return 0;
}