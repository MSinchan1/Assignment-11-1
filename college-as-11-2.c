#include<stdio.h>
//Second digit     sd(23145)=3     sd(314)=1
int Second_digit(int);//declare the secondary function
             /*    Main function   */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num); //Enter the number: 21345 
    printf("Second digit is: %d",Second_digit(num));//print the returned value from the declared function
}
int Second_digit(int x)
{
    int d;
    while(x>10) //21345....2134.....213......21
    {
        d=x%10;//5......4.....3.....1
        x/=10;//2134.....213.....21......2
    }
    return d; //returing the result
}