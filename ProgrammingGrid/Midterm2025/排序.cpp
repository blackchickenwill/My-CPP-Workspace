//
// Created by 润天王 on 2025/11/11.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int judge(vector<int> a) {

    if (a.size()==1) {
        return 0;
    }
    else if (a.size()==2) {
        return 1;
    }
    else if (a.size()==3) {
        return 2;
    }//前三种单独拿出来，因为放进去依然要讨论
    else {
        bool dc=true;
        int count{0};
        vector<int> front;
        vector<int> back;//这俩其实可以放到循环内部
        for (float i=0.5;i<=a.size()-1.5;i+=1) {//太抽象了，其实用整数完全也不会搞错逻辑
            dc=true;//每回都得初始化，要不就都拿进来
            if (i==0.5) {//这是开头有1个的情况
                vector<int> b(a);//为啥要复制？因为后面一系列折腾完a就不是原来的样子了
                b.erase(b.begin());//其实可以不用擦的，不擦的话也用不着b了
                sort(b.begin(),b.end());
                int d=b[0]-b[1];
                for (int j=1;j<b.size()-1;j++) {
                    if (b[j]-b[j+1]!=d) {
                        dc=false; break;
                    }
                }
                if (dc){count++;}
                else{continue;}
            }
            else if (i==a.size()-1.5) {//这是末尾有一个的情况
                vector<int> b(a);
                b.erase(b.end()-1);//这里注意，b.end指向的是最后一个元素加1的位置！所以最好用b.popback.
                sort(b.begin(),b.end());
                int d=b[0]-b[1];
                for (int j=1;j<b.size()-1;j++) {
                    if (b[j]-b[j+1]!=d) {
                        dc=false; break;
                    }
                }
                if (dc){count++;}
                else{continue;}
            }
            else {
                for (int j=0;j<=i-0.5;j++) {
                    front.push_back(a[j]);
                }//其实没必要，直接从0～i-0.5跑一遍也行，这里就是怕自己绕晕了
                sort(front.begin(),front.end());
                int df=front[0]-front[1];
                for (int j=1;j<front.size()-1;j++) {
                    if (front[j]-front[j+1]!=df) {
                        dc=false;break;
                    }
                }
                //判断逻辑写的还行
                for (int j=i+0.5;j<=a.size()-1;j++) {
                    back.push_back(a[j]);
                }
                sort(back.begin(),back.end());
                int db=back[0]-back[1];
                for (int j=1;j<back.size()-1;j++) {
                    if (back[j]-back[j+1]!=db) {
                        dc=false;break;
                    }
                }
                if (dc) {
                    count++;

                }
            }
            front.clear();back.clear();//最后还要抹掉这俩
        }
        return count;
    }
};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    for (int i=0;i<T;i++) {
        int n;cin>>n;
        vector<int> l(n);
        for (int j=0;j<n;j++) {
            cin>>l[j];
        }
        cout<<judge(l)<<endl;
    }

}//思路太逆天了，想个办法优化一下
