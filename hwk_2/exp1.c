#include<stdio.h>

int main()
{
    unsigned char test_ipx=0;

    printf("请输入test_ipx = ");
    scanf("%d",&test_ipx);
    printf("\n 打印提示： test_ipx = %d\n",test_ipx);
   
    switch(test_ipx)
    {
    	case 1:printf("网关地址\n");//break;
    	case 200:printf("某台电脑的地址\n");break;
    	case 0:printf("全0特殊地址\n");break;
    	case 255:printf("全1特殊地址\n");break;
	default: printf("谢谢测试\n");break;  
    }

    puts("--exit main--");
    return 0;
}
