#include<stdio.h>

int main(int argc,char **argv)
{
    int num = 0; // input number
    int i = 0;

    printf("please input a number:");
    scanf("%d",&num); 
    
    printf("������� %d ��ӡ�ɹ�\n",num);

    for( i=2; i<num; i++) //��2��ʼ���� �����һ����
    {
        if((num%i)==0) //�� i ȡ����Ϊ0��˵���ɱ� i ����
        {
            printf("������� %d ��������\n",num);
            return 0; //�������� i �������������أ�����Ĵ��벻�ټ���ִ��
        }
        else
        {
            continue; //����������
        }
    }
    
    printf("������� %d ������\n",num);

    return 0;
}
