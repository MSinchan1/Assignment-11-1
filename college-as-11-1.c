#include<stdio.h>
//First digit                        fd(23145)=2     fd(314)=3
int first_digit(int);//declare the secondary function
        /*    Main function   */
void main()
{
   int num,n;
   printf("Enter number: ");
   scanf("%d",&num);//Enter the number: 2134
   n=first_digit(num); //call the secondary function 
   printf("First digit is: %d",n); //print the returned value from the declared function
}
int first_digit(int x)
{
    int d;
    while(x>0)//2134......213.....21.....2
    {
        d=x%10;//4.....3......1......2
        x/=10;//213.....21.....2.....0
    }
    return d;//returing the result
}