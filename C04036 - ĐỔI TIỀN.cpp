#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

int a[10] = {1,2,5,10,20,50,100,200,500,1000} ;

int main(){
    int t ; scanf("%d",&t) ;
    while(t--){
        int n ; scanf("%d",&n) ;
        int cnt = 0 ;
        for(int i = 9 ; i >= 0 ; i--){
            while(a[i] <= n && n >= 0){
                n -= a[i] ;
                cnt++ ;
            }
        }
        printf("%d\n",cnt) ;
    }
}
