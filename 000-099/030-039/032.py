# Python version 3.4.3

"""
Basic Idea: m digit number x n digit number = m+n or m+n-1 digit number
Total digit should be 9, thus m+n = 5 and result number should be 4 digit.
"""

def is_pandigitalSet(num1, num2, num3):
    digits = []
    while num1 != 0:
        digits.append(num1%10)
        num1 //= 10
    while num2 != 0:
        digits.append(num2%10)
        num2 //= 10
    while num3 != 0:
        digits.append(num3%10)
        num3 //= 10
    digits.sort()
    return digits == [1,2,3,4,5,6,7,8,9]
    
def main():
    print("Answer: ", end = '')
    print( sum(set(a*b for a in range(1, 100) for b in range(100, 10000) if is_pandigitalSet(a,b,a*b))) )

main()
