/*Get a number from user and count the number of zeros in that number
and print. Write your code inside the function.*/
#include<stdio.h>
int find_no_of_zeros(int no);
int main()
{
    int number,result;
    printf("Enter a number:");
    scanf("%d",&number);
    result=find_no_of_zeros(number);
    printf("%d",result);
    return 0;
}
int find_no_of_zeros(int no)
{
    int result=0;
    int count=0;
    if(no==0){
        count=1;
    }
    while(no!=0){
            if(no%10==0){
        count++;
            }
    no/=10;
    }
    result=result+count;
    return result;
}
