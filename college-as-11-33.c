#include<stdio.h>
//33.	Define function int fact(int x) to find factorial of a number x. fact(4)=24.
int fact(int x)  /* Secondary Function */
{
    int factorial=1,i;
    for(i=1;i<=x;i++) //1....2....3....4
    {
        factorial*=i; //1*1.....1*2.....2*3......6*4......24
    }
    return factorial; //returning the result fact=24
}
            /*      Main Function       */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);//Enter number 4
    printf("Factorial is: %d",fact(num));//print the secondary function's returned value
}
        
