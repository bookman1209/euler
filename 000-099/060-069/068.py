# Python version 3.4.3

"""
If we represent set as
a, b, c; d, c, e; f, e, g; h, g, i; j, i, b
there are some constraints.
1. sum of each row should be 11 + (b+c+e+g+i)/5 => b+c+e+g+i is divisable by 5
2. a is minimum in {a,d,f,h,j}
3. since result should be 16 digit, one of {a,d,f,h,j} should be 10
 3-1. from 2, one of {d,f,h,j} should be 10
4. a+b+c == c+d+e == e+f+g == g+h+i == b+i+j
"""

from itertools import permutations

def main():
    max1 = 0
    for b,c,e,g,i in permutations(range(1,10), 5):
        if (b+c+e+g+i) % 5 == 0:
            row_sum = int(11 + (b+c+e+g+i)/5)
            a = row_sum - (b+c)
            d = row_sum - (c+e)
            f = row_sum - (e+g)
            h = row_sum - (g+i)
            j = row_sum - (b+i)
            if a == min(a,d,f,h,j) and \
               sorted([a,b,c,d,e,f,g,h,i,j]) == [1,2,3,4,5,6,7,8,9,10]:
                result = int( str(a) + str(b) + str(c) + \
                              str(d) + str(c) + str(e) + \
                              str(f) + str(e) + str(g) + \
                              str(h) + str(g) + str(i) + \
                              str(j) + str(i) + str(b) )
                if max1 < result:
                    max1 = result
    print("Answer:", max1)
    
main()
