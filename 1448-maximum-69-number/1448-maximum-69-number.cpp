class Solution {
public:
    int maximum69Number (int num) {
        int n=num;
        vector<int>temp;
        while(n!=0){
            temp.push_back(n%10);
            n=n/10;
        }
        for(int i=temp.size()-1;i>-1;i--){
            if(temp[i]==6){
                temp[i]=9;
                break;
            }
        }
        int rett=0;
        for(int i=temp.size()-1;i>-1;i--){
            rett=(rett*10)+temp[i];
        }
        return rett;
    }
};