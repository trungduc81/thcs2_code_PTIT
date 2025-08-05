#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    int id;
    char ten[100];
    float d1, d2, d3;
    float tong;
} SinhVien;

SinhVien ds[100];
int cnt = 0;

void themmoi(int n){
    getchar();
    for(int i = 0; i < n; i++){
        gets(ds[i].ten);
        scanf("%f %f %f", &ds[i].d1, &ds[i].d2, &ds[i].d3);
        ds[i].id = i + 1;
        ds[i].tong = ds[i].d1 + ds[i].d2 + ds[i].d3 ;
        cnt++ ;
        getchar();
    }
    printf("%d\n", n) ;
}

void capnhat(int ma){
    getchar();
    char name[100];
    float x, y, z;
    gets(name);
    scanf("%f %f %f", &x, &y, &z);
    getchar();
    for(int i = 0; i < cnt; i++){
        if(ds[i].id == ma){
            strcpy(ds[i].ten, name);
            ds[i].d1 = x;
            ds[i].d2 = y;
            ds[i].d3 = z;
            ds[i].tong = ds[i].d1 + ds[i].d2 + ds[i].d3 ;
            break;
        }
    }
    printf("%d\n", ma);
}

int cmp(const void *a, const void *b){
    SinhVien *x = (SinhVien*) a ;
    SinhVien *y = (SinhVien*) b ;
    if(x->tong > y->tong) return 1 ;
    if(x->tong < y->tong) return -1 ;
    return 0;
}

void inds(){
    qsort(ds, cnt, sizeof(SinhVien), cmp);
    for(int i = 0; i < cnt; i++){
        printf("%d %s %.1f %.1f %.1f\n", ds[i].id, ds[i].ten, ds[i].d1, ds[i].d2, ds[i].d3);
    }
}

int main(){
    while(1){
        int s ; scanf("%d",&s) ; 
        if(s == 1){
            int n;
            scanf("%d", &n);
            themmoi(n);
        }
        else if(s == 2){
            int ma;
            scanf("%d", &ma);
            capnhat(ma);
        }
        else if(s == 3){
            inds();
            break;
        }
    }
}
