#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    double nEmNum;
    float nHourSalary;
    float nWeeklyTime;
    float nRegPay;
    float nOverPay;
    float nNetPay;

    printf("Welcome to \"TEMPLE HUMAN RESOURCES\"\n");
    puts("");
    printf("\tEnter Employee Number: ");
    scanf("%lf", &nEmNum);

    double integerPart;
    double fractionalPart = modf(nEmNum, &integerPart);

    if (nEmNum < 0){ // CASE 2
      puts("");
      printf("\tThis is not a valid Employee Number.\n"); 
      printf("\tPlease run the program again\n");
      puts("");
      printf("Thank you for using \"TEMPLE HUMAN RESOURCES\"\n");
      exit(1);
    } else if(fractionalPart > 0){ // CASE 3
      puts("");
      printf("\tThis is not a valid Employee Number.\n"); 
      printf("\tPlease run the program again\n");
      puts("");
      printf("Thank you for using \"TEMPLE HUMAN RESOURCES\"\n");
      exit(1);
    }
    else{
      printf("\tEnter Hourly Salary: ");
      scanf("%f", &nHourSalary);
      
      if (nHourSalary < 0){ // CASE 4
        puts("");
        printf("\tThis is not a valid hourly salary amount.\n"); 
        printf("\tPlease run the program again\n");
        puts("");
        printf("Thank you for using \"TEMPLE HUMAN RESOURCES\"\n");
        exit(1);
      }
      else{ 
        printf("\tEnter Weekly Time: ");
        scanf("%f", &nWeeklyTime);

        if(nWeeklyTime < 0){ // CASE 5
          puts("");
          printf("\tThis is not a weekly time.\n"); 
          printf("\tPlease run the program again\n");
          puts("");
          printf("Thank you for using \"TEMPLE HUMAN RESOURCES\"\n");
          exit(1);
        }
        else{
          printf("\t==============================\n");
          int nIntEmNum = (int)nEmNum; // Convert double to int
          printf("\tEmployee #: %d\n", nIntEmNum);
          printf("\tHourly Salary: $%.1f\n", nHourSalary);
          printf("\tWeekly Time: %.1f\n", nWeeklyTime);

          if(nWeeklyTime > 40){
            float nMaxTime = 40;
            float nNew = nWeeklyTime - nMaxTime;

            printf("\tRegular Pay: $%.1f\n", nMaxTime * nHourSalary);
            printf("\tOvertime Pay: $%.1f\n", nNew * nHourSalary * 1.5);
            printf("\tNet Pay: $%.1f\n", ((nMaxTime * nHourSalary) + (10 *nHourSalary *1.5)));
          }
          else{
            printf("\tRegular Pay: $%.1f\n", nWeeklyTime * nHourSalary);
            printf("\tNet Pay: $%.1f\n", nWeeklyTime * nHourSalary);
          }
        }
      }
    }
    
  printf("\t==============================\n");
  printf("Thank you for using \"TEMPLE HUMAN RESOURCES\"");
  exit(0);
  
}



/* 1st pseudocode
- Define nEmNum, nHourSalary, nWeeklyTime, nRegPay, nOverPay, nNetPay
- Disply a message "Welcome"
- Input an employee number with a prompt "Enter: "
    If nEmNum < 0
      Display a message and return "Thank you"(CASE 2)
    if else nEmNum is a decimal number
      Display a message and return "Thank you"(CASE 3)
    else
      Input Hourly Salaly with a prompt "Enter: "
      if nHourSalary < 0
        Display a message and return "Thank you"(CASE 4)
      else
        Input nWeeklyTime with a prompt "Enter: "
        if nWeeklyTime < 0
          Display a message and return "Thank you"(CASE 5)
        else
          Display "==========="
          Display "Employee #: " + nEnNum
          Display "Hourly Salary: $" + nHourSalary(ONE DICIMAL POINT)
          Display "Weekly Time: " + nWeeklyTime(ONE DICIMAL POINT)

          if nWeeklyTime > 40
            Define nMaxTime = 40
            Define nNew = nWeeklyTime - nMaxTime

            Display "Regular Pay: $" + nMaxTime * nHourSalary(ONE DICIMAL POINT)
            Display "Overtime Pay: $" + nNew * nHourSalary * 1.5(ONE DICIMAL POINT)
            Display "Net Pay: $" + nMaxTime * nHourSalary + 10 * nHourSalary * 1.5(ONE DICIMAL POINT)
          else
            Display "Regular Pay: $" + nWeeklyTime * nHourSalary(ONE DICIMAL POINT)
            Display "Net Pay: $" + nWeeklyTime * nHourSalary(ONE DICIMAL POINT)
          
          Display "============"
          Display a message "Thank you"
            
          
        
*/

