
class Solution {
public:
    int sum(int x)
    {
        int res=0;
        while(x!=0){
            res+=x%10;
            x/=10;
        }
        return res;
    }
    int movingCount(int threshold, int rows, int cols)
    {
        if(!rows||!cols) return 0;
        int res=0;
        bool st[rows+1][cols+1];
        memset(st,false,sizeof st);
        
        queue<pair<int,int>> q;
        q.push({0,0});
        
        int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
        
        while(q.size()){
            auto s=q.front();
            q.pop();
            int a=s.first;
            int b=s.second;
            int t=sum(a)+sum(b);
            if(st[a][b]||t>threshold) continue;
            res++;
            st[a][b]=true;
            
            for(int i=0;i<4;i++){
                int x=s.first+dx[i],y=s.second+dy[i];
                if(x>=0&&x<rows&&y>=0&&y<cols){
                    q.push({x,y});
                }
            }
            
        }
        return res;
    }
};