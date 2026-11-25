//4.1.3
//do-while循环     

//while循环是先检测条件是否满足然后再运行
//do-while循环是先运行一遍然后再检测是否满足条件

//前者while后面跟()后不要加;    后者则必须要加;
#include <stdio.h>
int main(void)
{
    int x;
    int n=0;
    scanf("%d",&x);
    do
    {
        n++;
        x/=10;
    } while (x>0);
    printf("位数是%d",n);
    
    return 0;
    //while和do-while的用处是？？？
}