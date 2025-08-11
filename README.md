# 📊 LeetCode Problem: Binary Tree Right Side View

## 🧩 Problem Statement

Given the `root` of a binary tree, imagine yourself standing on the **right side** of it, return the values of the **nodes** you can see ordered from **top to bottom**.

> **Note :**
> - Use DFS approach for traversing the binary tree.



## 🧠 Approach: Two-Pointer Technique

- Traverse the tree using **DFS**.
- Keep track of **nodes** at each level in an **array/vector**.
- For every level, push the last element into our answer array (since that’s what’s visible from the right).
- Return the **answer** vector.

## ✅ Example Walkthrough

### Example 1

##### Input: root = [1,2,3,null,5,null,4]
##### Output: [1,3,4]


### Example 2

##### Input: root = [1,2,3,4,null,null,null,5]
##### Output: [1,3,4,5]


### Example 3

##### Input: root = [1,null,3]
##### Output: [1,3]

### Example 4

##### Input: root = []
##### Output: []


## 🛠️ Constraints

- The number of nodes in the tree is in the range `[0, 100]`
- `-100 <= Node.val <= 100`
