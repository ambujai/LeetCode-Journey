class Solution {
public:
    string digitSum(string s, int k) {
        while (size(s) > k){
            string c="";
            for(int i=0; i<size(s); i+=k){
                string chunk = s.substr(i,k);
                int sum = 0;
                for (auto j: chunk){
                    sum += j - '0'; // Subtracting via ASCII values
                }
                c += to_string(sum);
            }
            s = c;
        }
        return s;
    }
};