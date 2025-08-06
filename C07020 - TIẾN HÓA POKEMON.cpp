#include<stdio.h>
#include<string.h>

typedef struct {
    char ten[50];
    int k, m;
    int cnt ;
} Pokemon ;

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    Pokemon ds[n];
    for(int i = 0; i < n; i++){
        gets(ds[i].ten) ;
        scanf("%d %d", &ds[i].k, &ds[i].m);
        getchar();
        ds[i].cnt = 0;
        int da = ds[i].m ;
        while(da >= ds[i].k){
            da -= ds[i].k ;
            ds[i].cnt++ ;
            da += 2 ;
        }
    }
    int tong = 0, MAX = 0, idx = 0;
    for(int i = 0; i < n; i++){
        tong += ds[i].cnt ;
        if(ds[i].cnt > MAX){
            MAX = ds[i].cnt ;
            idx = i ;
        }
    }
    printf("%d\n%s\n", tong, ds[idx].ten);
}
