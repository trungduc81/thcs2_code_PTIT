#include<stdio.h>
#define ll long long

char anh[1005][1005];
int row[1005], row2[1005] ;
int col[1005], col2[1005] ;

int main() {
    int t ; scanf("%d", &t );
    while (t--) {
        int n, m ; scanf("%d%d", &n, &m) ;
        for (int i = 0; i < n; i++){
            scanf("%s", anh[i]);
        }
        for (int i = 0; i < n; i++) row[i] = row2[i] = 0 ;
        for (int j = 0; j < m; j++) col[j] = col2[j] = 0 ;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (anh[i][j] == '1'){
                    row[i]++ ;
                    col[j]++ ;
                } else if (anh[i][j] == '2'){
                    row2[i]++ ;
                    col2[j]++ ;
                }
            }
        }
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (anh[i][j] == '1') {
                    sum += (ll) row2[i] * col2[j];
                } else if (anh[i][j] == '2'){
                    sum += (ll) row[i] * col[j] ;
                }
            }
        }
        printf("%lld\n", sum) ;
    }
}
