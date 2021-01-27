/*
输入abc三个值，输出其中最大者
*/

#include <stdio.h>

int main(){
    int a,b,c,max;
    printf ("please input a,b,c:\n");
    scanf ("%d,%d,%d", &a,&b,&c);
    //max=a;
    //三元运算符 (关系表达式) ? 表达式1 : 表达式2;
    max = (a<b) ? b:a;
    max = (max<c) ? c:max;
    printf ("The largest number is %d\n", max);
    return 0;
}