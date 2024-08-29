/*Get two numbers from user and compare the numbers. If same print
"Same" otherwise print "Not Same". Write your code inside the function.*/

#include<stdio.h>
int compare_numbers(int no1, int no2);
int main()
{
    int number1,number2,result;
    printf("Enter the first number:");
    scanf("%d",&number1);
    printf("Enter the second number:");
    scanf("%d",&number2);
    result=compare_numbers(number1,number2);
    if(result==1){
        printf("Numbers are same");
    }
    else{
        printf("Numbers are not same");
    }

    return 0;
}
int compare_numbers(int no1, int no2)
{
    int result;
    if(no1==no2){
      result=1;
    }
    return result;
}
