class Solution {
public:
    int maxCollectedFruits(vector<vector<int>>& fruits) {
        int n=fruits.size();
        int m=fruits[0].size();

        int child1=0;
        for(int i=0;i<n;i++){
            child1+=fruits[i][i];
            if(i!=n-1){
            fruits[i][i]=-1;
            }
        }   
        int child2=func1(0,n-1, fruits, n,m, n-1);
        int child3=func2(n-1, 0, fruits, n,m, n-1);
        return child1+child2+child3-2*fruits[n-1][m-1];
    }
    int func1(int i, int j,vector<vector<int>>&fruits, int n, int m, int moves){
        if(i>=n || j<0 || j>=m || moves<0 || fruits[i][j]==-1){
            return INT_MIN;
        }
        if(i==n-1 && j==m-1){
            return fruits[i][j];
        }
        int rett=max({func1(i+1, j, fruits, n, m, moves-1),func1(i+1, j-1, fruits, n, m, moves-1),func1(i+1, j+1, fruits, n, m, moves-1)});
        return rett+fruits[i][j];
    }
    int func2(int i, int j, vector<vector<int>>&fruits, int n, int m, int moves){
        if(i>=n || j>=m || i<0 || j<0 || fruits[i][j]==-1 || moves<0){
            return INT_MIN;
        }
        if(i==n-1 && j==m-1){
            return fruits[i][j];
        }
        int rett= max({func2(i-1,j+1,fruits,n, m, moves-1), func2(i, j+1, fruits, n, m, moves-1), func2(i+1, j+1, fruits, n, m, moves-1)});
        return rett+fruits[i][j];
    }
};