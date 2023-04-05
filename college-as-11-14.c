#include<stdio.h>
//Smallest factor                sf(175)=5       sf(24)=2
int Smallest_factor(int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num); //Enter number 175
    printf("Smallest factor: %d",Smallest_factor(num));//print the secondary function's return value
}
int Smallest_factor(int x)
{
    int factor;
    for(int i=2;i<=x;i++)//2...3...4...5
    {
        if(x%i==0) //5
        {
            factor=i; //5
            break;
        }
    }
    return factor; //Returning the result factor=5
}