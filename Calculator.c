#include <stdio.h>
int main(){
    int num_1, num_2; 
    int result;
    char operator;
    //enter two numbers
    printf("Enter num_1:");
    scanf("%d",&num_1);
    printf("Enter num_2:");
    scanf("%d",&num_2);
    //select operand
    printf("Select operand (+,-,*,/):");
    scanf(" %c",&operator);
    //perform calculation
    switch(operator){
        case '+':
          result =num_1+num_2;
          printf("Result=%.d\n");
          break;
        case '-':
         result=num_1-num_2;
         printf("Result=%d\n");
         break;
        case '*':
         result=num_1*num_2;
         printf("Result=%d\n");
         break;
        case '/':
         if (num_2 !=0){
            result=num_1/num_2;
            printf("Result=%d\n",result);
          }
         else{printf("Error! Division by zero is not allowed.\n");}
         {break;
          default:
          printf("Invalid operator!\n");}
    
    }
  return 0;
}