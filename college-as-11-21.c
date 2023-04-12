#include<stdio.h>
//Sum of smallest factors    susf(24,35)=2+5=7
int Smallest_Factror(int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2); //Enter two numbers 24     35
    printf("Sum of smallest factor is: %d",Smallest_Factror(num1)+Smallest_Factror(num2)); 
    //print the secondary function's return value(num1)+print the secondary function's return value(num2)
}
            /*  Secondary Function*/
int Smallest_Factror(int x)
{
    int i,SF;
    for(i=2;i<=x;i++) //2....&& 2.....3....4.....5
    {
        if(x%i==0) //2       5
        {
            SF=i;//2        5
            break;
        }
    }
    return SF;//returning the result 2 for first number and 5 for second number
}