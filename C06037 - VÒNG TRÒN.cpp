#include<stdio.h>
#include<string.h>

int pos[26][2];

void solve(char s[]){
    int dem = 0;
    for(int i = 0; i < 26; i++){
        pos[i][0] = -1;
        pos[i][1] = -1;
    }
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        int c = s[i] - 'A';
        if(pos[c][0] == -1) pos[c][0] = i ;
        else pos[c][1] = i ;
    }
    for(int i = 0; i < 26; i++){
        for(int j = i + 1; j < 26; j++){
            int x1 = pos[i][0], x2 = pos[i][1] ;
            int y1 = pos[j][0], y2 = pos[j][1] ;
            if(x1 == -1 || x2 == -1 || y1 == -1 || y2 == -1) continue ;
            if((x1 < y1 && y1 < x2 && x2 < y2) || (y1 < x1 && x1 < y2 && y2 < x2)){
                dem++;
            }
        }
    }
    printf("%d\n", dem);
}

int main(){
    char s[110];
    scanf("%s", s);
    solve(s);
}
