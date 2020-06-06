"""
# Definition for a Node.
class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children
"""
class Solution(object):
    def preorder(self, root):
        """
        :type root: Node
        :rtype: List[int]
        """
        if not root:
            return []
        stack, vals = [root], []
        while stack:
            node = stack.pop()
            vals.append(node.val)
            for child in reversed(node.children):
                stack.append(child)
        return vals