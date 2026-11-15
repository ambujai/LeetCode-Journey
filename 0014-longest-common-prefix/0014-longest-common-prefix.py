class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        if not strs or not strs[0]:
            return ""
        pre = ""
        x = 1
        while x <= len(strs[0]):
            prefix = strs[0][:x]
            for i in strs[1:]:
                if i[:x] != prefix:
                    return pre
            pre = prefix
            x += 1
        return pre