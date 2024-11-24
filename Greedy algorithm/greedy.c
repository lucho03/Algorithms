#include "stdio.h"

int i = 0;
int cents[] = { 50, 20, 10, 5, 2, 1 };
void calculate( int amount ) {
    printf( "Number of %d-cent units: %d\n", cents[i], (amount / cents[i]) );
    
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