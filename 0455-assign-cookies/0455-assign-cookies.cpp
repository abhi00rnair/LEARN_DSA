class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int rett=0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int left=0, right=0;
        int n=s.size();
        int nn=g.size();
        while(left<n && right<nn){
            if(g[right]<=s[left]){
                rett++;
                left++;
                right++;
            }else{
                left++;
            }
        }
        return rett;
    }
};