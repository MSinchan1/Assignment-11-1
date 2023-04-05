#include<stdio.h>
//Sum of first two digits    sfs(27145)=2+7=9
int Sum_First_two(int);//declare the secondary function
        /*   Main function  */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);//Enter the number: 27145
    printf("Sum of first two digits: %d",Sum_First_two(num));//print the returned value from the declared function
}
int Sum_First_two(int x)
{
    int d,sum=0;
    while(x>10)//27145.....2714.....271......27
    {
        d=x%10;//5.......4......1.......7
        x/=10;//2714......271.......27......2
    }
    sum=d+x;//7+2
    return sum;////returing the result
}