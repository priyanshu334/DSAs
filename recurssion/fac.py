class fac:
    def __init__(self,n):
        self.n =n
    def factorial(self,n):
        if(n==0):
            return 1
        ans = n *self.factorial(n-1)
        return ans 


fac f1 = fac(n)