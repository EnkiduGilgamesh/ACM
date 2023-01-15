- [A Magic Table --](#a-magic-table---)
  - [Problem](#problem)
  - [Input](#input)
  - [Output](#output)
  - [Sample](#sample)
    - [1st Input](#1st-input)
    - [1st Output](#1st-output)
    - [2nd Input](#2nd-input)
    - [2nd Output](#2nd-output)
  - [Hint](#hint)
- [B Complex Market Analysis --CF 1609C](#b-complex-market-analysis---cf-1609c)
  - [Problem](#problem-1)
  - [Input](#input-1)
  - [Output](#output-1)
  - [Sample](#sample-1)
    - [1st Input](#1st-input-1)
    - [1st Output](#1st-output-1)
  - [Hint](#hint-1)


# A Magic Table -- 

## Problem

He loves tables that consist of n rows and n columns very much. He especially loves magic tables. A table is magic to Him if the sum of elements in each row and column of the table equals $k$.

Your task is to help him to find at least one of them.

## Input

The single line contains two integers, $n$ and $k$ ($1 \leq n \leq 100$, $1 \leq k \leq 1000$).

## Output

Print any magic table. He doesn't like too big numbers, so all elements of the table mustn't exceed $1000$ in their absolute value.

If there are multiple suitable tables, you are allowed to print any of them.

## Sample

### 1st Input

```
2 4
```

### 1st Output

```
1 3
3 1
```

### 2nd Input

```
4 7
```

### 2nd Output

```
2 1 0 4
4 0 2 1
1 3 3 0
0 3 2 2
```

## Hint

In the first sample the sum in the first row is $1 + 3 = 4$, in the second row — $3 + 1 = 4$, in the first column — $1 + 3 = 4$ and in the second column — $3 + 1 = 4$. There are other magic tables for this sample.

In the second sample the sum of elements in each row and each column equals $7$. Besides, there are other tables that meet the statement requirements.

# B Complex Market Analysis --CF 1609C

## Problem

While performing complex market analysis William encountered the following problem:

For a given array $a$ of size $n$ and a natural number $e$, calculate the number of pairs of natural numbers $(i,k)$ which satisfy the following conditions:

* $1\leq i,k$.
* $i+e⋅k\leq n$.
* Product $a_i\cdot a_{i+e}\cdot a _{i+2\cdot e}\cdot \dots \cdot a_{i+k⋅e}$ is a prime number.

A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers.

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1\leq t \leq 10000$). Description of the test cases follows.

The first line of each test case contains two integers $n$ and $e$ ($1\leq e \leq n\leq 2\cdot 10^5$), the number of items in the array and number $e$, respectively.

The second line contains $n$ integers $a_1$, $a_2$, $\dots$, $a_n$ ($1\leq a_i\leq 10^6$), the contents of the array.

It is guaranteed that the sum of n over all test cases does not exceed $2\cdot 10^5$.

## Output

For each test case output the answer in the following format:

Output one line containing the number of pairs of numbers $(i,k)$ which satisfy the conditions.

## Sample

### 1st Input

```
6
7 3
10 2 1 3 1 19 3
3 2
1 13 1
9 3
2 4 2 1 1 1 1 4 2
3 1
1 1 1
4 1
1 2 1 1
2 2
1 2
```

### 1st Output

```
2
0
4
0
5
0
```

## Hint

In the first example test case two pairs satisfy the conditions:

1. $i=2$, $k=1$, for which the product is: $a_2\cdot a_5=2$ which is a prime number.
2. $i=3$, $k=1$, for which the product is: $a_3\cdot a_6=19$ which is a prime number.

In the second example test case there are no pairs that satisfy the conditions.

In the third example test case four pairs satisfy the conditions:

1. $i=1$, $k=1$, for which the product is: $a_1\cdot a_4=2$ which is a prime number.
2. $i=1$, $k=2$, for which the product is: $a_1​\cdot a_4\cdot a_7=2$ which is a prime number.
3. $i=3$, $k=1$, for which the product is: $a_3\cdot a_6=2$ which is a prime number.
4. $i=6$, $k=1$, for which the product is: $a_6\cdot a_9=2$ which is a prime number.

In the fourth example test case there are no pairs that satisfy the conditions.

In the fifth example test case five pairs satisfy the conditions:

1. $i=1$, $k=1$, for which the product is: $a_1\cdot a_2=2$ which is a prime number.
2. $i=1$, $k=2$, for which the product is: $a_1\cdot a_2\cdot a_3=2$ which is a prime number.
3. $i=1$, $k=3$, for which the product is: $a_1\cdot a_2\cdot a_3\cdot a_4=2$ which is a prime number.
4. $i=2$, $k=1$, for which the product is: $a_2​\cdot a_3​=2$ which is a prime number.
5. $i=2$, $k=2$, for which the product is: $a_2\cdot a_3\cdot a_4=2$ which is a prime number.

In the sixth example test case there are no pairs that satisfy the conditions.