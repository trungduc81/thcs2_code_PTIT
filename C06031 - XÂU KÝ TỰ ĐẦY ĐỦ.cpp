#include<stdio.h>
#include<string.h>
#define MAX 55

int dp[MAX][27];
char target[] = "abcdefghijklmnopqrstuvwxyz" ;

int max(int a, int b){
    if(a > b) return a ;
    return b;
}

int main(){
    char s[MAX];
    scanf("%s", s);
    int n = strlen(s);
    int m = 26;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else if(s[i-1] == target[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    int lcs = dp[n][m] ;
    int res = 26 - lcs ;
    printf("%d\n", res );
}
