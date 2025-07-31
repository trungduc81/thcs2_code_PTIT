#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int pld(char s[]){
    int l = 0 , r = strlen(s) - 1 ;
    while(l<r){
        if(s[l] != s[r]) return 0 ;
        l++ ;
        r-- ;
    }
    return 1 ;
}

typedef struct {
    int a ;
    char m[1000] ;
    int cnt ;
} xau ;

int main(){
    char s[1000] ;
    xau ds[10000] ;
    int MAX = 0 , i = 0 ;

    while(scanf("%s",s) != EOF){
        if(pld(s)){
            int len = strlen(s) ;
            if(MAX < len) MAX = len ;
            int check = 0 ;
            for(int j = 0 ; j < i ; j++){
                if(strcmp(ds[j].m, s) == 0){
                    ds[j].cnt++ ;
                    check = 1 ;
                    break ;
                }
            }
            if(!check){
                ds[i].a = len ;
                strcpy(ds[i].m, s) ;
                ds[i].cnt = 1 ;
                i++ ;
            }
        }
    }

    for(int j = 0 ; j < i ; j++){
        if(ds[j].a == MAX){
            printf("%s %d\n", ds[j].m, ds[j].cnt) ;
        }
    }
}
