# Python version 3.4.3

from math import sqrt

def generate_primes(start, end):
    plist = [2]
    for i in range(3, end, 2):
        for j in plist:
            if i%j == 0 or j > sqrt(i):
                break
        if i%j != 0:
            plist.append(i)
    while plist[0] < start:
        plist.pop(0)
    return plist

def is_perm(num1, num2):
    list1, list2 = list(str(num1)), list(str(num2))
    list1.sort()
    list2.sort()
    return list1 == list2

def main():
    primes = generate_primes(1000, 10000)
    for p in primes:
        if is_perm(p, p+3330) and p+3330 in primes and \
           is_perm(p, p+6660) and p+6660 in primes and \
           p != 1487:
            break

    print("Answer: ", str(p) + str(p+3330) + str(p+6660))

    
main()
