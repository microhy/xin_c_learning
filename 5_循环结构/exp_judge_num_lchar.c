#include<stdio.h>


int main(int argc, char **argv)
{
    char ch_input = 0;

    printf("������һ���ַ���");
    scanf("%c",&ch_input);
    printf("����ɹ���%c\n",ch_input);
    printf("-----------\n");
    
    if(ch_input>='0' && ch_input<='9')
    {
        printf("����������֣�%c, ��ASCIIֵ��%d\n",ch_input,ch_input);
    }
    else if(ch_input>='a' && ch_input<='z')
    {
        printf("�������Сд��ĸ��%c, ��ASCIIֵ��%d\n",ch_input,ch_input);
    }
    else if(ch_input>='A' && ch_input<='Z')
    {
        printf("������Ǵ�д��ĸ��%c, ��ASCIIֵ��%d\n",ch_input,ch_input);
    }
    else
    {
        printf("���벻������ַ���%c, ��ASCIIֵ��%d\n",ch_input,ch_input);
    }


    printf("----exit main-------\n");
    return 0;
}
