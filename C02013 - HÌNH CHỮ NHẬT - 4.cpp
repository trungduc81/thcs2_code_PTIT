#include<stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    
    int size ;
    if (m > n) size = m ; 
    else size = n ; 
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            int k ;
            if (i + j < size ) {
                k = size - i - j;
            } else {
                k = i + j - size + 2;
            }
            printf("%d", k);
        }
        printf("\n");
    }
}
