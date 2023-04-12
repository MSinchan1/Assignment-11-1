#include<stdio.h>
//Delete kth last digit            dl(4231576,3)=423176
int Delete_kth_last_digit(int,int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num,k;
    printf("Enter a number and an integer: ");
    scanf("%d%d",&num,&k); //Enter number and an integer 4231576     3
    printf("New number is: %d",Delete_kth_last_digit(num,k)); //print the secondary function's returned 
}
                /*  Secondary Function */
int Delete_kth_last_digit(int x,int y)
{
    int i,temp=0,mul=1;
    for(i=1;i<y;i++) //1....2
    {
        temp=temp+x%10*mul; //0+6*1.....6+7*10
        mul*=10; //10.....100
        x/=10; //423157.....42315
    }
    return x/10*mul+temp;// return the result new number: 42315/10*100+76 = 4231*100+76 = 423100+76 = 423176
}