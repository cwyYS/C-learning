#include <stdio.h>
int main(void)
{
    //  "command": "C:/Dev/mingw64/bin/gcc.exe",
    //  要把g++改成gcc，用的才是c的编译器
    int a,b;
    double c;
    printf("请输入ab\n");
    scanf("%d %d",&a,&b);
// 再次重复一遍，tmd不要再忘记写&了！！！！！
    
    c=(a+b)/2.0;
    // 这里写2.0才是真正的除法，写2则/表示取整
    printf("%lf",c);
    return 0;
}



// %是取余