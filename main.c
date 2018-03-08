#include <stdio.h>
#include <math.h>   

int main() {
    int side, p, a;
    char op;

    do {
        //printf here
        scanf("%d", &side);

        p = 4 * side;
        a = pow(side, 2);

        printf("%d %d", &p, &a);

        printf("\n Wanna leave? Type 'y' if you wanna leave.\n");
        op = getchar();

    }while(op != 'y');

    return 0;
}