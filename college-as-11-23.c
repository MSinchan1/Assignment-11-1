#include<stdio.h>
//Smallest common multiplier lcm(24,36)=72
int Smallest_Common_Multiplier(int,int);//Declare the secondary function
                /*  Main Function */
void main()
{
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2); // Enter two number 24,36
    printf("Smallest Common multiplier is: %d",Smallest_Common_Multiplier(num1,num2));//print the returned 
    //value of the called function 72
}
                /*  Secondary Function*/
int Smallest_Common_Multiplier(int x,int y)
{
    int r,scm=x*y; //scm=24*36
    while(x>0) //24.....12
    {
        r=y%x; //36%24=12.....24%12=0
        y=x;//24.....12
        x=r;//12.....0
    }
    return scm/y; //returning the result scm/y=24*36/12
}