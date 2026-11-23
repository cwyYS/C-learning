#include <stdio.h>
int main(void)
{
    int a=0,b=0;

    // 为什么这里不能写成 int a,b=0;
    //              或者 int a=0;
    //                   int b=0;    ??


    printf("请输入a,b:\n");
    scanf("%d,%d",&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}