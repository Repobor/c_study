#include <stdio.h>

int main () {
    int odd_sum = 0;
    int even_sum = 0;
    int odd_num = 0;
    int odd_sum_avg = 0;
    int i = 0;
    odd_sum = even_sum = odd_num = odd_sum_avg = i = 0;
    // 1.求1-100之间的奇数之和
    printf ("\n1.求1-100之间的奇数之和\n");
    /*
    for(i=1;i<=100;i++){
        if(i%2 ==1)
            odd_sum += i;
    }
    */
   i=1;
   while (i<=100){
       if(i%2 ==1)
            odd_sum += i;
        i++;
   }
    printf ("odd_sum = %d\n",odd_sum);

    // 2.求1-100之间的偶数之和
    odd_sum = even_sum = odd_num = odd_sum_avg = i = 0;
    printf ("\n2.求1-100之间的偶数之和\n");
    for(i=1;i<=100;i++){
        if(i%2 ==0)
            even_sum += i;
    }
    printf ("even_sum = %d\n",even_sum);

    // 3.求1-100之间的奇数的个数
    odd_sum = even_sum = odd_num = odd_sum_avg = i = 0;
    printf ("\n3.求1-100之间的奇数的个数\n");
    for(i=1;i<=100;i++){
        if(i%2 ==1)
            odd_num++;
    }
    printf ("odd_num = %d\n",odd_num);

    odd_sum = even_sum = odd_num = odd_sum_avg = i = 0;
    // 4.求1-100之间的奇数之和的平均值
    printf ("\n4.求1-100之间的奇数之和的平均值\n");
    for(i=1;i<=100;i++){
        if(i%2 ==1){
            odd_sum += i;
            odd_num++;
            }
    }
    odd_sum_avg = odd_sum / odd_num;
    printf ("odd_sum_avg = %d\n",odd_sum/odd_sum_avg);

    // 5.求1-100之间的奇数之和，再求1-100之间的偶数之和
    odd_sum = even_sum = odd_num = odd_sum_avg = i = 0;
    printf ("\n5.求1-100之间的奇数之和，再求1-100之间的偶数之和\n");
    for(i=1;i<=100;i++){
        if(i%2 ==1)
            odd_sum += i;
        else
            even_sum += i;
    }
    printf ("odd_sum = %d\n",odd_sum);
    printf ("even_sum = %d\n",even_sum);
    return 0;
}