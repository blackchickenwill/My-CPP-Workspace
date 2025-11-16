#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    long long n;
    cin>>n;
    vector<int> bamboo;
    for (long long i=0;i<n;i++) {
        long long l,ri;
        cin>>l>>ri;
        bamboo.push_back(l-ri);
        bamboo.push_back(ri);
    }
    sort(bamboo.begin(),bamboo.end());
    long long m=bamboo.size();
    cout<<bamboo[m-1]+bamboo[m-2];
}