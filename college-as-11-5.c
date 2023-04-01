#include<stdio.h>
//Sum of first and third digits    sft(27145)=2+1=3
void Sum_First_Third(int); //declare the secondary function
         /*    Main function   */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num); //Enter the number:27145
    Sum_First_Third(num); //call the secondary function 
}
void Sum_First_Third(int x)
{
    int d,sum=0,a;
    a=x;//27145
    while(a>10)//27145....2714.....271.....27
    {
        a/=10;//2714.....271.....27.....2
    }
    for(int i=1;i<=3;i++)
    {
        d=x%10;//5......4.....1
        x/=10; //2714.....271......27
    }
    printf("Sum of First and Third digit is: %d",a+d); //2+1
}