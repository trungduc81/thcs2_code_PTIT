#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long

int main(){
    int t;
    scanf("%d", &t);
    getchar() ;
    while(t--){
        char s[10000] ;
        gets(s) ;
        char *token = strtok(s," ") ;
        int chan = 0 , le = 0 ;
        while(token != NULL){
            int x = atoi(token) ;
            if(x%2==0) chan++ ; else le++ ;
            token = strtok(NULL," ") ;
        }
        int sum = chan + le ;
        if(sum%2==0 && chan > le) printf("YES\n") ;
        else if(sum%2 != 0 && le > chan) printf("YES\n") ;
        else printf("NO\n") ;
    }
}
