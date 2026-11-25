//4.1.1
//循环开始  while当
//输出一个数的位数
#include <stdio.h>
int main(void)
{ 
    printf("输入一个数\n");
    int x;
    int n=0;
    scanf("%d",&x);
    n++;
    x/=10;

    while (x<0)
    {
        x=-x;
    }
                                          //这里的顺序先后还有讲究
    while (x>0)
    {
        n++;
        x/=10;
        printf("x=%d,n=%d\n",x,n);
    }

    // while (x<0)
    // {
    //     x=-x;
    // }                      若用这一段，则x变号后不会从头再过一遍，而是从25行开始过
    
    
printf("%d\n",n);

    return 0;
    //这个数的大小有限制；
    //循环体内要有改变条件判定结果的机会，否则会死循环
    //对于死循环，程序会一次都不执行
}