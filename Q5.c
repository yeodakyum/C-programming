   #include <stdio.h>
   
  int main(){
      int num,  mm, dd, yyyy;
      float price; //declare variables
      printf("Enter item number:");// print text to ask input
      scanf("%d", &num); //input
      printf("Enter unit price:");
      scanf("%f", &price);
      printf("Enter purchase date (mm/dd/yyyy):");
      scanf("%d/%d/%d", &mm, &dd, &yyyy);
      printf("Item    Unit price   Purchase date\n"); //print out the results
      printf(" %d       %0.2f         %d/%d/%d", num, price, mm, dd, yyyy);
      return 0; //end
  }

