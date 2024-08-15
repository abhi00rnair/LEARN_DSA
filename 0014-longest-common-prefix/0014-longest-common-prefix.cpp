class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string temp = strs[0];
        int index = temp.size();
        
        while (index > 0) {
            int count = 0;
            for (int i = 0; i < strs.size(); i++) {
                if (strs[i].size() >= index) {
                    if (temp.substr(0, index) == strs[i].substr(0, index)) {
                        count++;
                    }
                }
            }
            if (count == strs.size()) {
                return temp.substr(0, index);
            } else {
                index--;
            }
        }
        return "";
    }
};
