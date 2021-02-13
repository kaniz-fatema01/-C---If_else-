#include <stdio.h>

int main()
{
    float a,b;
    printf("a= ");
    scanf("%f", &a);
    
    printf("b= ");
    scanf("%f", &b);
    
if (a==b)
{  
    printf("Numbers are equal");
}
else if(a<b)
{
    
    printf("b is greater");
}

    return 0;
}
