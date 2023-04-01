#include<stdio.h>
//Smallest factor                sf(175)=5       sf(24)=2
int Smallest_factor(int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num,n;
    printf("Enter number: ");
    scanf("%d",&num); //Enter number 175
    n=Smallest_factor(num); //store the function in a variable
    printf("Smallest factor: %d",n);//print the variable
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