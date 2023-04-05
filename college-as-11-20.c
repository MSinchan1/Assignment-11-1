#include<stdio.h>
//Sum of numbers                smn(5,9)=5+6+7+8+9=35
int Sum_of_Number(int,int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int n1,n2;
    printf("Enter Lower_limit & Upper_limit: ");
    scanf("%d%d",&n1,&n2); //Enter lower limit and upper limit: 5 9
    printf("Sum of Numbers: %d",Sum_of_Number(n1,n2)); //print the secondary function's return value
}
int Sum_of_Number(int x,int y)
{
    int sum=0;
    for(int i=x;i<=y;i++) //5.....6......7.....8....9
    {
        sum=sum+i;//0+5....5+6....11+7.....18+8.....26+9
    }
    return sum;//returning the result sum=35
}