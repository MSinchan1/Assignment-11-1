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
   int num;
   printf("Enter number: ");
   scanf("%d",&num);//Enter the number: 371
   printf("First digit is: %d",fd(num)); //print the secondary function's returned value
}
