# Python version 3.4.3

"""
Used very naive approach
Since n > 1, at least x and 2x must be concatenated.
From this, x should be at most 4 digit number
(Result of concatenation should be 9 digit)
"""

def is_pandigital(str1):
    l = list(str1)
    l.sort()
    return ''.join(l) == "123456789"

def main():
    max1 = 0
    for i in range(1, 10000):
        mul = 1
        str1 = ''
        while len(str1) < 9:
            str1 = str1 + str(i*mul)
            mul += 1
        if is_pandigital(str1) and int(str1) > max1:
            max1 = int(str1)
    print("Answer: ", max1)

main()
