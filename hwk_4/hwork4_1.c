#include<stdio.h>

int main()
{
    float numa=0,numb=0;  //定义单精度浮点数，起点a、终点b
    int divide=0;         //均分的总份数
    float  width=0;       //每个小矩形的宽度
    double area=0;        //小矩形面积的临时存储
    double sum_area=0;    //总面积值
    float x=0;
     
    printf("请在英文下输入以空格隔开：numa numb = ");
    scanf("%f%f",&numa,&numb);
    printf("请在英文下输入divide = ");
    scanf("%d",&divide);
    printf("输入区间 [%f,%f] 共分为%d份\n",numa,numb,divide);
    width = (numb-numa)/divide;
    printf("小矩形宽度 %f \n",width);
    
    puts("\n------------------------");
    for(x=numa; x<numb; x+=width)
    {
        area = x*x*width;
        sum_area += area;
    }
    
    printf("计算的近似总面积为 %f\n",sum_area);
    puts("\n---------exit main---------------");
    return 0;
}

