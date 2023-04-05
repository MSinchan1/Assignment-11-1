#include<stdio.h>
//First digit                        fd(23145)=2     fd(314)=3
int first_digit(int);//declare the secondary function
        /*    Main function   */
void main()
{
   int num;
   printf("Enter number: ");
   scanf("%d",&num);//Enter the number: 21345
   printf("First digit is: %d",first_digit(num)); //print the returned value from the declared function
}
int first_digit(int x)
{
    int d;
    while(x>0)//21345......2134.....213.....21.......2
    {
        d=x%10;//5......4.....3......1......2
        x/=10;//2134.....213.....21.....2......0
    }
    return d;//returing the result
}