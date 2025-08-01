#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cnt[10001] ; 

void solve(char s[]){
    char *token = strtok(s, " ");
    while(token != NULL){
        if(strcmp(token, "+") != 0){
            int heso, mu ;
            sscanf(token, "%d*x^%d", &heso, &mu) ;
            cnt[mu] += heso ;
        }
        token = strtok(NULL, " ") ;
    }
}

int main() {
    int t ; scanf("%d", &t) ;
    getchar();
    while(t--){
        memset(cnt, 0, sizeof(cnt)) ;
        char s1[10005], s2[10005] ;
        gets(s1) ; gets(s2) ; 
        solve(s1) ;solve(s2) ;
        int check = 1;
        for(int i = 10000; i >= 0; i--) {
            if(cnt[i] != 0){
                if(!check) printf(" + ");
                printf("%d*x^%d", cnt[i], i);
                check = 0 ;
            }
        }
        printf("\n");
    }
}

