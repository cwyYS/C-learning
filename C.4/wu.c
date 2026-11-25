//if else的级联？？-------这种写法让if-else不再像包含关系，而是一层一层下来的
//找else的if原则：离此else最近的if

//这种写法还挺重要的
#include <stdio.h>
int main(void)
{
    //   int x,y;

    // if (x<0)
    // {
    //     y=-1;
    // }
    // else
    // {
    //     if (x==0)
    //     {
    //         y=0;
    //     }
    //     else
    //     {
    //         y=2*x;
    //     }
    // }
    
    int x;
    printf("请输入x的值\n");
    scanf("%d",&x);
    if (x<0)
    {
        printf("该学生作弊，拖出去墙壁");
    } else if (x>=90)
    {
        printf("成绩为优秀\n");
    } 
      else if (x>70)
    { 
        printf("良好\n");
    } else if (x>=60)
    {
        printf("及格\n");
    } else
      printf("这么简单的试卷写成这样，重开吧\n");
    
    

    
    
    


    return 0;
}