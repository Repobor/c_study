#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int isPalindrome_Number_fast(int);
int isPalindrome_Number(int);
int isPalindrome_Number_text(int);

int main(){
    /*
    什么是回文数？
    正着读和反着读一样的数
    如：111 121 232
    */
    // int m = 0;
    // printf("请输入您需要判断的数字：");
    // scanf("%d",&m);
    // int ret = 0;
    // ret = isPalindrome_Number(m);
    // if (ret){
    //     printf ("函数1返回：数字 %d 是回文数\n",m);
    // }
    // ret = isPalindrome_Number_text(m);
    // if (ret){
    //     printf ("函数2返回：数字 %d 是回文数\n",m);
    // }
    clock_t start, finish;
    double duration;
    //判断一千万个数字的速度
    start = clock();
    for (int i = 0; i <= INT_MAX - 1; i++)
    {
        isPalindrome_Number_fast(i);
    }
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("函数1耗时%lf   均时%lf\n",duration,duration/(INT_MAX - 1));

    start = clock();
    for (int i = 0; i <= INT_MAX - 1; i++)
    {
        isPalindrome_Number(i);
    }
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("函数2耗时%lf   均时%lf\n",duration,duration/(INT_MAX - 1));

    start = clock();
    for (int i = 0; i <= INT_MAX - 1; i++)
    {
        isPalindrome_Number_text(i);
    }
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("函数3耗时%lf   均时%lf\n",duration,duration/(INT_MAX - 1));

    /* 均时因数量太大无法计算无法计算
        函数1耗时83.721000
        函数2耗时87.575000
        函数3耗时257.645000
    */

    return 0;
}

int isPalindrome_Number_fast(int num){
    if (num < 0 || (num % 10 == 0 && num != 0)){
        return 0; // 去掉负数和10的倍数
    }
    int tmp = num;
    long sum = 0;
    while (tmp){
        sum = sum * 10 + tmp%10;
        tmp /= 10;
    }
    if(sum<=INT_MIN || sum>= INT_MAX)
        return 0;
    return num == sum;
}


int isPalindrome_Number(int num){
    if (num<=0){
        return 0;
    }
    int tmp = num;
    int sum = 0;
    while (tmp){
        sum = sum * 10 + tmp%10;
        tmp /= 10;
    }
    //printf("num = %d\n",num);
    //printf("sum = %d\n",sum);
    return num == sum;
}

int isPalindrome_Number_text(int num){
    // strrev 字符串逆序 返回的是指针 对原来的变量进行改变
    // strcmp(str1,str2) 字符串比较 相同返回0
    char num_str[80]={0}, rts_num[80]= {0};
    itoa (num,num_str,10); //整数转字符串
    strcpy (rts_num,num_str); // 字符串拷贝
    strrev (rts_num); // 字符串翻转
    // printf("num_str = %s\n" , ret1);
    // printf("rts_num = %s\n" , ret1);
    if(strcmp(num_str,rts_num) == 0){ // 字符串比较
       // printf("数字 %d 是回文数\n",num);
        return 1;
    }
    return 0;
}