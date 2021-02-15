#include <stdio.h>

int main(){
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[10] = {0};
    // 用一个新数组来倒转
    printf("用一个新数组b来倒转\n");
    for (int i=9; i>=0; i--){
        b[9-i] = a[i];
        printf("b[%d] = %d\n", 9-i, b[9-i]);
    }
    // 利用原数组倒转
    printf("利用原数组a倒转\n");
    int tmp = 0;
    int total = 9;
    for (int i=0; i<(total / 2);i++){
        tmp = a[i];
        a[i] = a[total-i];
        a[total-i] = tmp;
        //printf("a[%d] = %d\n", i,a[i]);
    }
    for (int i=0; i<=total;i++){
        printf("a[%d] = %d\n", i,a[i]);
    }
    
    return 0;
}