All submissions for this problem are available.You are given a bipartite graph G=(U,V,E), and an integer K. U and V are the two bipartitions
of the graph such that |U| = |V| = N , and E is the edge set. The vertices of U are {1,2,...,N } and that of V are {N+1,N+2,...,2N }. You 
need to find out whether the total number of different perfect matchings in G is strictly greater than K or not.

Recall that a perfect matching is a subset of E

such that every vertex of the graph belongs to exactly one edge in the subset. Two perfect matchings are considered to be different even 
if one edge is different.

Input:
First line of the input contains three integers: N, M and K, which represent |U| (which is also equal to |V|), |E| and the queried 
threshold respectively. The i-th of the next E lines contains two numbers Li and Ri which denote the i-th edge is between the vertices
Li and Ri

Output:
A single line containing “Yes” if the number of perfect matchings is greater than K
, and “No” othewise. 


Sample Input 1

3 5 2
1 4
2 6
2 5
3 5
3 6

Sample Output 1

No

Sample Input 2

3 5 1
1 4
2 6
2 5
3 5
3 6

Sample Output 2

Yes

