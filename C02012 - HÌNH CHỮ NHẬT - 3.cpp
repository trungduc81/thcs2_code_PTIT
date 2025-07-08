#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++){
        int dem = 0;
        for (int j = i; j >= 1 && dem < n; j--){
            printf("%d", j);
            dem++;
        }
        for (int j = 2; dem < n; j++){
            printf("%d", j);
            dem++;
        }
        printf("\n");
    }
}

