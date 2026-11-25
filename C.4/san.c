//分段函数
#include <stdio.h>
int main(void)
{
    int x;
    double y;
    printf("请输入x\n");
    scanf("%d",&x);

    if (x>0)
    {
        if (x>3)
        {
            y=x*x*x;
        }
        else
        {
            y=x*x;
        }
    }
    else
    {
        if (x<-3)
        {
            y=x*x*x*x;
        }
        else
        {
            y=x*x*x*x*x;
        }
        
    }
    printf("%lf\n",y);


    // switch (x>=0)
    // {
    // case 1:
    //     y=2*x;
    //     break;
    
    // default:
    //    y=-1;
    //     break;
    // }
    // printf("%d\n",y);
    //我是这么想的：若x>0,则x>=0这个运算成立，不是会输出1吗，这样就进入case 1了，怎么最后答案不对呢
    

    return 0;
}