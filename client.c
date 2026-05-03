#include<stdio.h>
#include "staticlibrary.h"

int main()
{
    int a , b = 0;
    int iRet = 0;
    

    printf("Enter they first Number:\n");
    scanf("%d",&a);

    printf("Enter they second Number:\n");
    scanf("%d",&b);

    iRet = Addition(a,b);
    printf("Addition is = %d\n",iRet);

    iRet = Substraction(a,b);
    printf("Substraction is = %d\n",iRet);

    iRet = Multiplication(a,b);
    printf("Multiplication will be = %d\n",iRet);

    iRet = Division(a,b);
    printf("Division will be = %d\n",iRet);

    return 0;

}