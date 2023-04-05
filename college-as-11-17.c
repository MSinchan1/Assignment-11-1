#include<stdio.h>
//Factorial fact(5)=120    fact(7)=5040
int Factorial(int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);//Enter number 5
    printf("Factorial is: %d",Factorial(num));//print the secondary function's return value
}
        /* Secondary Function */
int Factorial(int x)
{
    int fact=1,i;
    for(i=1;i<=x;i++) //1....2....3....4.....5
    {
        fact*=i; //1*1.....1*2.....2*3......6*4......24*5
    }
    return fact; //returning the result fact=120
}