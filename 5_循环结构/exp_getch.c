#include<stdio.h>
void main()
{
    int count=0,ch;
    printf("\n ������һ���ַ���");
    while((ch=getchar())!=EOF)
    {   
        printf("ch=%c\n",ch);
        if(ch==' ')
            break;
        count++;
    }
    printf("\n ���� %d ����Ч�ַ���\n",count);
}
