# 3411. Maximum Subarray With Equal Products  (Easy)

https://leetcode.com/problems/maximum-subarray-with-equal-products/

- **Language:** cpp
- **Solved:** 2026-11-24 in 0:18 (Study Buddy timer)
- **Status:** saved from the editor (not an accepted submission yet)

## My notes

_No notes._

## Problem

You are given an array of positive integers nums.

An array arr is called product equivalent if prod(arr) == lcm(arr) * gcd(arr), where:

prod(arr) is the product of all elements of arr.
gcd(arr) is the GCD of all elements of arr.
lcm(arr) is the LCM of all elements of arr.

Return the length of the longest product equivalent subarray of nums.

 

Original
C++
Example 1:

Input: nums = [1,2,1,2,1,1,1]

Output: 5

Explanation: 

The longest product equivalent subarray is [1, 2, 1, 1, 1], where prod([1, 2, 1, 1, 1]) = 2, gcd([1, 2, 1, 1, 1]) = 1, and lcm([1, 2, 1, 1, 1]) = 2.

Example 2:

Input: nums = [2,3,4,5,6]

Output: 3

Explanation: 

The longest product equivalent subarray is [3, 4, 5].

Example 3:

Input: nums = [1,2,3,1,4,5,1]

Output: 5

 

Constraints:

2 <= nums.length <= 100
1 <= nums[i] <= 10

---
_Saved by Study Buddy_
