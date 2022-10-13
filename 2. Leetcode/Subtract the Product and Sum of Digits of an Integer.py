# https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

from math import *
class Solution:
    def subtractProductAndSum(self, n: int) -> int:
            number = list(map(int, str(n)))
            product = math.prod(number)
            addition = sum(number)
            result = product - addition 
            return result
