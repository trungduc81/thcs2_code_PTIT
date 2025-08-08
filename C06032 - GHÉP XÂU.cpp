#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void *a, const void *b){
     char *xau_a = ( char * )a ;
      char *xau_b = ( char * ) b ;

    char ab[40], ba[40];
    strcpy(ab, xau_a); strcat(ab, xau_b);
    strcpy(ba, xau_b); strcat(ba, xau_a);

    return strcmp(ab, ba) ;
}

int main(){
    int t ; scanf("%d", &t) ;
    while(t--){
        int m ;scanf("%d", &m) ;
        char s[20][20];
        for(int i = 0; i < m; i++){
            scanf("%s", s[i]);
        }
        qsort(s, m, 20, cmp);
        for(int i = 0; i < m; i++){
            printf("%s", s[i]);
        }
        printf("\n");
    }
}
