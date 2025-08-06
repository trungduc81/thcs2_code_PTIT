#include<stdio.h>

int a[15][15];
int n ;

void dao(int x, int y) {
    for(int i = 0; i <= x; i++){
        for(int j = 0; j <= y; j++){
            a[i][j] = 1 - a[i][j] ;
        }
    }
}

int main() {
    scanf("%d", &n);
    char row[15] ;
    for (int i = 0; i < n; i++) {
        scanf("%s", row) ;
        for (int j = 0; j < n; j++){
            a[i][j] = row[j] - '0' ;
        }
    }

    int step = 0 ;
    for (int i = n - 1; i >= 0; i--){
        for (int j = n - 1; j >= 0; j--){
            if (a[i][j] == 1){
                dao(i, j);
                step++ ;
            }
        }
    }
    printf("%d\n", step);
}
