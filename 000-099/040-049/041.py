# Python version 3.4.3

from math import sqrt
from itertools import permutations

def is_prime(n):
    if n == 2:
        return True
    if n%2 == 0 or n == 1:
        return False
    for i in range(3, int(sqrt(n))+1, 2):
        if n%i == 0:
            return False
    return True

def is_pandigital(str1, n):
    l = list(str1)
    l.sort()
    return ''.join(l) == ''.join([str(i) for i in range(1, n+1)])

def main():
    max1 = 0
    for n in range(9, 0, -1):
        for perm in permutations(''.join([str(i) for i in range(1, n+1)])):
            num1 = int(''.join(perm))
            if is_prime(num1):
                if max1 < num1:
                    max1 = num1
        if max1 != 0:
            break
    print("Answer: ", max1)
    
main()
