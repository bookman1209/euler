# Python version 3.4.3

from fractions import Fraction

def convergent(convGen, n):
    if n == 1:
        return next(convGen)
    else:
        return next(convGen) + Fraction(1, convergent(convGen, n-1))

def generate_convList():
    yield 2
    i = 1
    while True:
        yield 1
        yield 2*i
        yield 1
        i += 1

def main():
    numer = convergent(generate_convList(), 100).numerator
    sum1 = 0
    while numer != 0:
        sum1 += numer%10
        numer //= 10
    print("Answer:", sum1)

main()
