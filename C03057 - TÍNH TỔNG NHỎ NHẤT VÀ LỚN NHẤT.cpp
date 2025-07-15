#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void cv(char s[], char x, char y){
    for (int i = 0; s[i]; i++)
        if (s[i] == x) s[i] = y ;
}

void solve() {
    char x1[20], x2[20], a[20], b[20], c[20], d[20];
    scanf("%s %s", x1, x2);
    
    strcpy(a, x1); strcpy(b, x2);
    strcpy(c, x1); strcpy(d, x2);

    cv(a, '6', '5');
    cv(b, '6', '5');
    printf("%lld ", atoll(a) + atoll(b));

    cv(c, '5', '6');
    cv(d, '5', '6');
    printf("%lld\n", atoll(c) + atoll(d));
}

int main() {
    int t; scanf("%d", &t);
    while (t--){
    	solve() ; 
	}
}

