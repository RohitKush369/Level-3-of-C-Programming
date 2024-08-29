/*Get a number from user and Check whether the sum of digits is 14 and
print the result. Write your code inside the function.*/
#include<stdio.h>
int sum14(int no);
int main()
{
    int number,result;
    scanf("%d",&number);
    result=sum14(number);
    if(result==1){
        printf("sum of digits is 14");
    }
    else{
        printf("sum of digits is not 14");
    }
    return 0;
}
   int sum14(int no)
{
    int result=0;
    while(no!=0){
        result=result+no%10;
        no/=10;
    }
    return(result);
}
