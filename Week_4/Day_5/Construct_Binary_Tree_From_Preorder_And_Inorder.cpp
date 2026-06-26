# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def buildTree(self, preorder, inorder):
        index = {v: i for i, v in enumerate(inorder)}
        self.pre = 0

        def helper(left, right):
            if left > right:
                return None

            root_val = preorder[self.pre]
            self.pre += 1
            root = TreeNode(root_val)

            mid = index[root_val]
            root.left = helper(left, mid - 1)
            root.right = helper(mid + 1, right)

            return root

        return helper(0, len(inorder) - 1)
