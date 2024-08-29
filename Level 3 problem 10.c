//Get a number from user, find the number of digits and print the same.//
#include<stdio.h>
int count_digits(int no);
int main()
{
    int number, result;
    printf("Enter a number:");
    scanf("%d",&number);
    result=count_digits(number);
    printf("%d",result);
    return 0;
}
int count_digits(int no)
{
    int result;
    int count;
    if(no==0){
      count=1;
    }
    while(no!=0){
        no/=10;
        count++;
    }
    result=count;
    return result;
}

