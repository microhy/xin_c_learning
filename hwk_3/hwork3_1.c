#include<stdio.h>

int main()
{
    int numa=0,numb=0;  //�洢����ֵ�����й��̲��ܸı�
    int cnt=0;          //���ڸ�������
    int tempa=0;        //���ڴ�numa ����������numb
    
    printf("����Ӣ���������Կո������numa numb = ");
    scanf("%d%d",&numa,&numb);
    printf("�������� [%d,%d]\n",numa,numb);
    
    tempa = numa;  //�� tempa ���ֵ
    if(tempa%2)    //��2ȡ������0����˵�� tempa ������
    {
        tempa += 1;
    }
    else
    {
        //do nothing
    }
    puts("\n------------------------");
    while(tempa <= numb)
    {        
        printf("%d\t",tempa);
        cnt++;
        tempa += 2;
        if((cnt%5)==0) 
        {
            printf("\n");
        }
    }
    puts("\n------------------------");
    printf("\n[%d,%d]����ż���ܸ���Ϊ%d\n",numa,numb,cnt);
    puts("\n------------------------");
    printf("tab_size\thello");
    return 0;
}

