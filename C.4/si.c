//多路分支
#include <stdio.h>
int main(void)
{
//    switch (expression)
//    {
//    case constant expression:
//     /* code */
//     break;
   
//    default:
//     break;
//    }             switch-case语句,case后只能跟常量：常数或者常数的加减乘除（比如1+1），不能是1>2这种
                                    //注意：const定义的仍旧是变量，故const定义的值不能放在case后面
                                    //等一下，好像新版const已经可以放了（C99），旧版不行
                    //break是直接离开整个switch case语句
                    //若一个case没有跟break，这成为贯穿，运行接着往下一直到遇到break
    
    int ys;
    printf("请输入ys的值\n");
    scanf("%d",&ys);

    switch (ys)
    {
    case 1:
        printf("原神牛逼\n");
        break;    //可以试试把这里的break或者上一行的\n删掉
    case 2:
         printf("你居然说原神不牛逼？\n");
         break;
    default:
        printf("你说的对，但是原神是一款....\n");
        break;
    }


    //打等地
    int grade;
    printf("请输入成绩\n");
    scanf("%d",&grade);
    grade/=10;

    switch (grade)
    {
    case 10:
    case 9:
     printf("very good\n");
     break;
    case 8:
     printf("good\n");
    default:
     printf("just so so\n");
        break;
    }

    return 0;
}