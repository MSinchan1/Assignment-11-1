#include<stdio.h>
#include<math.h>
//Integer square root          isr(25)=5    isr(49)=7
int Square_root(int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);//Enter number 25
    printf("Square root of the given number is: %d",Square_root(num)); //print the secondary function's return value
}
        /*      Secondary Function      */
int Square_root(int x)
{
    int Sq_Root=sqrt(x); //square root of the given number using sqrt function through math.h library sqrt(25==5) 
    return Sq_Root; //returning the result Sq_Root=5
}
