#include <stdio.h>
int main(void)

//交换a和b的值
{
    int a=5,b=6;
    //若写a=b,则此时a和b都是6，原来的a已经没有了

    int c=0;
    c=a;
    a=b;
    // 设置断点是运行到此处时程序暂停在这一步，然后页面最上方有按钮可以选择，比方说一步一步接着往下推
    b=c;
    printf("a=%d\nb=%d\n",a,b) ;

    return 0;
}


//不要忘记；，不要忘记&