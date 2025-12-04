class Solution {
public:
    int countCollisions(string directions) {
        int rett=0;
        int n=directions.size(), i=0,j=n-1;
        while(i<n && directions[i]=='L'){
            i++;
        }
        while(j>=0 && directions[j]=='R'){
            j--;
        }
        for(int k=i;k<=j;k++){
            if(directions[k]=='L' || directions[k]=='R'){
                rett++;
            }
        }
        return rett;
    }
};