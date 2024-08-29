//Get a two-digit number from user swap the digits.//
#include<stdio.h>
int swap_digits(int no);
int main()
{
    int number,result;
    printf("Enter a number:");
    scanf("%d",&number);
    result=swap_digits(number);
    printf("%d",result);
    return 0;
}
int swap_digits(int no)
{
    int result;
    result=(no%10)*10+(no/10)*1;
    return result;
}
