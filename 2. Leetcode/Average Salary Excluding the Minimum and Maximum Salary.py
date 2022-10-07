#https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/

class Solution:
    def average(self, salary: List[int]) -> float:
        maximum = max(salary)
        minimum = min(salary)
        total = sum(salary)
        total_length = len(salary)-2
        
        return (total-maximum-minimum)/total_length
