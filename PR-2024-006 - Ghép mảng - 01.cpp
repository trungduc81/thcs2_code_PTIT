#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int c[10000];

void ghep(int a[], int m, int b[], int n){
    for(int i = 0; i < m; i++) c[i] = a[i];
    for(int i = 0; i < n; i++) c[m + i] = b[i];
}

void Sort(int a[], int m, int b[], int n){
    ghep(a, m, b, n);
    for(int i = 0; i < m + n - 1; i++){
        for(int j = i + 1; j < m + n; j++){
            if(c[i] > c[j]){
                int tmp = c[i];
                c[i] = c[j];
                c[j] = tmp;
            }
        }
    }
}

void r_Sort(int a[], int m, int b[], int n){
    ghep(a, m, b, n);
    for(int i = 0; i < m + n - 1; i++){
        for(int j = i + 1; j < m + n; j++){
            if(c[i] < c[j]){
                int tmp = c[i];
                c[i] = c[j];
                c[j] = tmp;
            }
        }
    }
}

void solve(){
    int m , n ; 
    char s ; 
    scanf("%d %d %c",&m,&n, &s) ;
    int a[m], b[n] ;
    for(int i = 0; i < m; i++) scanf("%d", &a[i]) ;
    for(int i = 0; i < n; i++) scanf("%d", &b[i]) ;

    if(s == 'T') Sort(a, m, b, n) ;
    else if(s == 'G') r_Sort(a, m, b, n) ;
    else if(s == 'F') ghep(a, m, b, n) ;
    else if(s == 'A') ghep(b, n, a, m) ;

    for(int i = 0; i < m + n; i++){
        printf("%d ", c[i]) ;
    }
    printf("\n") ;
} 

int main(){
    int t ; scanf("%d", &t) ;
    while(t--){
        solve() ;
    }
}

