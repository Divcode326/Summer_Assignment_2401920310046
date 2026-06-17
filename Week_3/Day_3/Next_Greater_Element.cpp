class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        stack = []
        dic = {}

        for num in nums2:
            while stack and num > stack[-1]:
                dic[stack.pop()] = num
            stack.append(num)

        return [dic.get(num, -1) for num in nums1]
