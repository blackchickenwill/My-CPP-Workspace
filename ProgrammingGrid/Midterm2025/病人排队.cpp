//
// Created by 润天王 on 2025/11/8.

#include <vector>
#include <iostream>
#include <string>
using namespace std;
struct man{
    string id;
    int age;
};
int main() {
    int n;
    cin>>n;
    vector<man> old;
    vector<man> others;
    for (int i = 0; i < n; i++) {
        man m;
        cin>>m.id>>m.age;
        if (m.age>=60) {
            old.push_back(m);
        }
        else {
            others.push_back(m);
        }
    }
    int a=old.size();
    int c=others.size();
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<a-i-1;j++) {//注意此时是第i-1轮结束，刚排好后i个数
            if (old[j].age<old[j+1].age) {
                man b=old[j];
                old[j]=old[j+1];
                old[j+1]=b;
            }
        }
    }
    for (auto&k:old) {
    cout<<k.id<<endl;
}
    for (auto&k:others) {
        cout<<k.id<<endl;
    }
}