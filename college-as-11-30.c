#include<stdio.h>
/* 	Replace kth last digit by a given digit
       rep(231576,3,8)=231876   rep(375468,1,9)=375469 */
int Replace_digit(int,int,int);
void main()
{
    int num,k,l,n;
    printf("Enter a number and an integer and new digit: ");
    scanf("%d%d%d",&num,&k,&l); //Enter number and an integer 231576     3      8
    n= Replace_digit(num,k,l); //calling the function through a variable
    printf("New number is: %d",n); //print the returned result 231876
}
  /*  Secondary Function */
int  Replace_digit(int x,int y,int z)
{
    int i,temp=0,mul=1;
    for(i=1;i<y;i++) //1....2
    {
        temp=temp+x%10*mul; //0+6*1.....6+7*10
        mul*=10; //10.....100
        x/=10; //23157.....2315
    }
    return x/10*mul*10+z*mul+temp;// return the result new number:
    // 2315/10*100*10+8*100+76 = 231*1000+8*100+76 = 231000+800+76 = 231876
}