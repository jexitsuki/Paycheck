#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    float nItemPrice;
    double nQuantity;

    float nDiscount;
    

    printf("Welcome to \"Temple\" store\n");
    puts("");
    printf("\tEnter item price: ");
    scanf("%f", &nItemPrice);

    if (nItemPrice < 0){ // CASE 2
      puts("");
      printf("\tThis is not a valid item price.\n"); 
      printf("\tPlease run the program again\n");
      puts("");
      printf("Thank you for using \"Temple\" store\n");
      exit(1);
    }
    else{
      printf("\tEnter quantity: ");
      scanf("%lf", &nQuantity);

      double integerPart;
      double fractionalPart = modf(nQuantity, &integerPart);
      
      if (nQuantity < 0){ // CASE 3
        puts("");
        printf("\tThis is not a valid quantity oder.\n"); 
        printf("\tPlease run the program again\n");
        puts("");
        printf("Thank you for using \"Temple\" store\n");
        exit(1);
      }
      else if(fractionalPart > 0){ // CASE 4
        puts("");
        printf("\tThis is not a valid quantity oder.\n"); 
        printf("\tPlease run the program again\n");
        puts("");
        printf("Thank you for using \"Temple\" store\n");
        exit(1);
      }
      else{
      }

      puts("");
      printf("\tThe item price is: $%.1f\n", nItemPrice);
      int nIntQuantity = (int)integerPart;
      printf("\tThe order is: %d item(s)\n", nIntQuantity);
      printf("\tThe cost is: $%.1f\n", nItemPrice * nIntQuantity);
      
      if(1 <= nIntQuantity && nIntQuantity < 50){
        nDiscount = 0;
      }
      else if (50 <= nIntQuantity && nIntQuantity < 100){
        nDiscount = 0.1;
      }
      else if (100 <= nIntQuantity && nIntQuantity < 150){
        nDiscount = 0.15;
      }
      else{
        nDiscount = 0.25;
      }

      printf("\tThe discount is: %.1f%%\n", nDiscount * 100);
      printf("\tThe discount amount is: $%.1f\n", nItemPrice * nQuantity * nDiscount);
      printf("\tThe total is: $%.1f\n", nItemPrice * nQuantity - (nItemPrice * nQuantity * nDiscount));
    }

  puts("");
  printf("Thank you for using \"TEMPLE HUMAN RESOURCES\"");
  exit(0);
  
}
