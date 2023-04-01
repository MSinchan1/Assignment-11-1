#include<stdio.h>
//Biggest digit                    bg(247156)=7     bg(253)=5
int Biggest_Digit(int); //Declare the secondary function
            /*  Main Function */
void main()
{
    int num,n;
    printf("Enter number: ");
    scanf("%d",&num);//Enter the number 247156
    n=Biggest_Digit(num); //store the function in a variable
    printf("Biggest digit: %d",n); //print the variable
}
int Biggest_Digit(int x)
{
    int max=0;
    while(x>0) //247156.....24715.....2471.....247.....24.....2
    {
        if((x%10)>max)//6....7
        {
            max=x%10;//6.....7
        }
        x/=10;//24715.....2471....247......24.....2.....0
    }
    return max; //Returning the result  max=7
}
