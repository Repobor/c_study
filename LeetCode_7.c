#include <stdio.h>

int main(){
    //int x = 1534236469;
    int x = 0;
    int ret = 0;
    scanf("%d", &x);
    while(x!=0) {
        int t = (unsigned)ret * 10;
        // 一个数相乘后除 如果一致 则没有溢出
        if(t/10 != ret){
            ret = 0;
            break;
        }
        ret = t + x % 10;
        x /= 10;
    }
    printf("ret = %d\n",ret);
}


/*
旧代码
int main(){
    
    int x = 1534236469;
    if(x<=-2147483648 || x>=2147483647){
        return 0;
    }
    int num [11] = {0};
    int mark = 0;
    for(int i=0;i<11;i++){
        int tmp = pow(10.0, i);
        num[i] = x / tmp % 10;
        if(num[i] !=0){
            mark = i;
        }
    }
    long result = 0;
    if(mark>=9 && num [0]>3){
        result = 0;
        printf("数字反转：%d\n",result);
        return 0;
    }
    for (int i = 0; i < mark+1;i++){
        long tmp = pow(10.0, mark - i);
        result += tmp*num[i];
        printf("mark - i = %ld\n", mark - i);
        printf("tmp = %ld\n", tmp);
        printf("result = %ld\n", result);
    }
    if(result<=-2147483648 || result>=2147483647){
        result = 0;
    }
    printf("数字反转：%d\n",result);
    return 0;
}
*/