# Leetcode-112.-Path-Sum

# 🌳 Path Sum – Binary Tree Problem

This repository contains a C++ implementation for solving the **"Path Sum"** problem in binary trees. The goal is to determine whether there exists a **root-to-leaf** path in the binary tree such that the sum of the node values along the path is equal to a given target sum.

---

## 🧩 Problem Statement

Given the `root` of a binary tree and an integer `targetSum`, return `true` if there exists a **root-to-leaf** path where the sum of the node values equals `targetSum`. Otherwise, return `false`.

A **leaf** node is one with no left or right children.

---

## 🧠 Approach

- Use **Depth-First Search (DFS)** traversal from the root.
- At each node, add the current node’s value to an accumulated sum.
- If a leaf node is reached, check if the accumulated sum equals `targetSum`.
- Return `true` if any such path exists.

---

## 🖥️ Code Overview

- `hasPathSum(TreeNode* root, int targetSum)`: main function that returns `true` if such a path exists.
- `hlo(TreeNode* root, int targetSum, int sum)`: helper function for recursive DFS.

---

## 📌 Example

```text
Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
Output: true
Explanation: Path 5 → 4 → 11 → 2 equals 22.

```

💡 Technologies Used

Language: C++

Concepts: Recursion, Binary Tree, DFS

---

👨‍💻 Author

Ridham Garg

B.Tech Computer Engineering

Thapar University, Patiala

Roll Number: 102203014
