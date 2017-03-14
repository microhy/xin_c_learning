#include<stdio.h>

#define    N     (20)   //宏定义数组的长度
int main()
{
    int a,b,c;
    int y[N]={0};   //定义一个长度为20的整型数组
    int x=0;
    int max=0,min=0;
    char ch[5]={'c','h','i','n','a'};
	
    printf("please input a b c :");
	fflush(stdout);
    scanf("%d%d%d",&a,&b,&c);
	printf("input ok: a=%d, b=%d, c=%d\n",a,b,c);
	fflush(stdout);
	
    for(x=0; x<N; x++)  //求y的值
    {
		y[x]=a*x*x + b*x + c;
    }
	max=y[0];
	min=y[0];
    for(x=0; x<N; x++)  //打印输出
    {
		if(max<y[x])
		{
			max=y[x];
		}
		if(min>y[x])
		{
			min=y[x];
		}
		printf("y[%d]=%d\n",x,y[x]);
    }
	printf("max = %d\n",max);
	printf("min = %d\n",min);
	
    puts("\n-------------------------");
	puts("name   : zhangsan");
	puts("number : 0123456");
	puts("date   : 2017-03-09");
	puts("-------------------------");
    return 0;
}
