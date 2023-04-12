#include<stdio.h>
//Sum of common factors   smcf(84,105)=3+7+21=31
int Smallest_common_factor(int,int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);//Enter two numbers 84    105
    printf("Sum of common factors is: %d",Smallest_common_factor(num1,num2)); //print the returned result 31
}
                /*  Secondary Function*/
int Smallest_common_factor(int x,int y)
{
    
    int i,sum=0;
    for(i=2;i<=x+y;i++) //2.....3......4.....5....188....189
    {
        if(x%i==0 && y%i==0) //3.....7.....21
        {
            sum+=i; //0+3....3+7.....10+21
        }
    }
    return sum; //returning the result sum=31
}
