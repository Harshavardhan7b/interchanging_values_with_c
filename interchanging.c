/* This Code interchanges the values of two integers */
#include<stdio.h>
int main (void)
{
    int a,b,temp1,temp2;
    printf("Enter 1st number : \n");
    scanf("%d",&a);
    printf("Enter 2nd number : \n");
    scanf("%d",&b);
    temp1 = a; // to store the value a 
    temp2 = b; // to stor the value b 
    a = b; // now value of a is stored in b 
    b = temp1; // now the value of b is stored in a 
    printf("You entered the number : %d, it is now : %d\n",temp1,temp2);
    printf("You entered the number : %d, it is now : %d\n",temp2,temp1);
    return 0;
    }
