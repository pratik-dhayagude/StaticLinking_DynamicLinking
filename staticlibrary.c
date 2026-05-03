#include "staticlibrary.h"

int Addition(int a,int b)
{


    return a+b;
}

int Substraction(int a,int b)
{
    int temp = 0;
    if(a<b)
    {
        temp = a;
        a = b;
        b = temp;
        
    }
    return a-b;
}

int Multiplication(int a ,int b)
{
    return a*b;
}

int Division(int a,int b)
{
    if(b == 0)
    {
        return -1;
    }
    return a/b;
}