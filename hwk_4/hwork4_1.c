#include<stdio.h>

int main()
{
    float numa=0,numb=0;  //���嵥���ȸ����������a���յ�b
    int divide=0;         //���ֵ��ܷ���
    float  width=0;       //ÿ��С���εĿ��
    double area=0;        //С�����������ʱ�洢
    double sum_area=0;    //�����ֵ
    float x=0;
     
    printf("����Ӣ���������Կո������numa numb = ");
    scanf("%f%f",&numa,&numb);
    printf("����Ӣ��������divide = ");
    scanf("%d",&divide);
    printf("�������� [%f,%f] ����Ϊ%d��\n",numa,numb,divide);
    width = (numb-numa)/divide;
    printf("С���ο�� %f \n",width);
    
    puts("\n------------------------");
    for(x=numa; x<numb; x+=width)
    {
        area = x*x*width;
        sum_area += area;
    }
    
    printf("����Ľ��������Ϊ %f\n",sum_area);
    puts("\n---------exit main---------------");
    return 0;
}

