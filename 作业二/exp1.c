#include<stdio.h>

int main()
{
    unsigned char test_ipx=0;

    printf("������test_ipx = ");
    scanf("%d",&test_ipx);
    printf("\n ��ӡ��ʾ�� test_ipx = %d\n",test_ipx);
   
    switch(test_ipx)
    {
    	case 1:printf("���ص�ַ\n");//break;
    	case 200:printf("ĳ̨���Եĵ�ַ\n");break;
    	case 0:printf("ȫ0�����ַ\n");break;
    	case 255:printf("ȫ1�����ַ\n");break;
	default: printf("лл����\n");break;  
    }

    puts("--exit main--");
    return 0;
}
