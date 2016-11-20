#include<stdio.h>


int main(int argc, char **argv)
{
    char ch_input = 0;

    printf("请输入一个字符：");
    scanf("%c",&ch_input);
    printf("输入成功：%c\n",ch_input);
    printf("-----------\n");
    
    if(ch_input>='0' && ch_input<='9')
    {
        printf("输入的是数字：%c, 其ASCII值：%d\n",ch_input,ch_input);
    }
    else if(ch_input>='a' && ch_input<='z')
    {
        printf("输入的是小写字母：%c, 其ASCII值：%d\n",ch_input,ch_input);
    }
    else if(ch_input>='A' && ch_input<='Z')
    {
        printf("输入的是大写字母：%c, 其ASCII值：%d\n",ch_input,ch_input);
    }
    else
    {
        printf("输入不处理的字符：%c, 其ASCII值：%d\n",ch_input,ch_input);
    }


    printf("----exit main-------\n");
    return 0;
}
