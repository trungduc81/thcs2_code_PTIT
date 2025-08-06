#include<stdio.h>
#include<string.h>

typedef struct Mang {
    char kytu[50];
    double a;
} Mang;

void print(Mang *b, int n){
    for(int i = 0 ; i < n ; i++) printf("%s ", b[i].kytu);
    printf("\n");
    for(int i = 0 ; i < n ; i++) printf("%.3lf ", b[i].a);
    printf("\n");
}

void sort(Mang *b, int n){
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n - 1 - i ; j++){
            if(b[j].a > b[j + 1].a){
                Mang tmp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
            }
        }
    }
}

void solve(Mang *b, int n){
    int check = 1;
    while(n){
        if(!ok){
            sort(b, n);
            print(b, n);
            check = 1;
        }
        
        strcat(b[0].kytu, b[1].kytu);
        b[0].a += b[1].a;
        
        for(int i = 1 ; i < n - 1 ; i++) b[i] = b[i + 1];
        n-- ;
        for(int i = 1 ; i < n ; i++){
            if(b[i].a < b[i - 1].a){
                ok = 0;
                break;
            }
        }
        print(b, n);
    }
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        Mang b[n];
        for(int i = 0 ; i < n ; i++) scanf("%s", b[i].kytu);
        for(int i = 0 ; i < n ; i++) scanf("%lf", &b[i].a);
        sort(b, n);
        print(b, n);
        solve(b, n);
        printf("\n");
    }
}
