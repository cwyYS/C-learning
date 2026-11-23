#include <stdio.h>
int main(void)
{
    // // int height;
    // int foot,inch;
    // printf("请输入英尺英寸");
    // scanf("%d %d",&foot,&inch);
    // // height=(foot+inch/12)*0.3048;
    // printf("身高是%d米\n",(foot+inch/12)*0.3048);
    
    // return 0;

    // float height,foot,inch;
    // printf("请输入英尺英寸");
    // scanf("%f %f",&foot,&inch);
    // height=(foot+inch/12)*0.3048;
    // printf("身高是%f米\n",height);

    // float 也能用，但没必要。改 double 更稳：


    double height,foot,inch;
    printf("请输入英尺和英寸");
    scanf("%lf %lf",&foot,&inch);

// 球球了死脑记住scanf里面一定要写&吧。。。。
    
    height=(foot+inch/12)*0.3048;
    printf("身高为%lf米",height);
    return 0;




}