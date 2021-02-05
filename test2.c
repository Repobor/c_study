#include <stdio.h>
#include <string.h>
//#include <windows.h>

int Odd_numder(int);
int Factorial(int);
int main(){
    int i = 0;
    // i++; ++i; 分别执行时效果一样
    printf ("i = %d\n", ++i);
    //输出结果： i = 1
    i = 0;
    printf ("i = %d\n", i++);
    //输出结果： i = 0
    //总结：++在左边时先赋值再输出，++在右侧时是先输出在进行赋值

    char ch[] = "恭喜发财红包拿来";
    printf ("变量ch的长度是 %d\n", strlen(ch));
    printf ("变量ch的占用大小是 %d\n", sizeof(ch));
    //一个中文字符占两个字节，占用的内存大小是字节数+"\n"=2*中文字符数+1

    //奇偶数判断 %2 如果有余数则为奇数
    //Odd_numder(1);

    //阶乘
    //printf("0的阶乘 %d\n",Factorial(0));
    //printf("1的阶乘 %d\n",Factorial(1));

    if(3>2);
        printf("Hello World\n");
    // else
    //     printf("Good\n");

} 

int Factorial(int num){
    int tmp = 1;
    int k = 0;
    for (k=1;k<=num;k++){
        tmp *= k;
    }
    return tmp;
}

int Odd_numder(int num){
    int tmp;
    tmp = num % 2;
    //printf(" ----tmp = %d\n",tmp);
    return 0;
}
