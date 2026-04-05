class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        if(rows==0){
            return "";
        }
        int ss=encodedText.size();
        int m=ss/rows;
        string rett="";
        int x=0;
        while(x<m){
            int i=0,j=x;
            while(i<rows && j<m){
                rett.push_back(encodedText[i*m+j]);
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