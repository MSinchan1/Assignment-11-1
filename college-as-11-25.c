#include<stdio.h>
//Greatest common factor   gcd(280,350)=70
int Greatest_common_factor(int,int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num1,num2;
    printf("Enter two number: "); 
    scanf("%d%d",&num1,&num2);//Enter two number :  280,350
    printf("Greatest Common factor is: %d",Greatest_common_factor(num1,num2)); //print the returned 
    //value of the called function
}
                /*  Secondary Function*/
int Greatest_common_factor(int x,int y)
{
    int r;
    while(x>0) //280 ...70
    {
        r=y%x;//350%280=70....280%70=0
        y=x; //280.....70
        x=r;//70....0
    }
    return y; //returning the result GCF   y=70
}