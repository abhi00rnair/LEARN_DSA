class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int max_area=0;
        int n=matrix.size(), m=matrix[0].size();
        vector<vector<int>>prefix_sum(n,vector<int>(m,-1));

        for(int j=0;j<m;j++){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=matrix[i][j]-'0';
                if(matrix[i][j]-'0'==0){
                    sum=0;
                }
                prefix_sum[i][j]=sum;
            }
        }
        for(int i=0;i<n;i++){
            max_area=max(max_area,func(prefix_sum[i]));
        }
        return max_area;
    }

    int func(vector<int>&nums){
        int n=nums.size();
        stack<int>st;
        int maxarea=0;
        for(int i=0;i<=n;i++){
            int curr=(i==n ?0 : nums[i]);
            while(!st.empty() && nums[st.top()]>curr){
                int height=nums[st.top()];
                st.pop();
                int nse=i;
                int pse=-1;
                if(!st.empty()){
                    pse=st.top();
                }
                int width=nse-pse-1;
                maxarea=max(maxarea,width*height);
            }
            st.push(i);
        }
        return maxarea;
    }
};