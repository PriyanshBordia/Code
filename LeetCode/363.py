class Solution:
    def maxSumSubmatrix(self, matrix: List[List[int]], k: int) -> int:
        ans = -1e6
        m, n = len(matrix), len(matrix[0])        
        for c1 in range(n):
            dp = [matrix[i][c1] for i in range(m)]
            print(c1, dp)
            ans = max(ans, self.prefix_sum(dp, k))
            for c2 in range(c1 + 1, n):
                for r in range(m):
                    dp[r] += matrix[r][c2]
                    if dp[r - 1] + dp[r] < 
                    ans = max(ans, self.prefix_sum(dp, k))    
                # print(c1, c2, dp)
        return ans
    
    def prefix_sum(self, arr, k):
        prefix = deepcopy(arr)
        mx = prefix[0] if prefix[0] <= k else -1e6
        for i in range(1, len(prefix)):
            if prefix[i - 1] + prefix[i] >= 0:
                prefix[i] += prefix[i - 1]
                if mx <= prefix[i] <= k:
                    mx = prefix[i]
        # print(mx, prefix)
        return mx
    
"""
[[3,8,9,1,3],[-4,-1,1,7,-6],[-2,-3,8,1,-1]]
31
"""

"""
[1,0,1]
[0,-2,3]
0 0 [1, 0]
0 1 [1, -2]
0 2 [2, 1]



"""
