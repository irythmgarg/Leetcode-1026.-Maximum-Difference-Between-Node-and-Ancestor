# Leetcode-1026.-Maximum-Difference-Between-Node-and-Ancestor

🌲 Maximum Ancestor Difference – C++ Solutions
-

Given the root of a binary tree, the goal is to return the maximum value of |ancestor.val - node.val| for any ancestor–descendant pair in the tree.
This repository includes two elegant DFS-based approaches to solve the problem efficiently 💡⚡.

---

✅ Problem Description
-
You are given the root of a binary tree.
Return the maximum difference between the value of any node and the value of any of its ancestors.

---

🛠️ Approaches
-
🔍 Approach 1: Brute DFS with Repeated Subtree Traversal
For every node in the tree, we treat it as an ancestor and perform a second DFS to find the maximum difference between it and all its descendants.

The max difference is updated using the absolute value |ancestor.val - descendant.val|.

---

📈 Time Complexity:
-
O(n²) in the worst case (e.g., skewed tree)
– because for each node we may revisit many nodes in its subtree.

💾 Space Complexity:
-
O(h) for recursion stack (where h is the height of the tree)

---

⚡ Approach 2: Optimized DFS with Min/Max Propagation
-
While traversing the tree, pass along the maximum and minimum values encountered so far in the path.

At each node, compute the current difference as |max - min| and update the global result.

This eliminates the need for a second traversal at each node, making it more efficient.

---
📈 Time Complexity:
-
O(n) – each node is visited once.

💾 Space Complexity:
-
O(h) for recursion stack (where h is the height of the tree)

---

👨‍💻 Author
-
Ridham Garg

🎓 B.Tech Computer Engineering

🏫 Thapar University, Patiala

🆔 Roll Number: 102203014

