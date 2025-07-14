#include<stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    if(m <= n){
        for(int i = m; i >= 1; i--){
            char c = 'A' + i - 1;
            for(char j = c; j < 'A' + n - 1; j++){
                printf("%c", j);
            }
            for(int j = i; j >= 1; j--){
                printf("%c", 'A' + n - 1);
            }
            printf("\n");
        }
    } else {
        for(int i = n + 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                printf("%c", 'A' + n - 1);
            }
            printf("\n");
        }
        for(int i = n; i >= 1; i--){
            char c = 'A' + i - 1;
            for(char j = c; j < 'A' + n - 1; j++){
                printf("%c", j);
            }
            for(int j = i; j >= 1; j--){
                printf("%c", 'A' + n - 1);
            }
            printf("\n");
        }
    }
}

