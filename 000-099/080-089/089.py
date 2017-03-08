# Python version 3.4.3

def interpret_roman(roman):
    numeral_dict = {'M': 1000, 'D': 500, 'C': 100, 'L': 50, 'X': 10, 'V': 5, 'I': 1}
    minus_case = ["IV", "IX", "XL", "XC", "CD", "CM"]
    num = 0
    for i in range(len(roman)):
        if roman[i:i+2] in minus_case:
            num -= numeral_dict[roman[i]]
        else:
            num += numeral_dict[roman[i]]
    return num

def roman_num(num):
    roman = 'M' * (num // 1000)
    num %= 1000
    if num // 100 == 9:
        roman += 'CM'
    elif num // 100 == 4:
        roman += 'CD'
    else:
        roman += 'D' * (num // 500)
        num %= 500
        roman += 'C' * (num // 100)
    num %= 100
    if num // 10 == 9:
        roman += 'XC'
    elif num // 10 == 4:
        roman += 'XL'
    else:
        roman += 'L' * (num // 50)
        num %= 50
        roman += 'X' * (num // 10)
    num %= 10
    if num == 9:
        roman += 'IX'
    elif num == 4:
        roman += 'IV'
    else:
        roman += 'V' * (num // 5)
        num %= 5
        roman += 'I' * num
    return roman
    

def main():
    saved = 0
    f = open("089data.txt", 'r')
    for line in f:
        if line[-1] == '\n':
            roman_ini = line[:-1]
        else:
            roman_ini = line[:]
        num = interpret_roman(roman_ini)
        roman_aft = roman_num(num)
        saved += len(roman_ini) - len(roman_aft)
    f.close()
    print("Answer:", saved)

main()
