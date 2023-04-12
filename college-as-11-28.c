#include<stdio.h>
//Sum of first k factors        sm(24,5)=2+3+4+6+8=23
int Sum_of_first_k_factors(int,int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num,k;
    printf("Enter number and an  integer: ");
    scanf("%d%d",&num,&k); //Enter number and an integer 24    5
    printf("Sum of first k factors is : %d",Sum_of_first_k_factors(num,k)); //print the secondary function's returned 
}
                /*  Secondary Function */
int Sum_of_first_k_factors(int x,int y)
{
    int i,sum=0,f=0;
    for(i=2;i<=x;i++) //2.....3......4.....5.....6.....7.....8
    {
        if(x%i==0 && f<y) //2&0.....3&1......4&2........6&3......8&4
        {
            sum+=i; //0+2....2+3.....5+4......9+6.....15+8
            f+=1; //0.....1.....2.....3.....4......5
        }
    }
    return sum; //returning the result sum=23
}