class Solution(object):
    def fillStack(self, stack, string):
        for char in string:
            if (char == '#'):
                if (len(stack) > 0):
                    stack.pop();
            else:
                stack.append(char);
    def backspaceCompare(self, s, t):
        firstStack = [];
        secondStack = [];
        self.fillStack(firstStack, s);
        self.fillStack(secondStack, t);
        return (firstStack == secondStack);
        
                
        