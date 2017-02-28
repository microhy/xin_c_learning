#include<stdio.h>

int main()
{
    int numa=0,numb=0;  //存储输入值，运行过程不能改变
    int cnt=0;          //用于个数计数
    int tempa=0;        //用于从numa 递增搜索到numb
    
    printf("请在英文下输入以空格隔开：numa numb = ");
    scanf("%d%d",&numa,&numb);
    printf("输入区间 [%d,%d]\n",numa,numb);
    
    tempa = numa;  //给 tempa 起点值
    if(tempa%2)    //对2取余数非0，即说明 tempa 是奇数
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
    printf("\n[%d,%d]区间偶数总个数为%d\n",numa,numb,cnt);
    puts("\n------------------------");
    printf("tab_size\thello");
    return 0;
}

