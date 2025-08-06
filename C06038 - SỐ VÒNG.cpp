#include<stdio.h>
#include<string.h>


void mul(char s[], int k, char res[]){
    int n = strlen(s);
    int nho = 0;
    int idx = 0;
    for (int i = n - 1; i >= 0; i--){
        int d = s[i] - '0';
        int sum = d * k + nho ;
        res[idx++] = sum % 10 + '0';
        nho = sum / 10 ;
    }
    while(nho > 0){
        res[idx++] = nho%10 + '0' ;
        nho /= 10 ;
    }
    res[idx] = '\0' ;
    int i = 0 , j = idx - 1 ;
    while(i<=j){
        char tmp = res[i];
        res[i] = res[j];
        res[j] = tmp;
        i++ ;
        j-- ;
    }
}


int vong(char s[]) {
    int n = strlen(s) ;
    char double_s[130] ;
    strcpy(double_s, s) ;
    strcat(double_s, s) ;

    char res[70];
    for (int i = 1; i <= n; i++) {
        mul(s, i, res);
        if (strlen(res) != n) return 0 ;
        if (strstr(double_s, res) == NULL) return 0 ;
    }
    return 1 ;
}

int main() {
    int t;
    scanf("%d", &t);
    char s[70];
    while (t--) {
        scanf("%s", s);
        if (vong(s)) printf("YES\n");
        else printf("NO\n");
    }
}
