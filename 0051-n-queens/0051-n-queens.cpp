class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ret;
        vector<string>temp(n,string(n,'.'));
        func(n,ret,temp,0);
        return ret;
        
    }
    
    void func(int n, vector<vector<string>>&ret,vector<string>&temp,int index){
        if(index==n){
            ret.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(safe(temp,i,index,n)){
                temp[i][index]='Q';
                func(n,ret,temp,index+1);
                temp[i][index]='.';
            }
        }
    }
    
    bool safe(vector<string>&temp,int row, int coloumn, int n){
        int a=row;
        int b=coloumn;
        while(coloumn>=0){
            if(temp[row][coloumn]=='Q'){
                return false;
            }
            coloumn--;
        }
        row=a;
        coloumn=b;
        while(coloumn>=0 && row>=0){
            if(temp[row][coloumn]=='Q'){
                return false;
            }
            row--;
            coloumn--;
        }
        row=a;
        coloumn=b;
        while(row<n && coloumn>=0){
            if(temp[row][coloumn]=='Q'){
                return false;
            }
            row++;
            coloumn--;
        }
        return true;
    }
};