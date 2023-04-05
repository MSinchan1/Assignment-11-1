#include<stdio.h>
//Exchange last two digits  ex(21715)=21751 
int Exchange_last_two(int);//Declare the secondary function
            /*  Main Function */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);//Enter the number 21715
    printf("New number is: %d",Exchange_last_two(num));//print the secondary function's return value
}
int Exchange_last_two(int x)
{
    int New_Num;
    New_Num=x/100*100+x%10*10+x%100/10;  //21715/100*100+21715%10*10+21715%100/10==21751
    return New_Num; //Returning the result  New_Num==21751
}
