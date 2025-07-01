#include<stdio.h>

int main() {
    unsigned long long MAX = 0, x ; 
    while (scanf("%llu", &x) == 1){
        if (x > MAX) MAX = x;
    }
    printf("%llu\n", MAX);
    return 0;
}

