class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";

        int x = 1;
        std::string pre = "";
        std::string prefix;

        while(x <= size(strs[0]))
        {
            prefix = strs[0].substr(0, x);
            for(int i=1; i<size(strs); i++){
                if (strs[i].substr(0, x) != prefix) {
                    return pre;
                }
            }
            pre = prefix;
            x++;
        }
        return pre;
    }
};