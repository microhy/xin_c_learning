/**
 *  求圆形的面积和周长
 *  面积 = PI*r*r
 *  周长 = 2*PI*r
 *  注意以浮点型存储变量
 *  
 *  理解常量和变量
 *  理解输入输出函数使用、输出格式
 *  学会使用宏定义的方式
 *  宏定义的浮点数在编译环境下默认为 double，故在数字后面加 f 指明为float型，可避免编译警告如：
 *  #define    PI    (3.1415926f)
 */
#include<stdio.h>

 /*宏定义浮点常数，若不加f指明为float型，则在运算过程中赋值给float型时会有警告*/
#define    PI    (3.1415926f)  

int main()
{
    float r = 0;  //这里可不加f，由于已经定义r 是单精度浮点型，故不会有警告
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