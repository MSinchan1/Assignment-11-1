#include<stdio.h>
//Define function int abc(int x) to find the factorial of first digit of number x. 
//In this function any loop should not be used. [Hint: use function fd and fact]. abc(6413)=720.
int fd(int y)//Secondary Function for extracting the first digit
{
    int d;
    while(y>0)//6413.....641.....64.....6
    {
        d=y%10;//3.....1......4.....6
        y/=10;//641.....64.....6.....0
    }
    return d;//returing the result first digit:6
}
int abc(int x)  /* Secondary Function to find the factorial using recursion*/
{
    if(fd(x)==1)
    {
        return 1;
    }
    else  //6
    {
        return fd(x)*abc(fd(x)-1); //6*5*4*3*2*1=720
    }
}
            /*      Main Function     */
void main()
{
    int num,n;
    printf("Enter number: ");
    scanf("%d",&num);//Enter number 6413
    printf("Factorial is: %d",abc(num));//print the called function result
}
        