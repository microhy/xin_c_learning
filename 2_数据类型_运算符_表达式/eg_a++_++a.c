#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    char a=0,b=0;
    
    a = 10;
    b = ++a + ++a;
    printf("a = %d, b = %d\n",a,b);    
    
    a = 10;
    b = a++ + ++a;
    printf("a = %d, b = %d\n",a,b);    

    a = 10;
    b = a++ + a++;
    printf("a = %d, b = %d\n",a,b);    

    a = 10;
    b = (a++) + (++a);
    printf("a = %d, b = %d\n",a,b);
    
    return 0;
}
