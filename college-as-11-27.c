#include<stdio.h>
//Sum of digits of a number (x) which are more than y mr(273563,4)=6+5+7=18   mr(15732,3)=7+5
int Sum_of_Digits(int,int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int x,y,n;
    printf("Enter number and an integer: ");
    scanf("%d%d",&x,&y); //Enter number and an integer 273563  4
    n=Sum_of_Digits(x,y); //calling the function through a variable
    printf("Sum of the digits is: %d",n); //print the returned result 18
}
                    /*  Secondary Function */
int Sum_of_Digits(int num,int k)
{
    int sum=0;
    while(num>0) //273563....27356.....2735.....273......27......2
    {
        if(num%10>k) //6......5......7
        {
            sum+=num%10; //0+6....6+5.....11+7
        }
        num/=10; //27356.....2735.....273......27......2.....0
    }
    return sum; //returning the result sum=18
}