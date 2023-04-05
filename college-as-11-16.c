#include<stdio.h>
//Second smallest factor    ssf(130)=5   ssf(24)=3
int Second_Smallest_factor(int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);//Enter number 130
    printf("Second Smallest Factor is: %d",Second_Smallest_factor(num)); //print the secondary function's return value
}
            /* Secondary Function */
int Second_Smallest_factor(int x)
{
    int i,f=0,S_F;
    for(int i=2;i<=x;i++)//2...3...4.....127....128....129...130
    {
        if(x%i==0 && f<2) //2&0.....5&1
        {
            S_F=i; //2...5
            f++; //flag value: 1...2
        }
    }
    return S_F; //Returning the result S_F=5
}