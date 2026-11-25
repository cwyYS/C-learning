#include <stdio.h>
int main(void)
{
    const double ShiXin=8.25;
    const int STANDARD=40;  //整型和浮点型可以混用？
    
    double pay=0.0;
    int hours;
    printf("请输入该天工作小时数\n");
    scanf("%d",&hours);
    if (hours>STANDARD)
    {
        pay=STANDARD*ShiXin+(hours-STANDARD)*(ShiXin*1.5);
    }
    else
    {
        pay=ShiXin*hours;
    }
printf("该天工资是%lf元\n",pay);
    //eee,写完才发现一天貌似没有24小时？（：


    return 0;
}