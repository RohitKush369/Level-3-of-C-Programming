/*Get a number from user and Check Prime or Not and print the result.
Write your code inside the function.*/

#include<stdio.h>
int isPrime( int no);
int main()
{
    int number,result;
    printf("Enter a number;");
    scanf("%d",&number);
    result=isPrime(number);
    if(result==1){
        printf("Number is prime");
    }
    else{
        printf("Number is not prime");
    }
    return 0;
}
int isPrime( int no)
{
    int result;
    result=1;
    for(int i=2;i*i<=no;i++){
       if(no%i==0){
        result=0;
        break;
       }
    }
    return result;
}
