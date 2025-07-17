#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    char s[100];
    fgets(s,sizeof(s),stdin) ; 
    s[strcspn(s, "\n")] = 0;
    for(int i = 0 ; i < strlen(s) ; i++){
    	s[i] = tolower(s[i]) ; 
	}
    char a[100][50];
    int cnt[100] = {0};
    int idx = 0;

    char *token = strtok(s, " ");
    while(token != NULL){
        strcpy(a[idx++], token);
        token = strtok(NULL, " ");
    }

    for(int i = 0; i < idx - 1; i++){
        if(cnt[i] == -1) continue ;
        for(int j = i + 1; j < idx; j++){
            if(strcmp(a[i], a[j]) == 0 && cnt[j] != -1){
                cnt[i]++;
                cnt[j] = -1;
            }
        }
    }

    for(int i = 0; i < idx; i++){
        if(cnt[i] != -1){
            printf("%s %d\n", a[i], cnt[i] + 1) ; 
        }
    }
}

