#include <stdio.h>

int isPrimeNum_fast(int num);
int isPrimeNum(int num);

int main()
{
    int k = 2;
    while (k < 100)
    {
        if(isPrimeNum_fast(k))
            printf("%d\n",k);
        k++;
    }
    
    return 0;
}


int isPrimeNum_fast(int num) //优化版 参照视频
/*
思路：所有数字都可以被一和它本身整除
所以如果在给定范围内（不包含1和它本身）能够出现整除的
中断循环 直接否决。
*/
{
    int i = 0;
    if (num > 1){
        for (i = 2; i < num; i++){ 
            //printf("%d / %d =  %d\n",num,i,num % i);
            if (num % i == 0)
                break;
        }
        if(i == num)
            return 1;
    }
    return 0;
}

int isPrimeNum(int num)
{
    int i = 0, j = 0;
    if (num > 1){
        for (i = 1; i <= num; i++){
            //printf("%d / %d =  %d\n",num,i,num % i);
            if (num % i == 0)
                j++;
        }
        if(j == 2)
            return 1;
    }

    return 0;
}