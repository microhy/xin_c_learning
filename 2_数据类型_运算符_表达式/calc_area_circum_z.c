/**
 *  �������ε�������ܳ�
 *  ��� = �߳�*�߳�
 *  �ܳ� = �߳�*4
 *  ע���Ը����ʹ洢����
 */
#include<stdio.h>

int main()
{
    float side_len = 0;
    float area = 0;
    float circum = 0;
    
    printf("please input the side length = ");
    scanf("%f",&side_len);
    
    area = side_len*side_len;
    circum = side_len*4;
    
    printf("the area  = %f\n",area);
    printf("the circum  = %f\n",circum);
    
    return 0;
}
