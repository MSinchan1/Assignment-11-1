#include<stdio.h>
//Increment even digits      inc(23768)=33779
int Increament_even_digits(int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num,n;
    printf("Enter number: ");
    scanf("%d",&num);//Enter the number 23768
    n=Increament_even_digits(num);//store the function in a variable
    printf("New Number is: %d",n);//print the variable
}
int Increament_even_digits(int x)
{
    int remainder,temp=0,i=1;
    while(x>0) //23768....2376....237.....23.....2
    {
        if((x%10)%2==0)//8.....6.....2
        {
            remainder=x%10+1;//8+1......6+1.....2+1
        }
        else
        {
            remainder=x%10;//7.....3
        }
        temp=temp+remainder*i;//0+9*1....9+7*10.....79+7*100....779+3*1000....3779+3*10000
        i*=10;//10....100....1000.....10000....100000
        x/=10;//2376....237.....23.....2.....0
    }
    return temp; //Returning the result temp=33779
}