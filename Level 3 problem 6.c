/*Get a number from user and reverse that number and print.
Write your code inside the function.*/
#include<stdio.h>
int reverse_number(int no);
int main()
{
    int result ,number;
    printf("Enter a number:");
    scanf("%d",&number);
    result=reverse_number(number);
    printf("%d",result);
    return 0;
}
int reverse_number(int no)
{
    int result;
    int reverse=0;
     int remainder;
    while(no!=0){
        remainder=no%10;
        reverse=reverse*10+remainder;
        no/=10;
    }
    result=reverse;
    return result;

}
