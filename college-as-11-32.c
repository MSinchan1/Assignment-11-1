#include<stdio.h>
//32.	Define function int fd(int x) to find the first digit of a number x. fd(371)=3.
int fd(int x)//Secondary Function
{
    int d;
    while(x>0)//371.....37.....3
    {
        d=x%10;//1.....7.....3
        x/=10;//37.....3.....0
    }
    return d;//returing the result
}
            /*     Main Function   */
void main()
{
   int num,n;
   printf("Enter number: ");
   scanf("%d",&num);//Enter the number: 371
   n=fd(num); //call the secondary function 
   printf("First digit is: %d",n); //print the returned value from the declared function 3
}
