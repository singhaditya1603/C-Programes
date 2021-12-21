#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;

    printf("a + b = %d\n", 4 + 8);
    printf("a - b = %d\n", 4 - 8);
    printf("a * b = %d\n", 4 * 8);
    printf("a / b = %d\n", 4 / 8);

    int z;
    z = b * a; // --> legal
    //b * a = z; --> Illegal
    printf("z= %d\n", z);

    printf("5/2 leaves a remainder = %d\n", 5 % 2);
    printf("-5/2 leaves a remainder = %d\n", -5 % 2);
    printf("5/-2 leaves a remainder = %d\n", 5 % -2);

    // No operator is assumed to be present
    //printf("The value of 4 * 5 is %d\n", (4)(5)); --> Will not return 20/ Wrong!!
    printf("4 * 5 = %d\n", (4) * (5));

    // There is no operator to perform exponentiation in C
    // printf("The value of 4 ^ 5 is %d\n", 4 ^ 5); --> Will not produce 4 to the power 5
    printf("4^5 = %f\n", pow(4, 5));

    printf("6 + 5 = %d\n", 6 + 5);
    printf("6 + 5.6 = %f\n", 6 + 5.6);
    printf("6.1 + 5.6 = %f\n", 6.1 + 5.6);
    printf("5/2 = %d\n", 5 / 2);
    printf("3.0/9 = %f\n", 3.0 / 9);

    return 0;
}