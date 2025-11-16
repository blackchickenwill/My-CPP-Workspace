#include <iostream>
using namespace std;
int ans(int x,int y) {
    if (x==y) {
        return x;
    }

    if (x>y) {
        return ans(x/2,y);
        }
    else {
        return  ans(x,y/2);
        }

};

int main() {
    int a,b;
    cin>>a>>b;
    cout<<ans(a,b);
    return 0;
}