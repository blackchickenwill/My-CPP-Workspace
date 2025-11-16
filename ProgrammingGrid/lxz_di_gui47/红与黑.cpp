//
// Created by 润天王 on 2025/11/14.
//dfs&&四方向数组延展
#include <iostream>
#include <vector>
using namespace std;
//dfs part
void dfs(vector<vector<char>>&grid,int x,int y,int&count){
    int m=grid.size();
    int n=grid[0].size();
    int xx[4]{0,0,1,-1};
    int yy[4]{1,-1,0,0};
    if(x<0||x>=m||y<0||y>=n){
        return;
    }
    count++;
    grid[x][y]='?';
    for(int p=0;p<4;p++){
        int mx=x+xx[p];
        int my=y+yy[p];
        dfs(grid,mx,my,count);
    }

};



int cover(vector<vector<char>>&grid,int i,int j){
    int count =0;
    dfs(grid,i,j,count);

    return count;
};
int main() {
    int W,H;
    while(cin>>W>>H&&W!=0&&H!=0){
        vector<vector<char>> FLOOR(H,vector<char>(W));
        int start_x;
        int start_y;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                cin>>FLOOR[i][j];
                if(FLOOR[i][j]=='@'){
                    start_x=i;
                    start_y=j;
                    FLOOR[i][j]='.';
                }
            }
        }//死脑子快想啊啊啊
        cout<<cover(FLOOR,start_x,start_y)<<endl;
    }

}