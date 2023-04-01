#include<stdio.h>
//Last even digit                led(23145)=4      led(683)=8
void Last_Even(int); //Declare the secondary function
        /*  Main Function */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num); //Enter the number 23145
    Last_Even(num); //call the secondary function 
}
void Last_Even(int x)
{
    while(x%2!=0) //23145.....2314
    {
        x/=10;//2314
    }
    printf("Last even digit is: %d",x%10);//2314%10==4
}