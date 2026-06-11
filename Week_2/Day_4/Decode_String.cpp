class Solution(object):
    def decodeString(self, s):
        countStack = []
        stringStack = []
        currentString = ""
        k = 0

        for ch in s:
            if ch.isdigit():
                k = k * 10 + int(ch)

            elif ch == '[':
                countStack.append(k)
                stringStack.append(currentString)
                currentString = ""
                k = 0

            elif ch == ']':
                num = countStack.pop()
                prevString = stringStack.pop()
                currentString = prevString + currentString * num

            else:
                currentString += ch

        return currentString
