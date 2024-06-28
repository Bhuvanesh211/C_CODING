#include <stdio.h>

int main() 
{
    register int num = 1;
    printf("Enter the value of num : ");
    scanf("%d", &num);//error: address of register variable 'num' requested
    //7 |     scanf("%d", &num);
    
    if (--num) 
    {
        printf("The condition is true.\n");
    } 
    else 
    {
        printf("The condition is false.\n");
    }
    return 0;
}

