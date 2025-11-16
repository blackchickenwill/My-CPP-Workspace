// Created by 润天王 on 2025/11/9.
//又失去一个独立思考的机会。问你妈的AI
//出现逗号就把前面存的东西清除
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main () {
            int n;
            cin>>n;
    cin.get();//没有任何长进？
    for(int i=0;i<n;i++){
        string cur;
        vector<string> line;
        string input_line;
        getline(cin, input_line);
        for (char a:input_line) {
            if (a!='+'&&a!='*'&&a!=',') {
                        cur+=a;
                    }
            else if (a=='+'||a=='*') {
                line.push_back(cur);
                cur.clear();
            }
            else  {
                cur.clear();
                line.clear();
            }
                }
        if (!cur.empty()) {
            line.push_back(cur);
        }
        if (line.size()>1) {
            for (auto&q:line) {
                if (q=="bool"||q=="char") {
                    q="int";
                }
            }
        }
                //规定一个映射，从数据类型到大小，0到6
                string q[6]={"char","bool",
                    "int","longlong","float","double"};
                int max_val=0;
                for (int i=0;i<6;i++) {
                    for (int j=0;j<line.size();j++) {
                        if (line[j]==q[i]) {
                            max_val=i;
                            break;
                        }
                    }
                }
                cout<<q[max_val]<<endl;
            }
        }