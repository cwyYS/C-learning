#include <stdio.h>
int main(void)
{


// tasks.json 是 VS Code 的构建任务配置文件，它告诉编辑器：按 Ctrl+Shift+B 或 F5 时执行哪条编译命令。

// 它就在你打开的这个文件夹里，只是被折叠了。
// 想让exe集中出现在build，进入tasks.json把路径改成build文件夹就行了


// qi.exe 是编译器生成的 Windows 可执行文件，也是你程序的最终产物。
// .c 是文本，CPU 不认；.exe 是机器码。
// 生成过程
// gcc 做两件事：先把 .c 翻译成机器码，
// 再把启动代码和 printf 等库函数的实现链接进来，最后打包成 PE 格式的可执行文件。
    
    int hour1,minute1;
    int hour2,minute2;
    printf("请输入两个时间");
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    int t1,t2,t;
    t1=60*hour1+minute1;
    t2=60*hour2+minute2;
    // 如果t2小于t1，是不是可以用if语句来求得绝对值？
    t=t2-t1;
    printf("时间差是%d小时又%d分钟",t/60,t%60);
    
    return 0;
}