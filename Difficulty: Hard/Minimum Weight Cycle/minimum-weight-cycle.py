class Solution:
  def findMinCycle(self, V, edges):
        # code here
        from collections import defaultdict
        from heapq import heappush, heappop
        
        g = defaultdict(list)
        for u, v, w in edges:
            g[u].append((v, w))
            g[v].append((u, w))
        
        INF = float('inf')
        def dijkstra(g, src, target, banned_edge):
            nonlocal INF
            costs = [INF]*V 
            costs[src] = 0
            q = [(0, src)]
            
            while q:
                w0, u0 = heappop(q)
                if u0 == target:
                    return w0
                for v0, w in g.get(u0, []):
                    if sorted([u0, v0]) == sorted(banned_edge):
                        continue
                    if w0 + w < costs[v0]:
                        costs[v0] = w0 + w
                        heappush(q, (w0+w, v0))
            return INF
        
        ans = INF
        for u, v, w in edges:
            ans = min(ans, dijkstra(g, u, v, (u, v))+w)
        return ans
        



#{ 
 # Driver Code Starts
# Initial Template for Python 3
import sys
import heapq

# Position this line where user code will be pasted.


def main():
    t = int(input())
    for _ in range(t):
        V = int(input())
        E = int(input())
        edges = []
        for _ in range(E):
            u, v, w = map(int, input().split())
            edges.append([u, v, w])
            edges.append([v, u, w])  # Since the graph is undirected

        obj = Solution()
        res = obj.findMinCycle(V, edges)

        print(res)


if __name__ == "__main__":
    main()

# } Driver Code Ends