class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        int arr[]={1,2,3,4,5,6,7,8,9};
        vector<vector<int>>ret;
        vector<int>temp;
        func(arr,temp,ret,k,n,0);
        return ret;
        
    }
    
    void func(int arr[],vector<int>&temp,vector<vector<int>>&ret,int k,int n,int i){
        if(temp.size()==k){
            int sum=0;
            for(int i=0;i<temp.size();i++){
                sum+=temp[i];
            }
            if(sum==n){
                ret.push_back(temp);
            }
            return;
        }if(i<9){
        temp.push_back(arr[i]);
        func(arr,temp,ret,k,n,i+1);
        temp.pop_back();
        func(arr,temp,ret,k,n,i+1);
        }
        
    }
};