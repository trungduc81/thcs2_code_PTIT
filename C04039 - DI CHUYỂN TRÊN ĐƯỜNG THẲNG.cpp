#include<stdio.h>
#include<math.h>

int main() {
    int l, r, step;
    while (scanf("%d%d", &l, &r) != -1){
        int kc = abs(r - l);
        if (kc == 3) {
            printf("3\n") ;
            continue;
        }
        int buoc = sqrt(kc) ;
        int kc_truoc = buoc * (buoc - 1) ;
        int du = kc - kc_truoc ;

        if (du > 2 * buoc)
            step = 2 * buoc + 1 ;
        else if (du > buoc)
            step = 2 * buoc ;
        else step = 2 * buoc - 1 ;
        printf("%d\n", step) ;
    }
}
