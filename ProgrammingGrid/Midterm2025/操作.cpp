#include <iostream>
#include<cmath>
#include <algorithm>
#include <numeric>
using namespace std;
/*题目：有两个正整数 a 和 b，每次可以选择以下操作之一：

1. a←a×2。
2. b←b−1。
3. b←b+1。

求使得 a=b 的最小操作次数。

数据范围：1≤a,b≤1,000,000,000。*/
int main() {
    long long a,b;
    cin>>a>>b;
    long long min_times=abs(a-b);
    for (int k=1;k<=32;k++) {//找到一个足够大的就行
        long long c=pow(2,k)*a;
        min_times=min(min_times,k+abs(c-b));//为了避免问题，都用longlong
    }
    cout<<int(min_times);
}
