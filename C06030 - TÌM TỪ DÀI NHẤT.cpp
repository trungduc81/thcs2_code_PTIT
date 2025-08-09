#include<stdio.h>
#include<string.h>

char tu[1005][100];
int dem[1005];
int n = 0;

int Search(char s[]){
    for(int i = 0; i < n; i++){
        if(strcmp(tu[i], s) == 0) return i;
    }
    return -1;
}

int main(){
    char s[10005];
    while(fgets(s, sizeof(s), stdin) != NULL){
        char *token = strtok(s, " \t\n");
        while(token != NULL){
            int p = Search(token);
            if(p == -1){
                strcpy(tu[n], token);
                dem[n] = 1;
                n++;
            } else {
                dem[p]++;
            }
            token = strtok(NULL, " \t\n");
        }
    }

    int MAX = 0;
    for(int i = 0; i < n; i++){
        int l = strlen(tu[i]);
        if(l > MAX) MAX = l;
    }
    for(int i = 0; i < n; i++){
        if(strlen(tu[i]) == MAX){
            printf("%s %d %d\n", tu[i], MAX, dem[i]);
        }
    }
}
