//比较abc三个数的大小
//嵌套if else

#include <stdio.h>
int main(void)
{
    int max,a,b,c;
    printf("请输入abc\n");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b)
    {
        if (a>c)
        {
            max=a;
        }
        else
        {
            max=c;
        }
    }
    else
    {
        if (b>c)
        {
            max=b;
        }
        else
        {
            max=c;
        }     
    }
    printf("三者最大值是%d\n",max);
    //再次重申，if else最好都后跟大括号
    
    

    return 0;
}