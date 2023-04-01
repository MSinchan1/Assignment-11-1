#include<stdio.h>
//Sum of factors    sof(35)=5+7+35=47
int Sum_of_factors(int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num,n;
    printf("Enter number: ");
    scanf("%d",&num);//Enter number 35
    n=Sum_of_factors(num); //store the function in a variable
    printf("Sum of the factors: %d",n); //print the variable
}
int Sum_of_factors(int x)
{
    int sum=0,i;
    for(i=2;i<=x;i++) //2....3.....4....5.....34.....35
    {
        if(x%i==0)//5.....7......35
        {
            sum+=i;//0+5....5+7......12+35
        }
    }
    return sum; ////Returning the result sum=47
}