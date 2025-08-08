#include<stdio.h>
#include<string.h>
#define MAX 100005

int main(){
    char s[MAX] ;
    scanf("%s", s) ;
    int len = strlen(s);
    char res[MAX] ;
    int idx = 0 ;
    char c = 'a' ;

    for(int i = len - 1; i >= 0; i--){
        if(s[i] >= c){
            c = s[i];
            res[idx++] = s[i] ;
        }
    }

    for(int i = idx - 1; i >= 0; i--){
        printf("%c", res[i]);
    }
    printf("\n");
}
