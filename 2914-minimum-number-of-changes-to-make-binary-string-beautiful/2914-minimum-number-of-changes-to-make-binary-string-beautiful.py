class Solution:
    def minChanges(self, s: str) -> int:
        count = 0
        s_list = list(s)
        for i in range(1, len(s), 2):
            if s_list[i] != s_list[i-1]:
                s_list[i] = s_list[i-1]
                count += 1
        return count
            