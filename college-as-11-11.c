#include<stdio.h>
//Location of biggest digit loc(247156)=4   loc(215)=1
int Location_Biggest(int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num,n;
    printf("Enter number: ");
    scanf("%d",&num); //Enter the number 247159
    n=Location_Biggest(num); //store the function in a variable
    printf("Location of the Biggest digit is: %d",n);//print the variable
}
int Location_Biggest(int x)
{
    int max=0,location_max,location=1;
    while(x>0) //247156.....24715.....2471.....247.....24.....2
    {
        if((x%10)>max) //6......7
        {
            max=x%10; //6......7
            location_max=location;//1.....4
        }
        location++;//2.....3.....4.....5....6
        x/=10;//24715.....2471.....247.....24.....2
    }
    return location_max; //Returning the result  max=7
}