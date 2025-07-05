#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

int prime[MAX];

void sang() {
    for (int i = 0; i < MAX; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < MAX; i++){
        if (prime[i]) {
            for (int j = i * i; j < MAX; j += i){
                prime[j] = 0;
            }
        }
    }
}

int main(){
    sang();
    int t;
    scanf("%d", &t);
    while (t--) {
        int n ; scanf("%d",&n) ; 
		for(int i = 2 ; i <= n/2 ; i++){
			if(prime[i]&&prime[n-i]){
				printf("%d %d ",i,n-i) ; 
			}
		}
		printf("\n") ;  
    }
    return 0;
}

