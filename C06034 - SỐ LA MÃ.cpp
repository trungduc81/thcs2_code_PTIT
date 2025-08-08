#include<stdio.h>
#include<string.h>

int cv(char c){
    if(c == 'I') return 1;
    else if(c == 'V') return 5;
    else if(c == 'X') return 10;
    else if(c == 'L') return 50;
    else if(c == 'C') return 100;
    else if(c == 'D') return 500;
    else if(c == 'M') return 1000;
    else return 0;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[1000] ;
        scanf("%s", s) ;
        int len = strlen(s) ;
        int res = 0 ;
        for(int i = 0; i < len; i++){
            int a = cv(s[i]);
            int b = cv(s[i+1]);
            if(a < b){
                res -= a ;
            }else{
                res += a;
            }
        }
        printf("%d\n", res);
    }
}
