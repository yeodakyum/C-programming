#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0;
  int *ptr = NULL;
while (1){
  i ++;
  ptr = (int*)malloc(100000000000000);
  *ptr = 1;
  *(ptr+i) =2;
  printf("%p\n", ptr);
  printf("%d %d\n", ptr[0], ptr[1]);
}
}
