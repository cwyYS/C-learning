#include <stdio.h>
int main(void)
{
    int hour1,minute1;
    int hour2,minute2;
printf("请输入第一个时间");

    scanf("%d %d",&hour1,&minute1);
    
printf("请输入第二个时间");

    scanf("%d %d",&hour2,&minute2);

    int ih=hour2-hour1,im=minute2-minute1;
    if (im<0)                //掌握断点
    {
        im+=60;
        ih--;
    }
    printf("时间差是%d小时%d分钟",ih,im);//这样其实解决的是借位的事情，默认了h2大于h1




    return 0;
}