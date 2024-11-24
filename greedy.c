#include "stdio.h"

int i = 0;
int cents[] = { 50, 20, 10, 5, 2, 1 };
void calculate( int amount ) {
    int change = amount / cents[i];
    if( change != 0 ) {
        printf( "Number of %d-cent units: %d\n", cents[i], change );
    }

    amount = amount % cents[i];
    if( amount == 0 ) {
        return;
    }

    i++;
    calculate( amount );
}

int main() {
    int amount;
    printf("Enter amount of money: ");
    scanf("%d", &amount);

    calculate( amount );

    return 0;
}