/*
参照本章例题，编写一个C程序，输出一下信息
******************************
            Very Good!
******************************
*/

#include <stdio.h>
//#define mian main

int main(){
    char tmp[] = "\n\tVery Good!\n";  // 定义字符串变量
    char *ch   = NULL; // 定义字符串型指针变量 同时置空
    ch = &tmp; // 指针变量指向tmp变量
    for (int i = 0; i < 63; i++){
        if (i == 31){
            if (ch){
                for (int j = 0; j < sizeof(tmp)-1; j++){
                    printf ("%c",*(ch+j));// 通过偏移 循环输出
                }
            }
            // 以上代码等效 printf("\n\tVery Good!\n");
        }else {
            printf ("*");
        }
    }
    
    printf ("\n");
    return 0;
}