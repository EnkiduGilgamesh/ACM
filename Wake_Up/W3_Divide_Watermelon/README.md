# Problem

One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed $w$ kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

# Input

The first (and the only) input line contains integer number $w$ ($1 \leq w \leq 100$) — the weight of the watermelon bought by the boys.

# Output

Print `YES`, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and `NO` in the opposite case.

# Sample

## Input

```
8
```

## Output

```
YES
```

## Hint

For example, the boys can divide the watermelon into two parts of $2$ and $6$ kilos respectively (another variant — two parts of $4$ and $4$ kilos).

# Solution

A direct solution is enumerating all the situations that the weight can be divided into two parts and see if there is a result contains two even numbers.
However, it is costly. Just think in reverse, if two even numbers are added up, what characteristics the result would have?
Yes, the result is also an even number. So we just need to judge if the weight is even number, then we can know if it can be divided into two even numbers. But notice that there is an exception which $2$ is an even number but it cannot be divided into two even numbers. So the least condition is that the weight is an even number and it should be larger than $2$.

```cpp
#include <iostream>

using namespace std;

int main(){
    int w;
    cin >> w;

    if(!(w % 2) && w > 2) cout << "YES";
    else cout << "NO";

    return 0;
}
```