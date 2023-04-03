#include<stdio.h>
//Smallest common factor   scf(84,105)=3 
int Smallest_common_factor(int,int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num1,num2,S_C_F;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);//Enter two numbers 84    105
    S_C_F=Smallest_common_factor(num1,num2); //calling the function through a variable
    printf("Smallest common factor is: %d",S_C_F); //print the returned result 3
}
                /*  Secondary Function*/
int Smallest_common_factor(int x,int y)
{
    
    int i,SCF;
    for(i=2;i<=x+y;i++) //2.....3
    {
        if(x%i==0 && y%i==0) //3
        {
            SCF=i; //3
            break;
        }
    }
    return SCF; //returning the result SCF=3
}
