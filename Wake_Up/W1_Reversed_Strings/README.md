# Problem

You are given $N$ strings $S_1$, $S_2$, $\ldots$, $S_N$. Print them in this order: 

$S_N$, $S_{N-1}$, $\ldots$, $S_1$.

# Constraints

* $1\leq N \leq 10$.
* $N$ is an integer.
* $S_i$ s a string of length between $1$ and $10$, inclusive, consisting of lowercase English letters, uppercase English letters, and digits.

# Input

```
N
S1
S2
...
SN
```

# Output

```
SN
SN-1
...
S1
```

# Sample

## Input

```
4
Takahashi
Aoki
2023
Snuke
```

## Output

```
Snuke
2023
Aoki
Takahashi
```