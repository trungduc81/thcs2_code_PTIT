#include <stdio.h>
#include <string.h>

int main(){
    int n ; scanf("%d", &n);
    char s[55][55] ;
    for(int i = 0; i < n; i++){
        scanf("%s", s[i]);
    }
    int len = strlen(s[0]);
    int res = 1e9 ;

    for(int i = 0; i < len; i++){
        char mau[55] ;
        strcpy(mau, s[0]) ;
        for(int k = 0; k < i; k++){
            char tmp = mau[0];
            for(int j = 0; j < len - 1; j++) mau[j] = mau[j + 1] ;
            mau[len-1] = tmp ;
        }
        int sum = i ; 
        int ok = 1 ;

        for(int j = 1; j < n; j++){
            int check = 0;
            for(int k = 0; k < len; k++){
                char tmp[55];
                strcpy(tmp, s[j]);
                for(int l = 0; l < k; l++){
                    char ch = tmp[0];
                    for(int m = 0; m < len - 1; m++) tmp[m] = tmp[m + 1];
                    tmp[len-1] = ch ;
                }

                if(strcmp(tmp, mau) == 0){
                    sum += k ;
                    check = 1;
                    break;
                }
            }

            if(!check){
                ok = 0;
                break;
            }
        }
        if(ok && sum < res){
            res = sum ;
        }
    }
    if(res == 1e9){
        printf("-1\n");
    } else {
        printf("%d\n", res);
    }
}
