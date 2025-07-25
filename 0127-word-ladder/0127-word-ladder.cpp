class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n=wordList.size();
        int nn=beginWord.size();
        if(find(wordList.begin(), wordList.end(),endWord)==wordList.end()){
            return 0;
        }
        vector<int>adj[n+1];
        wordList.insert(wordList.begin(),beginWord);
        for(int i=0;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                int diff=0;
                for(int x=0;x<nn;x++){
                    if(wordList[i][x]!=wordList[j][x]){
                        diff++;
                    }
                }
                if(diff==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        queue<pair<int, int>>Qq;
        vector<int>visited(n+2,-1);
        Qq.push({0,1});
            while(!Qq.empty()){
                auto temp=Qq.front();
                int node=temp.first;
                int len=temp.second;
                Qq.pop();
                visited[node]=1;
                if(wordList[node]==endWord){
                    return len;
                }
                for(int it:adj[node]){
                    if(visited[it]==-1){
                        Qq.push({it,len+1});
                    }
                }
            }
        return 0;
    }
};