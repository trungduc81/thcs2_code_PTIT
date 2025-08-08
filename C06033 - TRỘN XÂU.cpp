#include<stdio.h>
#include<string.h>

int main(){
    while(1){
        int n;
        scanf("%d", &n);
        if(n == 0) break;

        char s1[210], s2[210], s3[420];
        scanf("%s %s %s", s1, s2, s3);

        char goc_s1[210], goc_s2[210];
        strcpy(goc_s1, s1);
        strcpy(goc_s2, s2);

        char s12[420];
        int step = 0;

        while(1){
            step++;
            for(int i = 0; i < n; i++){
                s12[2*i] = s2[i];
                s12[2*i + 1] = s1[i];
            }
            s12[2*n] = '\0';
            if(strcmp(s12, s3) == 0){
                printf("%d\n", step);
                break;
            }
            for(int i = 0; i < n; i++){
                s1[i] = s12[i];
                s2[i] = s12[i + n];
            }
            s1[n] = '\0';
            s2[n] = '\0';

            if(strcmp(s1, goc_s1) == 0 && strcmp(s2, goc_s2) == 0){
                printf("-1\n");
                break;
            }
        }
    }
}
