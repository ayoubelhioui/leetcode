class Solution(object):
    def isValid(self, s):
        stack = [];
        for char in s:
            if (char == ']'):
                if (len(stack) == 0 or stack.pop() != '['):
                    return (False);
            elif (char == '}'):
                if (len(stack) == 0 or stack.pop() != '{'):
                    return (False);
            elif (char == ')'):
                if (len(stack) == 0 or stack.pop() != '('):
                    return (False);
            else:
                stack.append(char);
        return (len(stack) == 0);