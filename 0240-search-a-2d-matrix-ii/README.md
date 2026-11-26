# 240. Search a 2D Matrix II  (Medium)

https://leetcode.com/problems/search-a-2d-matrix-ii/

- **Language:** C++
- **Solved:** 2026-11-27 in 17:29 (Solvra timer)
- **Runtime:** 98 ms  |  **Memory:** 18.6 MB

## My notes

esme array complete sorted nahi , esl row wise chalnege .
Matlab poora array sorted nahi hai.

Ab iska meaning samjho:
- for loop har row par jayega.
- i = 0 → Row 0
- i = 1 → Row 1
- i = 2 → Row 2


1. Sabse pehle difference samjho
LeetCode 74:
- Har row sorted hai.
- Har next row ka first element, previous row ke last element se bada hai.
- Isliye poori matrix ko 1D sorted array maan sakte hain.
LeetCode 240:
- Har row sorted hai.
- Har column bhi sorted hai.
- Lekin next row ka first element previous row ke last element se bada hona zaroori nahi hai.

## Problem

Can you solve this real interview question? Search a 2D Matrix II - Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

 * Integers in each row are sorted in ascending from left to right.
 * Integers in each column are sorted in ascending from top to bottom.

 

Example 1:

[https://assets.leetcode.com/uploads/2020/11/24/searchgrid2.jpg]


Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true


Example 2:

[https://assets.leetcode.com/uploads/2020/11/24/searchgrid.jpg]


Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
Output: false


 

Constraints:

 * m == matrix.length
 * n == matrix[i].length
 * 1 <= n, m <= 300
 * -109 <= matrix[i][j] <= 109
 * All the integers in each row are sorted in ascending order.
 * All the integers in each column are sorted in ascending order.
 * -109 <= target <= 109

---
_Saved by Solvra_
