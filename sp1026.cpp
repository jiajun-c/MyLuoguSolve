#include<iostream>
#define N 1010
using namespace std;
double a[N];
int main() {
    int n;
    double ans = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        ans += double(n)/double(i);
    }
    printf("%lf",ans);
}