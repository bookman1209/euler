# Python version 3.4.3

from itertools import permutations

def main():
    sum1 = 0
    for tup1 in permutations("0123456789"):
        if tup1[0] == '0': continue
        str1 = ''.join(tup1)
        if int(str1[1:4]) % 2 == 0 and \
        int(str1[2:5]) % 3 == 0 and \
        int(str1[3:6]) % 5 == 0 and \
        int(str1[4:7]) % 7 == 0 and \
        int(str1[5:8]) % 11 == 0 and \
        int(str1[6:9]) % 13 == 0 and \
        int(str1[7:10]) % 17 == 0:
            sum1 += int(str1)
    print("Answer: ", sum1)

main()
