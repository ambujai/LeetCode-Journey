class Solution:
    def digitSum(self, s: str, k: int) -> str:
        while len(s) > k:
            c = ""
            for i in range(0, len(s), k):
                chunks = s[i:i+k] 
                c += str(sum(int(j) for j in chunks))
            s = c 
        return s