#include<stdio.h>
void main()
{
    int count=0,ch;
    printf("\n 请输入一行字符：");
    while((ch=getchar())!=EOF)
    {   
        printf("ch=%c\n",ch);
        if(ch==' ')
            break;
        count++;
    }
    printf("\n 共有 %d 个有效字符。\n",count);
}
