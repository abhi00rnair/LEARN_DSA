class Solution {
public:
    vector<string> addOperators(string num, int target) {
        string temp;
        vector<string>rett;
        func(num,target,0,temp,rett,0,0);
        return rett;
        
    }
    void func(string nums ,int target,int i,string temp,vector<string>&rett,long long  tp, long long prev){
        if(i>=nums.size()){
            if(tp==target){
                rett.push_back(temp);
            }
            return;
        }
        for(int j=i;j<nums.size();j++){
            if (nums[i] == '0' && j > i) break;  

            string part=nums.substr(i,j-i+1);
            long long x=stoll(part);

            if(i==0){
                func(nums,target,j+1,part,rett,x,x);
            }else{
                func(nums,target,j+1,temp+'+'+part,rett,tp+x,x);
                func(nums,target,j+1,temp+'-'+part,rett,tp-x,-x);
                func(nums,target,j+1,temp+'*'+part,rett,tp-prev+prev*x,prev*x);
            }
        }

    }
};