#include<stdio.h>


int main(int argc, char **argv)
{ 
    int num;
    int count;
    int jiecheng;

    printf("�������������֣�");
    scanf("%d",&num);
    printf("num = %d\n",num);

    for(count = 2; count<=num; count++)
    {
        jiecheng *= count;
    }

    printf(" %d �Ľ׳�Ϊ:%d\n",num,jiecheng);

    return 0;
}
