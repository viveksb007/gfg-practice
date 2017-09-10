#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,m,sx,sy,dx,dy,ans = -1;
        cin>>n>>m>>sx>>sy>>dx>>dy;
        vector<vector<int>> hash(n,vector<int>(m,0));
        queue<int> qx,qy,count;
        int temp = 0;
        sx--;sy--;dx--;dy--;
        qx.push(sx); qy.push(sy);
        count.push(temp);
        hash[sx][sy] = 1;
        while(!qx.empty()){
            int y = qx.front(),x = qy.front();
            int moves = count.front();
            if(x == dy && y == dx){
                ans = moves;
                break;
            }
            qx.pop(); qy.pop(); count.pop();
            if(y-2 >= 0 && x-1 >= 0 && hash[y-2][x-1] == 0){
                hash[y-2][x-1] = 1;
                qx.push(y-2);
                qy.push(x-1);
                count.push(moves+1);
            }
            if(y-2 >= 0 && x+1 < m && hash[y-2][x+1] == 0){
                hash[y-2][x+1] = 1;
                qx.push(y-2);
                qy.push(x+1);
                count.push(moves+1);
            }
            if(y+2 < n && x-1 >= 0 && hash[y+2][x-1] == 0){
                hash[y+2][x-1] = 1;
                qx.push(y+2);
                qy.push(x-1);
                count.push(moves+1);
            }
            if(y+2 < n && x+1 < m && hash[y+2][x+1] == 0){
                hash[y+2][x+1] = 1;
                qx.push(y+2);
                qy.push(x+1);
                count.push(moves+1);
            }
            
            if(y-1 >= 0 && x-2 >= 0 && hash[y-1][x-2] == 0){
                hash[y-1][x-2] = 1;
                qx.push(y-1);
                qy.push(x-2);
                count.push(moves+1);
            }
            if(y-1 >= 0 && x+2 < m && hash[y-1][x+2] == 0){
                hash[y-1][x+2] = 1;
                qx.push(y-1);
                qy.push(x+2);
                count.push(moves+1);
            }
            if(y+1 < n && x-2 >= 0 && hash[y+1][x-2] == 0){
                hash[y+1][x-2] = 1;
                qx.push(y+1);
                qy.push(x-2);
                count.push(moves+1);
            }
            if(y+1 < n && x+2 < m && hash[y+1][x+2] == 0){
                hash[y+1][x+2] = 1;
                qx.push(y+1);
                qy.push(x+2);
                count.push(moves+1);
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
