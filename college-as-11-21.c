#include<stdio.h>
//Sum of smallest factors    susf(24,35)=2+5=7
int Smallest_Factror(int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num1,num2,SF1,SF2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2); //Enter two numbers 24     35
    SF1=Smallest_Factror(num1); //calling the function through a variable for first number
    SF2=Smallest_Factror(num2); //calling the function through a variable for second number
    printf("Sum of smallest factor is: %d",SF1+SF2); //sum of the smallest two factors of the given numbers
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