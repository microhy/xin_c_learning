#include<stdio.h>

int main(int argc,char **argv)
{
    int num = 0; // input number
    int i = 0;

    printf("please input a number:");
    scanf("%d",&num); 
    
    printf("输入的数 %d 打印成功\n",num);

    for( i=2; i<num; i++) //从2开始除到 本身减一的数
    {
        if((num%i)==0) //对 i 取余数为0，说明可被 i 整除
        {
            printf("输入的数 %d 不是素数\n",num);
            return 0; //若有数字 i 整除，函数返回，下面的代码不再继续执行
        }
        else
        {
            continue; //不能整除，
        }
    }
    
    printf("输入的数 %d 是素数\n",num);

    return 0;
}
