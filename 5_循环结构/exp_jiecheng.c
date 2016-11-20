#include<stdio.h>


int main(int argc, char **argv)
{ 
    int num;
    int count;
    int jiecheng;

    printf("请输入计算的数字：");
    scanf("%d",&num);
    printf("num = %d\n",num);

    for(count = 2; count<=num; count++)
    {
        jiecheng *= count;
    }

    printf(" %d 的阶乘为:%d\n",num,jiecheng);

    return 0;
}
