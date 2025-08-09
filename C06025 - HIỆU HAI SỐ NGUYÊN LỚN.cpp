#include<stdio.h>
#include<string.h>

void reverse(char a[]){
    int l = 0, r = strlen(a) - 1;
    while(l < r){
        char tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        l++;
        r--;
    }
}

int cmp(char a[], char b[]){
    int len_a = strlen(a), len_b = strlen(b);
    if(len_a != len_b) return (len_a > len_b) ? 1 : -1 ;
    return strcmp(a, b);
}

void solve(){
    char a[1005], b[1005], res[1010];
    scanf("%s %s", a, b);
    if(cmp(a, b) < 0){
        char tmp[1005];
        strcpy(tmp, a);
        strcpy(a, b);
        strcpy(b, tmp);
    }
    reverse(a) ;reverse(b) ;
    int len_a = strlen(a), len_b = strlen(b);
    int len = (len_a > len_b) ? len_a : len_b;
    int nho = 0, idx = 0;

    for(int i = 0; i < len; i++){
        int a1 = (i < len_a) ? a[i] - '0' : 0;
        int b1 = (i < len_b) ? b[i] - '0' : 0;
        int diff = a1 - b1 - nho;
        if(diff < 0){
            diff += 10;
            nho = 1;
        } else {
            nho = 0;
        }
        res[idx++] = diff + '0';
    }
    while(idx > 1 && res[idx-1] == '0') idx--;

    res[idx] = '\0';
    reverse(res);
    printf("%s\n", res);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
}
