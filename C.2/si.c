#include <stdio.h>
int main(void)
{
    int finalprice=0;
    int amount=1000;
    amount=amount/4;
    printf("请输入amount值");
    // scanf("%d",&amount);

// 刚开始给amount赋值后，仍可继续给它输入一个值覆盖原来的值
// 等等，这里三种写法都可以？

    finalprice=amount/2;
    printf("最终金额为%d\n",finalprice);
    return 0;
}