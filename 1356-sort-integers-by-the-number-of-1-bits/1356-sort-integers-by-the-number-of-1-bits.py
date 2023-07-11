import sortedcontainers;
class Solution(object):
    def sortByBits(self, arr):
        result = [];
        for index, num in enumerate(arr):
            binaryRep = bin(num);
            setBitCount = binaryRep.count('1');
            heapq.heappush(result, (setBitCount, num));
        i = 0;
        for _ in range(len(result)):
            item = heapq.heappop(result);
            arr[i] = item[1];
            i+=1;
        return (arr);
            