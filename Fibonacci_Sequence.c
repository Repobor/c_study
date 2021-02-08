/*
    斐波那契数列指的是这样一个数列：
    0,1,1,2,3,5,8,13,21,34
    这个数列从第3项开始，每一项都等于前两项之和。
    F(n) = F(n-1) + F(n-2)
*/
#include <stdio.h>
#include <time.h>

double Fibonacci_Sequence_n(int num);
double F(int n);



int main(){
    //1476
	clock_t start, finish;  
	double  duration1,duration2; 
    start = clock();
    double ret1 = Fibonacci_Sequence_n(1476);
    finish = clock();
    duration1 = (double)(finish - start) / CLOCKS_PER_SEC;  
    printf("循环数组计算的结果是%lf，耗时%lf\n",ret1,duration1);

    start = clock();
    double ret2 = F(1476);
    finish = clock();
    duration2 = (double)(finish - start) / CLOCKS_PER_SEC;  

    printf("递归的计算结果是%lf，耗时%lf\n",ret2,duration2);
    return 0;
}

double F(int n){
    double f1 = 1;
    double f2 = 1;
    double f3 = 0;
    if(n<0){
        printf (" Error：Number Does Not Exist\n");
        return f3;
    }else if(n==0){
        return f3;
    }else if(n<3){
        return 1;
    }else {
        for(int i=3;i<=n;i++){
            f3 = f1+f2;
            f1 = f2;
            f2 = f3;
        }
    }
    return f3;
}

double Fibonacci_Sequence_n(int num){
    double t[1478] = {0}; //double 在1477后还是会溢出
    t[1] = 1.0;
    //t[2] = 1.0;
    //t[3] = 1.0;
    if(num < 0){
        printf (" Error：Number Does Not Exist\n");
        return 0;
    }
    if(num > 1477){
        printf (" Warning：Double Overflow\n");
        return 0;
    }
    if(num >= 2){
        for (int i = 0; i <= num; i++){
            if(i>=2){
                t[i] = t[i-1] + t[i-2];
            }
            if(i>46){
                printf ("F(%d) = %lf\n",i,t[i]);
            }else if(i>=0 && i<47) {
                printf ("F(%d) = %d\n",i,(int)t[i]); // 没溢出部分用整型输出好看
            }
        }
    }
    //printf("%lf,%lf\n",t[46],t[47]); 如果用 int 在第四十八项会导致溢出
    return t[num];
}