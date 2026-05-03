#include <stdio.h> 
#include <stdlib.h>
#include <dlfcn.h>

typedef int (*fp) (int,int); 

int main()
{
    void *handel = NULL;
    char * err = NULL;
    fp Add = NULL;
    fp sub = NULL;
    fp Multiplication = NULL;
    fp Div = NULL;
    int iValue1,iValue2,iRet = 0;
  
    printf("Enter they first number:\n");
    scanf("%d",&iValue1);

    printf("Enter they second number:\n");
    scanf("%d",&iValue2);

    handel = dlopen("./libstaticlibrary.so",RTLD_LAZY);
    if(!handel)
    {
          fprintf(stderr, "dlopen failed: %s\n", dlerror());      
          return 1;
    }
    Add = (fp)dlsym(handel, "Addition");

    err = dlerror();

    if(err != NULL)
    {
        fprintf(stderr, "dlsym(Addition) failed: %s\n", err);       
        dlclose(handel);     
        return 1;
    }


     iRet = Add(iValue1,iValue2);
    printf("Addition will be = %d\n",iRet);



     sub = (fp)dlsym(handel, "Substraction");    
     err = dlerror();    
     if (err != NULL)    
     {        
        fprintf(stderr, "dlsym(Substraction) failed: %s\n", err);     
        dlclose(handel);       
        return 1;   
     }

    iRet = sub(iValue1,iValue2);

     printf("Substraction will be = %d\n",iRet);


     return 0;



}