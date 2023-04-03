#include<stdio.h>
//kth last digit     kld(2314978,3)=9
int Kth_Last_Digit(int,int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num,k,n;
    printf("Enter a number and an integer: ");
    scanf("%d%d",&num,&k);//Enter number and integer   2314978   3
    n=Kth_Last_Digit(num,k);//store the function in a variable
    printf("Kth Last Digit is: %d",n); //print the variable
}
    /*            Secondary Function*/
int Kth_Last_Digit(int x,int y)
{
    int remainder;
    for(int i=1;i<=y;i++) //1...2....3
    {
        remainder=x%10; //8....7.....9
        x/=10;//231497.....23149......2314
    }
    return remainder; //Returning the result remainder==9
}
