#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Enter score of three subjects: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("Total = %d\n", a+b+c);
  printf("Average = %f\n", (a+b+c)/3.0);

  return 0;
}
