#include <stdio.h>
int main(void)
{
   int price=0,bill=0;
   printf("输入应付款\n");
   scanf("%d",&price);
   printf("输入实付款\n");
   scanf("%d",&bill);

   if (bill>=price)
   {   
    printf("最终应找零%d元\n",bill-price);
   }
   else
   {
     printf("最终还应再付%d元\n",price-bill);
   }
   

//这里的if else写的对吗？？？用不着if else??
//如何在运行一遍后快速让它再次运行一遍？
//const int是什么？它引入的是变量还是常量？


    return 0;
}