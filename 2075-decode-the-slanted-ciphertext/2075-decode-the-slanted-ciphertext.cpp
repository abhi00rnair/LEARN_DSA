class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int ss=encodedText.size();
        int m=ss/rows;
        vector<vector<char>>matrix(rows,vector<char>(m));
        int k=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<m;j++){
                matrix[i][j]=encodedText[k];
                k++;
            }
        }
        string rett="";
        int x=0;
        while(x<m){
            int i=0,j=x;
            while(i<rows && j<m){
                rett.push_back(matrix[i][j]);
                i++;
                j++;
            }
            x++;
        }
        while(!rett.empty() && rett.back()==' '){
            rett.pop_back();
        }

        return rett;
    }
};