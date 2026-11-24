//if语句1

#include <stdio.h>
int main(void)
{
   int max,a,b;
   printf("请输入a和b的值\n");
   scanf("%d %d",&a,&b);
    // if (a>b)
    // {
    //     max=a;
    // }
    // else
    // {
    //     max=b;
    // }
    // printf("ab中最大值是%d",max);

    max=a;
    if (b>a)
    {
        max=b;
    }
    printf("ab中最大值是%d",max);

    //两种写法，但其实我还是更倾向于前面一种思维更简单的写法
    

    return 0;
}