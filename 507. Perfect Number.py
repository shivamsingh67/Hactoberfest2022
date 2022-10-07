class Solution:
    def checkPerfectNumber(self, num: int) -> bool:    
        if num==1:
            return False
        else: 
            res=[]
            for i in range(1,int(math.sqrt(num)+1)):
                if num%i==0:
                    res.append(i)
                    res.append(num//i)

        res.remove(num)
        return sum((list(set(res))))==num
