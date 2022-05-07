#include <stdio.h>

int main(void) {
  int n, i, j;
  n = 0;
  scanf("%d", &n);
  i = 0;
  int find =0;
  for(j =1; j <=n; j++){
    i = j;
    while(i){
      if(i % 10 == 3 || i % 10 == 6 ||i % 10 == 9 ){
        printf("*");
        find = 1;
      }
      i = i/10;
      
    }
    if(!find){
    printf("%d ", j);
      }
    else{
      printf(" ");
    }
    find = 0;
  }
  return 0;
}
