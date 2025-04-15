#include<stdio.h>
#include<math.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
int main(void){
    long long int n,m,k,count=0;
    scanf("%lld %lld %lld", &n, &m, &k);
    long long int combination3=min(n, min(m,k));
    count+=combination3;
    n-=combination3;
    m-=combination3;
    k-=combination3;
    long long int combination2=min(n/2, min(m,k));
    count+=combination2;
    n-=combination2*2;
    m-=combination2;
    k-=combination2;
    long long int combination1=min(n/2,k);
    count+=combination1;
    printf("%lld\n",count);
    return 0;
}
