 /*Get a number from user and check whether the digits are in
ascending order.*/
 #include <stdio.h>
  int check_ascending(int no);
   int main()
{
    int number,result;
    scanf("%d",&number);
    result=check_ascending(number);
    if(result == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
int check_ascending(int no)
{
    int result=1;
    int previous_digit=10;
    int current_digit;
    while (no>0) {
        current_digit=no%10;
        if (current_digit>previous_digit) {
            result = 0;
            break;
        }
        previous_digit = current_digit;
        no/=10;
    }
     return result;
}
