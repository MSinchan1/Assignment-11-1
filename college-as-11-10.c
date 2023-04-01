#include<stdio.h>
//Number of digits             nd(247159)=6     nd(251)=3
void Number_of_Digits(int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);//Enter the number 247159
    Number_of_Digits(num); //call the secondary function
}
void Number_of_Digits(int x)
{
    int digit=0;
    while(x>0) //247159....24715.....2471....247....24......2
    {
        digit+=1;//1.....2.....3.....4.....5.....6
        x/=10; //24715.....2471....247....24......2
    }
    printf("Number of digits: %d",digit);//6
}
