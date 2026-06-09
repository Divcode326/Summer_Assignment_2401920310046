class Solution:
    def findAnagrams(self, s, p):
        result = []

        if len(p) > len(s):
            return result

        pCount = {}
        sCount = {}

        for ch in p:
            pCount[ch] = pCount.get(ch, 0) + 1

        for i in range(len(p)):
            sCount[s[i]] = sCount.get(s[i], 0) + 1

        if pCount == sCount:
            result.append(0)

        left = 0
        for right in range(len(p), len(s)):
            sCount[s[right]] = sCount.get(s[right], 0) + 1

            sCount[s[left]] -= 1
            if sCount[s[left]] == 0:
                del sCount[s[left]]

            left += 1

            if pCount == sCount:
                result.append(left)

        return result
