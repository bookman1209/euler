# Python version 3.4.3

"""
Basic Idea: Let's assume that n1 > n2 W.L.O.G.
then n1 and n2 should meet the property that
there exist some positive integer a, b such that
n1(3n1-1) + n2(3n2-1) = a(3a-1) ... (1)
n1(3n1-1) - n2(3n2-1) = b(3b-1) ... (2)
and since we need to find smallest difference,
we will iterate on b from 0 to inf.
so if we express n2 in n1 and b, by using equation (2)
n2 = (1 + sqrt(36*n1^2 - 12*n1 - 36*b^2 + 12*b + 1))/6
On the iteration on b, we have to iterate on n1 to find n2.
Because P_n - P_(n-1) always increases when n is increasing,
so, if we meet the n1 that P_n1 - P_(n1-1) > b(3b-1)/2,
that's the condition to finish searching for that b.
Also, to check a number is pentagon or not,
we check that if (1 + sqrt(24n + 1))/6 is integer or not.
"""

from __future__ import division
from math import sqrt

def main():
    b = 0
    found = False
    while not found:
        b += 1
        n1 = 1
        c = -36*b*b + 12*b + 1
        while 6*n1-4 <= b*(3*b-1):
            x = 36*n1*n1 - 12*n1 + c
            if x > 0:
                n2 = (1 + sqrt(x))/6
                if n2 == int(n2):
                    P = n1*(3*n1-1)/2 + n2*(3*n2-1)/2
                    n = (1 + sqrt(24*P + 1)) / 6
                    if n == int(n):
                        found = True
                        break
            n1 += 1
    print(b*(3*b-1)/2)
                    

        
main()
