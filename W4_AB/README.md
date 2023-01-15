# A Create Palindromic

- [A Create Palindromic](#a-create-palindromic)
  - [Problem](#problem)
  - [Input](#input)
  - [Output](#output)
  - [Sample](#sample)
    - [1st Input](#1st-input)
    - [1st Output](#1st-output)
    - [2nd Iput](#2nd-iput)
    - [2nd Output](#2nd-output)
  - [Hint](#hint)
  - [Solution](#solution)
    - [Stage 1](#stage-1)
    - [Stage 2](#stage-2)
- [B Office Key](#b-office-key)
  - [Problem](#problem-1)
  - [Input](#input-1)
  - [Output](#output-1)
  - [Sample](#sample-1)
    - [1st Input](#1st-input-1)
    - [1st Output](#1st-output-1)
    - [2nd Input](#2nd-input)
    - [2nd Output](#2nd-output-1)
  - [Hint](#hint-1)


## Problem

You are given a string $A$. Find a string $B$, where $B$ is a palindrome and $A$ is a subsequence of $B$.

A subsequence of a string is a string that can be derived from it by deleting some (not necessarily consecutive) characters without changing the order of the remaining characters. For example, `cotst` is a subsequence of `contest`.

A palindrome is a string that reads the same forward and backward.

The length of string $B$ should be at most $10^4$. It is guaranteed that there always exists such string.

You do not need to find the shortest answer, the only restriction is that the length of string $B$ should not exceed $10^4$.

## Input

First line contains a string $A$ ($1 \leq \lvert A\rvert \leq 10^3$) consisting of lowercase Latin letters, where $\lvert A\rvert$ is a length of $A$.

## Output

Output single line containing $B$ consisting of only lowercase Latin letters. You do not need to find the shortest answer, the only restriction is that the length of string $B$ should not exceed $10^4$. If there are many possible $B$, print any of them.

## Sample

### 1st Input

```
aba
```

### 1st Output

```
aba
```

### 2nd Iput

```
ab
```

### 2nd Output

```
aabaa
```

## Hint

In the first example, `aba` is a subsequence of `aba` which is a palindrome.

In the second example, `ab` is a subsequence of `aabaa` which is a palindrome.

## Solution

### Stage 1

To create a palindrome, just reverse the string and catenate it at the origin string's tail, so that the origin string is the subsequence of the new string, and the new string is a palindrome.

```cpp
 #include <iostream>

 using namespace std;
 
 int main(){
    string s;
    int i, len;
    cin >> s;
    len = s.length();
    for(i = len - 1; i >= 0; i--) s += s[i];

    cout << s;

    return 0;
}
```

### Stage 2

Actually, if a string's suffix has a palindrome, we can just catenate after the suffix, so that the result could be much shorter in some situations.

Firstly, we need judge if a string is a palindrome and get the longest palindrome suffix of a string.

```cpp
bool isPalin(string s){
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(s[i] == s[len - 1 - i]) continue;
        else return false;
    }

    return true;
}

int suffixIsPalin(string s){
    string suf;
    int len = s.length(), i, res = len - 1;
    for(i = len - 2; i >= 0; i--){
        suf = s.substr(i, len - i);
        if(isPalin(suf)) res = i;
    }

    return res - 1;
}
```

Then we catenate the reversed rest part of the string to the string's tail.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int i, len, begin;
    cin >> s;
    len = s.length();
    begin = suffixIsPalin(s);
    if(begin >= 0)
        for(i = begin; i >= 0; i--) s += s[i];

    cout << s;

    return 0;
}
```

# B Office Key

## Problem

There are $n$ people and $k$ keys on a straight line. Every person wants to get to the office which is located on the line as well. To do that, every person needs to reach a point with a key, takes the key and then goes to the office. Once a key is taken by somebody, it couldn't be taken by anybody else.

You are to determine the minimum time needed for all $n$ people to get to the office with keys. Assume that people move a unit distance per 1 second. If two people reach a key at the same time, only one of them can take the key. A person can pass through a point with a key without taking it.

## Input

The first line contains three integers $n$, $k$ and $p$ ($1 \leq n \leq 1000$, $n \leq k \leq 2000$, $1 \leq p \leq 10^9$) — the number of people, the number of keys and the office location.

The second line contains $n$ distinct integers $a_1$, $a_2$, $\dots$, $a_n$ ($1 \leq a_i \leq 10^9$) — positions in which people are located initially. The positions are given in arbitrary order.

The third line contains $k$ distinct integers $b_1$, $b_2$, $\dots$, $b_k$ ($1 \leq b_j \leq 10^9$) — positions of the keys. The positions are given in arbitrary order.

Note that there can't be more than one person or more than one key in the same point. A person and a key can be located in the same point.

## Output

Print the minimum time (in seconds) needed for all $n$ people to reach the office with keys.

## Sample

### 1st Input

```
2 4 50
20 100
60 10 40 80
```

### 1st Output

```
50
```

### 2nd Input

```
1 2 10
11
15 7
```

### 2nd Output

```
7
```

## Hint

In the first example the person located at point $20$ should take the key located at point $40$ and go with it to the office located at point $50$. He spends $30$ seconds. The person located at point $100$ can take the key located at point $80$ and go to the office with it. He spends $50$ seconds. Thus, after $50$ seconds everybody is in office with keys.