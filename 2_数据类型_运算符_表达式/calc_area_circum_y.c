/**
 *  ��Բ�ε�������ܳ�
 *  ��� = PI*r*r
 *  �ܳ� = 2*PI*r
 *  ע���Ը����ʹ洢����
 *  
 *  ��ⳣ���ͱ���
 *  ��������������ʹ�á������ʽ
 *  ѧ��ʹ�ú궨��ķ�ʽ
 *  �궨��ĸ������ڱ��뻷����Ĭ��Ϊ double���������ֺ���� f ָ��Ϊfloat�ͣ��ɱ�����뾯���磺
 *  #define    PI    (3.1415926f)
 */
#include<stdio.h>

 /*�궨�帡�㳣����������fָ��Ϊfloat�ͣ�������������и�ֵ��float��ʱ���о���*/
#define    PI    (3.1415926f)  

int main()
{
    float r = 0;  //����ɲ���f�������Ѿ�����r �ǵ����ȸ����ͣ��ʲ����о���
    float area = 0;
    float circum = 0;
    
    printf("please input the r = ");
    scanf("%f",&r);
    
    area = PI*r*r;
    circum = 2*PI*r;
    
    printf("the area  = %f\n",area);
    printf("the circum  = %f\n",circum);
    
    return 0;
}