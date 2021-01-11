def convertToASCII(code):
    number = 0
    number += int(code[0])*8
    number += int(code[1])*4
    number += int(code[2])*2
    number += int(code[3])*1
    return number + 97

def decode(coded):
    base = ord('a')
    asciiEquivalent = convertToASCII(coded)
    # print(asciiEquivalent)
    return chr(asciiEquivalent)


for _ in range(int(input())):
    # Number of characters in the string
    n = int(input())
    code = input()
    docodedString = ""
    for i in range(0, n, 4):
        toBeDecoded = code[i:i+4]
        # decodedString = decodedString + decode(toBeDecoded)
        print(decode(toBeDecoded), sep='', end='')
    print()