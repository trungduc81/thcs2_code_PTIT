#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

int main() {
    int t; 
    scanf("%d", &t); 
    while (t--){
        int n; 
        scanf("%d", &n) ; 
        int cnt = 0 ; 
        for (int i = 2; i < sqrt(n); i++){
            if (n % i == 0){
                if (i % 2 == 0) cnt++ ; 
                if ((n / i) % 2 == 0) cnt++ ; 
            } 
        }
        if (sqrt(n) == (int)sqrt(n) && (int)sqrt(n) % 2 == 0) cnt++ ; 
        if (n % 2 == 0) cnt++ ; 
        printf("%d\n", cnt); 
    }
}

