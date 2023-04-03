#include<stdio.h>
//26.	kth smallest factor              ksf(24,5)=8  ksf(35,2)=7
int Kth_Smallest_factor(int,int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num,k,SF;
    printf("Enter a number and an integer: ");
    scanf("%d%d",&num,&k); //Enter number and integer 24   5
    SF=Kth_Smallest_factor(num,k);//calling the function through a variable
    printf("Kth Smallest factor is: %d",SF); //print the returned result 8
}
                 /*  Secondary Function */
int Kth_Smallest_factor(int x,int y)
{
    int i,fact,f=1;
    for(i=2;i<=x;i++) //2....3.....4.....5.....6....7.....8
    {
        if(x%i==0 && f<y+1)//2&1......3&2......4&3.....6&4.......8&5
        {
            fact=i; //2.....3......4......6.....8
            f+=1; //2....3....4....5....6
        }
    }
    return fact; //returning the result fact=8
}