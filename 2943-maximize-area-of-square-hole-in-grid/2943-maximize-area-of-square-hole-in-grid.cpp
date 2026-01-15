class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(),vBars.end());
        int hx=0,hy=0;
        int vx=0,vy=0;
        for(int i=0;i<hBars.size();i++){
            int k=i;
            while(k+1<hBars.size() &&  hBars[k+1]==hBars[k]+1){
                k++;
            }
            if(hy-hx<k-i){
                hx=i;
                hy=k;
            }
        }
        for(int i=0;i<vBars.size();i++){
            int k=i;
            while(k+1<vBars.size() &&  vBars[k+1]==vBars[k]+1){
                k++;
            }
            if(vy-vx<k-i){
                vx=i;
                vy=k;
            }
        }
        int rett=min(hy-hx+2,vy-vx+2);
        return rett*rett;
    }
};