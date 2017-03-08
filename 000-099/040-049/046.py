# Python version 3.4.3

from __future__ import division
from math import sqrt

# plistTillN: list of prime numbers that are smaller than or equal to n
def is_prime(n, plistTillN):
    if n == 2 or n in plistTillN:
        return True
    if n%2 == 0 or n == 1:
        return False
    for i in plistTillN:
        if n%i == 0:
            return False
    return True

def main():
    plist = [2]
    n = 1
    while True:
        n += 2
        if not is_prime(n, plist):
            find = True
            for i in range(1, int(sqrt((n-3)/2)) + 1):
                if is_prime(n - 2*i*i, plist):
                    find = False
                    break
            if find:
                break
        else:
            plist.append(n)
    print("Answer: ", n)

main()
