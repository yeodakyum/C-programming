#include <stdio.h>

int main(void) {
  int a, b;
  printf("Enter two input data (hexadecimal only): ");
  scanf("%x %x", &a, &b);
  printf("bitwise AND operation of %x(hex) and %x(hex): %x \n", a, b, a&b );
  printf("bitwise OR operation of %x(hex) and %x(hex): %x \n", a, b, a|b );
  printf("bitwise XOR operation of %x(hex) and %x(hex): %x \n", a, b, a^b );
  return 0;
}
