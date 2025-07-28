#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    int id;
    char ten[100], nhom[100];
    float mua, ban;
    float loinhuan;
} MatHang;

int cmp(const void *a, const void *b){
    MatHang *x = (MatHang*)a;
    MatHang *y = (MatHang*)b;
    if(x->loinhuan < y->loinhuan) return 1;
    if(x->loinhuan > y->loinhuan) return -1;
    return 0 ; 
}

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    MatHang ds[n];
    for(int i = 0 ; i < n ; i++){
        ds[i].id = i + 1;
        gets(ds[i].ten) ; 
        gets(ds[i].nhom) ; 
        scanf("%f %f", &ds[i].mua, &ds[i].ban);
        getchar() ; 
        ds[i].loinhuan = ds[i].ban - ds[i].mua;
    }
    qsort(ds, n, sizeof(MatHang), cmp);
    for(int i = 0 ; i < n ; i++){
        printf("%d %s %s %.2f\n", ds[i].id, ds[i].ten, ds[i].nhom, ds[i].loinhuan);
    }
}
