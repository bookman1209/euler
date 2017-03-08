# Python version 3.4.3

"""
Used a very naive approach
Just check for all pairs of two-digit numbers
"""
from fractions import Fraction # for using Fractions

def cancelling(num1, num2):
    if num1%10 == num2%10:
        return [num1//10, num2//10]
    if num1//10 == num2%10:
        return [num1%10, num2//10]
    if num1%10 == num2//10:
        return [num1//10, num2%10]
    if num1//10 == num2//10:
        return [num1%10, num2%10]
    return [0,0]

def main():
    product = 1
    for numer in range(10, 100):
        for denom in range(10, 100):
            if numer < denom: # fraction is less than 1
                if numer % 10 != 0 or denom % 10 != 0: # Non-trivial case
                    cancel = cancelling(numer, denom)
                    if cancel != [0, 0] and cancel[1] != 0:
                        if Fraction(numer, denom) == Fraction(cancel[0], cancel[1]):
                            product *= Fraction(numer, denom)
    print("Answer: ", product.denominator)
    
main()
