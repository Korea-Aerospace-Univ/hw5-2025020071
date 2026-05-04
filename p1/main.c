#include <stdio.h>

int main(void)
{
    int N, m = 0;
    
    scanf("%d", &N);
    
    for(int i=1; i*900<=N; i++) {
        for(int j=2; j*750<=N; j+=2) {
            for(int k=1; k*200<=N; k++) {
                if (900*i+750*j+200*k == N) {
                    if (k<i || k<j) {
                        printf("%d %d %d\n", i, j, k);
                        m = 1;
                    }
                }
            }
        }
    }
    if (m=0) 
        printf("none");
        
    return 0;
}
