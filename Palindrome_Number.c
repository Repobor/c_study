#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome_Number(int);
int isPalindrome_Number_text(int);

int main(){
    /*
    什么是回文数？
    正着读和反着读一样的数
    如：111 121 232
    */
    int m = 0;
    printf("请输入您需要判断的数字：");
    scanf("%d",&m);
    int ret = 0;
    ret = isPalindrome_Number(m);
    if (ret){
        printf ("函数1返回：数字 %d 是回文数\n",m);
    }
    ret = isPalindrome_Number_text(m);
    if (ret){
        printf ("函数2返回：数字 %d 是回文数\n",m);
    }

    return 0;
}

int isPalindrome_Number(int num){
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
    itoa (num,num_str,10);
    strcpy (rts_num,num_str);
    strrev (rts_num);
    // printf("num_str = %s\n" , ret1);
    // printf("rts_num = %s\n" , ret1);
    if(strcmp(num_str,rts_num) == 0){
       // printf("数字 %d 是回文数\n",num);
        return 1;
    }
    return 0;
}