#include<stdio.h>
//Last digit multiple of 3     ld(619127)=9
void Last_Mul_3(int); //Declare the secondary function
            /*  Main Function */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);//Enter the number 619127
    Last_Mul_3(num); //call the secondary function 
}
void Last_Mul_3(int x)
{
    while((x%10)%3!=0)// 7.....2.....1.....9
    {
        x/=10;//61912......6191.....619
    }
    printf("Last digit multiple of 3: %d",x%10);//619%10==9
}