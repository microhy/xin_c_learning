/**
 *  求正方形的面积和周长
 *  面积 = 边长*边长
 *  周长 = 边长*4
 *  注意以浮点型存储变量
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
