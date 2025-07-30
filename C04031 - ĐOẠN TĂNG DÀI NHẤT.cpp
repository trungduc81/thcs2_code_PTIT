#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

typedef struct {
    int a, b;
    int dd;
} Tang;

int main(){
    int t; scanf("%d", &t);
    for(int test = 1 ; test <= t ; test++){
        int n; scanf("%d", &n);
        int a[105];
        Tang ds[105];
        int idx = 0, MAX = 1 ;
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        for(int i = 0; i < n; i++){
            ds[idx].a = i;
            while(i < n - 1 && a[i] < a[i + 1]) i++ ;
            ds[idx].b = i ;
            ds[idx].dd = ds[idx].b - ds[idx].a + 1 ;
            if(ds[idx].dd > MAX ) MAX  = ds[idx].dd ;
            idx++;
        }
        printf("Test %d:\n", test) ;
        printf("%d\n", MAX) ;
        for(int i = 0; i < idx; i++){
            if(ds[i].dd == MAX){
                for(int j = ds[i].a; j <= ds[i].b; j++){
                    printf("%d ", a[j]);
                }
                printf("\n");
            }
        }
    }
}
