#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void reverse(char a[]) {
    int l = 0, r = strlen(a) - 1 ;
    while (l < r){
        char tmp = a[l] ;
        a[l] = a[r] ;
        a[r] = tmp ;
        l++ ;
        r-- ;
    }
}


void tinhtong(char a[], char b[], char res[]){
    int len_a = strlen(a), len_b = strlen(b) ;
    int len_max = len_a > len_b ? len_a : len_b ;
    reverse(a) ; reverse(b) ;
    int nho = 0, idx = 0, a1, b1 ;
    for (int i = 0; i < len_max; i++){
        a1 = (i < len_a) ? a[i] - '0' : 0 ;
        b1 = (i < len_b) ? b[i] - '0' : 0 ;
        int sum = a1 + b1 + nho ;
        res[idx++] = (sum % 10) + '0' ;
        nho = sum / 10 ;
    }
    if (nho) res[idx++] = nho + '0' ;
    res[idx] = '\0' ;
    reverse(res);
    printf("%s\n",res) ; 
}

void ptach(char s[], char a[], char b[]){
    int len = strlen(s) ;
    int mid1 = floor(len/2) ;
    int mid2 = ceil(len/2) ; 
    strncpy(a, s, mid1) ;
    a[mid1] = '\0' ;
    strcpy(b, s + mid2); 
}

void solve(){
    char s[205];
    scanf("%s", s);
    char a[105], b[105], res[210] ;
    ptach(s, a, b) ;
    tinhtong(a, b, res) ;
    while (strlen(res) > 1) {
        ptach(res, a, b);
        tinhtong(a, b, res);
    }

}

int main(){
    solve();
    return 0;
}

