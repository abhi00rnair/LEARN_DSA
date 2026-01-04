class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int rett=0;
        for(int it:nums){
            int count=2;
            int sum=it+1;
            for(int i=2;i*i<=it;i++){
                if(it%i==0){
                    int d=it/i;
                    if(d==i){
                        count+=1;
                        sum+=i;
                    }else{
                        count+=2;
                        sum=sum+i+d;
                    }
                }
                if(count>4){
                    break;
                }
            }
            if(count==4){
                rett+=sum;
            }
        }
        return rett;
    }
};