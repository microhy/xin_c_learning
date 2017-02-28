#include<stdio.h>


int main()
{
    char ch_temp;
    char ch_temp2;

    printf("\n please input a char:\n");
    
    fflush(stdin);
    scanf("%c",&ch_temp);
 
    printf("\n '%c' -- ascii -- %d\n",ch_temp,ch_temp);
    
    printf("\n please input a char:\n");
//    fflush(stdin);
    scanf("%c",&ch_temp2);

    printf("\n '%c' -- ascii -- %d\n",ch_temp2,ch_temp2);

    return 0;
}
