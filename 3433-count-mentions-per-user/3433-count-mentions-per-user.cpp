class Solution {
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        vector<int> rett(numberOfUsers, 0);

        vector<bool> online(numberOfUsers, true);
        vector<int> time_offline(numberOfUsers, 0);

        sort(events.begin(), events.end(), func());
        
        for (int i = 0; i < events.size(); i++) {
            int currTime = stoi(events[i][1]);

            for (int u = 0; u < numberOfUsers; u++) {
                if (!online[u] && time_offline[u] != 0 && time_offline[u] + 60 <= currTime) {
                    online[u] = true;
                    time_offline[u] = 0;
                }
            }

            string type = events[i][0];

            if (type == "OFFLINE") {
                int uid = stoi(events[i][2]);
                online[uid] = false;
                time_offline[uid] = currTime;
                
            }
            else {
              string msg = events[i][2];

                if (msg == "ALL") {
                    for (int u = 0; u < numberOfUsers; u++) {
                        rett[u]++;     
                    }
                }
                else if (msg == "HERE") {
                    for (int u = 0; u < numberOfUsers; u++) {
                        if (online[u]) rett[u]++;
                    }
                }
                else {
                    stringstream ss(msg);
                    string tok;

                    while (ss >> tok) {
                        if (tok.rfind("id", 0) == 0) {   
                            int uid = stoi(tok.substr(2)); 
                            rett[uid]++;                   
                        }
                    }
                }
            }
        }

        return rett;
    }

    struct func {
        bool operator()(const vector<string>& a, const vector<string>& b) const {
            int tp=stoi(a[1]);
            int tr=stoi(b[1]);
            if(tp==tr){
                return a[0]>b[0];
            }
            if(tp<tr){
                return true;
            }return false;
        }
    };
};
