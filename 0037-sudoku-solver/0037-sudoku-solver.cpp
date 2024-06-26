class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        func(board);
    }
    
    bool func(vector<vector<char>>& nums){
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums[0].size(); j++){
                if(nums[i][j] == '.'){
                    vector<char> tp = chances(i + 1, j + 1, nums);
                    for(int p = 0; p < tp.size(); p++){
                        nums[i][j] = tp[p];
                        if(func(nums)){
                            return true;
                        }else{
                            nums[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    vector<char> chances(int i, int j, vector<vector<char>>& s){
        unordered_set<char> ret;
        
        for(int x = 1; x <= 9; x++){  
            if(s[i - 1][x - 1] != '.'){  
                ret.insert(s[i - 1][x - 1]);
            }
        }
        
        for(int y = 1; y <= 9; y++){ 
            if(s[y - 1][j - 1] != '.'){
                ret.insert(s[y - 1][j - 1]);
            }
        }

        int p = ((i - 1) / 3) * 3;
        int q = ((j - 1) / 3) * 3;
           
        for(int a = p; a < p + 3; a++){
            for(int b = q; b < q + 3; b++){
                if(s[a][b] != '.'){
                    ret.insert(s[a][b]);
                }
            }
        }
        
        vector<char> temp;
        for(char ch = '1'; ch <= '9'; ch++){
            if(ret.find(ch) == ret.end()){
                temp.push_back(ch);
            }
        }
        
        return temp;
    }
};