#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

int T = 1 ; 

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] , cnt[10000] = {0} ; 
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]) ; 
		cnt[a[i]]++ ; 
	}
	printf("Test %d:\n",T) ; 
	for(int i = 0 ; i < n ; i++){
		if(cnt[a[i]]){
			printf("%d xuat hien %d lan\n",a[i],cnt[a[i]]) ; 
			cnt[a[i]] = 0 ; 
		}
	}
	T++ ; 
} 

int main(){ 
   	int t ; scanf("%d",&t) ; 
	while(t--){
	   	solve() ; 
	} 
}

