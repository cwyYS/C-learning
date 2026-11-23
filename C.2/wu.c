#include <stdio.h>
int main(void)
{ 
    int a,b,c;
    printf("请输入a和b");
    scanf("%d %d",&a,&b);

// scanf("",&);中的&绝对不能忘记，提及几个变量就用几个&

    c=a+b;
    // printf("%d + %d = %d",a,b,c);
    printf("%d + %d = %d",a,b,c);
// 两种写法都可以    
    return 0;
}

// 这里，在row6的%d%d中间若是空格，则运行后我只输入一个值就回车了，
// 它会等着我输入第二个值，若中间是逗号，再这样操作会发现直接运行到最后了，b可能会默认是0