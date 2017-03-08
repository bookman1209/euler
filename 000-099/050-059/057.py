# Python version 3.4.3

from fractions import Fraction

def has_more_digit(num1, num2):
    return len(str(num1)) > len(str(num2))

def main():
    convergent = 1
    moredigit = 0
    n = 1
    while n < 1000:
        n += 1
        convergent = 1 + Fraction(1, 1 + convergent)
        if has_more_digit(convergent.numerator, convergent.denominator):
            moredigit += 1
    print("Answer:", moredigit)
    
main()
