#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    int id ;
    char ten[50] , date[50] ;
    float diem1 , diem2 , diem3 ;
    float tong ;
} ThiSinh ;

int main(){
    int n ; scanf("%d",&n) ;
    getchar() ;
    ThiSinh ds[n] ;
    for(int i = 0 ; i < n ; i++){
        ds[i].id = i + 1 ;
        gets(ds[i].ten) ;
        gets(ds[i].date) ;
        scanf("%f %f %f",&ds[i].diem1 , &ds[i].diem2 , &ds[i].diem3) ;
        getchar() ;
        ds[i].tong = ds[i].diem1 + ds[i].diem2 + ds[i].diem3 ;
    }
    float MAX = -1 ;
    for(int i = 0 ; i < n ; i++){
        if(MAX < ds[i].tong) MAX = ds[i].tong ;
    }
    for(int i = 0 ; i < n ; i++){
        if(ds[i].tong == MAX){
            printf("%d %s %s %.1f\n",ds[i].id , ds[i].ten,ds[i].date , ds[i].tong) ;
        }
    }
}
