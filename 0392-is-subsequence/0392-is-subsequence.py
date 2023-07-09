class Solution(object):
    def isSubsequence(self, s, t):
        if (len(s) == 0):
            return (True);
        sLeft, tLeft, tRight, sRight  = 0, 0, len(t), len(s);
        while sLeft < sRight and tLeft < tRight:
            if (s[sLeft] == t[tLeft]):
                sLeft+=1;
            tLeft+=1;
        print(sLeft, len(s));
        return (sLeft == len(s));

        