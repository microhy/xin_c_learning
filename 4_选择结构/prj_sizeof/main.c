#include<stdio.h>

int main(int argc, char **argv)
{
    int a[10] = {0,1,2,3,4};
    
    printf("sizeof(char) = %d\n",sizeof(char));    
    printf("sizeof(short int) = %d\n",sizeof(short int));    
    printf("sizeof(int) = %d\n",sizeof(int));    
    printf("sizeof(long) = %d\n",sizeof(long));    
    printf("sizeof(long long) = %d\n",sizeof(long long));    
    
    printf("sizeof(float) = %d\n",sizeof(float));    
    printf("sizeof(double) = %d\n",sizeof(double));    
    
    printf("sizeof(a) = %d\n",sizeof(a));    
    printf("sizeof(&a) = %d\n",sizeof(&a));
    
    return 0;
}
