# Python version 3.4.3

"""
nC(r+1) = nCr * (n-r)/(r+1)
"""

def main():
    count = 0
    for n in range(23, 101):
        count_n = 0
        combination = 1 # Case when r == 0
        for r in range(n//2):
            combination = (combination * (n-r))//(r+1)
            if combination > 1000000:
                count_n += 1
        if n%2 == 0 and combination > 1000000:
            count += count_n * 2 - 1
        elif n%2 == 1:
            count += count_n * 2
    print("Answer:", count)

main()
