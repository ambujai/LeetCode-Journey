class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        
        if (need1==0 && need2==0)
            return 0;

        else{
            long long total = 1LL * cost1 * need1 + 1LL * cost2 * need2;
            long long chooseMax = need1 > need2? need1 : need2;
            long long chooseMin = need1 < need2? need1 : need2;
            long long total1 = chooseMax * costBoth;
            long long totalMin = chooseMin * costBoth;
            long long result;

            if (need1==need2){
                result = std::min(total, total1);
                return result;
            }
            else if(need1 > need2){
                long long diff = need1 - need2;
                long long total2 = totalMin + diff * cost1;
                result = std::min({total, total1, total2});
                return result;
            }
            else{
                long long diff = need2 - need1;
                long long total2 = totalMin + diff * cost2;

                result = std::min({total, total1, total2});
                return result;
            }
        }
    }
};