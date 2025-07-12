#include<stdio.h>
#include<stdlib.h>  

int main() {
    int n;
    scanf("%d", &n);
    int sz = 2*n - 1 ;
    for (int i = 1; i <= sz; i++) {
        for (int j = 1; j <= sz; j++) {
            int x = abs(i - n) ;
            int y = abs(j - n) ;
            int max ;
            if (x > y) max = x ;
            else max = y ; 
            printf("%d", max+1) ;
        }
        printf("\n");
    }
}

