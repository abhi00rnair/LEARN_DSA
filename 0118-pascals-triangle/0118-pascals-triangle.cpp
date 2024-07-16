class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ret;
        if(numRows==0){
            return ret;
        }
        vector<int>strt={1};
        ret.push_back(strt);
        if(numRows==1){
            return ret;
        }
        vector<int>second={1,1};        
        ret.push_back(second);
        if(numRows==2){
            return ret;
        }

        int count=2;
        while(count<numRows){
            vector<int>temp(count-1,0);
            temp.insert(temp.begin(),1);
            temp.insert(temp.end(),1);
            for(int i=1;i<count;i++){
                int val=second[i-1]+second[i];
                temp[i]=val;
            }
            second=temp;
            ret.push_back(temp);
            count++;
        }
        return ret;
    }
};