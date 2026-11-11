class Solution:
    def minimumCost(self, cost1: int, cost2: int, costBoth: int, need1: int, need2: int) -> int:
        
        if need1==0 and need2 ==0:
            return 0
        else:
            
            total1 = cost1 * need1 + cost2 * need2

            toChooseMin = min(need1, need2)

            toChooseMax = max(need1, need2)

            total2 = toChooseMax * costBoth

            if need1 == need2:
                return min(total1, total2)

            elif need1 > need2:
                diff = need1 - need2
                total3 = toChooseMin * costBoth + diff * cost1
                return min(total1, total2, total3)
            
            elif need2 > need1:
                diff = need2 - need1
                total3 = toChooseMin * costBoth + diff * cost2
                return min(total1, total2, total3)
            

        