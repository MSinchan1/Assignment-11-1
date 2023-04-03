#include<stdio.h>
//Sum of digits between given range sdm(23158,3,9)= 8+5+3=16. sdm(516984,5,8)=8+6+5=19
int Sum_of_Digits(int,int,int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num,l_limit,u_limit,n;
    printf("Enter number,lower_limit and upper_limit: ");
    scanf("%d%d%d",&num,&l_limit,&u_limit); //Enter number and an integer 23158   3    9
    n=Sum_of_Digits(num,l_limit,u_limit); //calling the function through a variable
    printf("Sum of the digits is: %d",n); //print the returned result 16
}
                    /*  Secondary Function  */
int Sum_of_Digits(int x,int y,int z)
{
    int sum=0;
    while(x>0) //23158.......2315.....231.....23.....2
    {
        if(x%10>=y && x%10<=z) //8.....5.....3
        {
            sum+=x%10; //0+8....8+5.....13+3
        }
        x/=10; //2315.....231.....23.....2.....0
    }
    return sum; //returning the result sum=16
}