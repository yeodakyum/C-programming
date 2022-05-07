#include <stdio.h>

int main(){
    char a;
    int b;
    float c;
    printf("Enter input data(only 1 character)");
    scanf("%c", &a);
    printf("\noutput:%c", a);

    printf("\nEnter input data(only integer value:)");
    scanf("%d", &b);
    printf("\noutput as decimal :  %d", b);
    printf("\noutput as octal : %o", b);
    printf("\noutput as hexadecimal : %x", b);

    printf("\nEnter input data(only floating point number):");
    scanf("%f", &c);
    printf("\noutput : %f", c);
    printf("\n`output as scientific notation : %e", c);

    return 0;
  }


