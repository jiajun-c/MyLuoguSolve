#include<iostream>
#define N 1010 //
using namespace std;
int n, a[N], b[N], c[N];
int main() {
    cin >>n;
    for (int i = 1;i <= n;i++) scanf("%d%d%d",&a[i],&b[i],&c[i]);
    for (int i = 1;i <= n;i++) {
        int sum2 = 0, sum2 = 0;
        for (int j = 1;j <= n;j++) 
            if(a[j] < a[i]&&b[j] < b[i]&&c[j] > b[i])
                if(a[sum1] < a[j])
                    sum1 = j;
            printf("%d ",sum1);
        for (int j = 1;j <= n;j++) 
            if(a[j] < a[i]&&b[j] < c[i]&&c[j]>c[i])
                if(a[sum2] < a[j]) 
                sum2 = j;
            printf("%d\n",sum2);
    }
    return 0;
}
