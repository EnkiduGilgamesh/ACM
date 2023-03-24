Assuming the constraint on the the sum of $n$ over all test cases we might want to simulate the process for each test case. However, we need an $O(n)$ (or other quasilinear complexity) solution.

The key observation is that the sum of all integers from $1$ to $2n$ inclusive is divisible by $n$. Indeed, $\sum^{2n}_{i = 1}=\frac{(2n+1)\cdot 2n}{2}=(2n+1)\cdot n$
.

As the remainders of $x$ of modulo $n$ will repeat after $2n$ steps there is no point in trying values of $x$ for more than $min(2n,p)$.