<!--
File: \temp.html
Project: ACM
Created Date: Saturday Feb 4th 2023, 10:49:30 am
Author: Wenren Muyan
Comments: 
--------------------------------------------------------------------------------
Last Modified: 5/02/2023 12:19:38
Modified By: Wenren Muyan
--------------------------------------------------------------------------------
Copyright (c) 2023 - future Wenren Muyan
--------------------------------------------------------------------------------
HISTORY:
Date				By				Comments
--------------------------------------------------------------------------------
-->

<div
  data-v-126cf686=""
  padding="10"
  shadow=""
  id="js-left-ContestProblemDetails"
  class="js-left"
  style="height: auto"
>
  <div data-v-126cf686="" slot="header" class="panel-title">
    <span data-v-126cf686="">Div. 1 Imbalanced Array</span
    ><br data-v-126cf686="" />
    <div data-v-126cf686="" class="problem-tag">
      <span data-v-126cf686=""
        ><div
          role="tooltip"
          id="el-popover-2901"
          aria-hidden="true"
          class="el-popover el-popper"
          tabindex="0"
          style="width: 60px; display: none"
        >
          <!----><span
            data-v-126cf686=""
            class="el-tag el-tag--small el-tag--dark"
            style="
              background-color: rgb(64, 158, 255);
              margin-right: 5px;
              margin-top: 2px;
            "
            >sortings</span
          ><span
            data-v-126cf686=""
            class="el-tag el-tag--small el-tag--dark"
            style="
              background-color: rgb(64, 158, 255);
              margin-right: 5px;
              margin-top: 2px;
            "
            >data structures</span
          ><span
            data-v-126cf686=""
            class="el-tag el-tag--small el-tag--dark"
            style="
              background-color: rgb(64, 158, 255);
              margin-right: 5px;
              margin-top: 2px;
            "
            >divide and conquer</span
          ><span
            data-v-126cf686=""
            class="el-tag el-tag--small el-tag--dark"
            style="
              background-color: rgb(64, 158, 255);
              margin-right: 5px;
              margin-top: 2px;
            "
            >dsu</span
          ><span
            data-v-126cf686=""
            class="el-tag el-tag--small el-tag--dark"
            style="
              background-color: rgb(64, 158, 255);
              margin-right: 5px;
              margin-top: 2px;
            "
            >*1900</span
          >
        </div>
        <span class="el-popover__reference-wrapper"
          ><span
            data-v-126cf686=""
            class="el-tag el-tag--primary el-tag--small el-tag--plain el-popover__reference"
            aria-describedby="el-popover-2901"
            tabindex="0"
            style="cursor: pointer"
            >显示标签</span
          ></span
        ></span
      >
    </div>
    <div data-v-126cf686="" class="problem-menu">
      <!----><span data-v-126cf686=""
        ><a data-v-126cf686="" class="el-link el-link--primary"
          ><!----><span class="el-link--inner"
            ><i
              data-v-126cf686=""
              aria-hidden="true"
              class="fa fa-pie-chart"
            ></i>
            题目统计</span
          ><!----></a
        ></span
      ><span data-v-126cf686=""
        ><a data-v-126cf686="" class="el-link el-link--primary"
          ><!----><span class="el-link--inner"
            ><i data-v-126cf686="" aria-hidden="true" class="fa fa-bars"></i>
            全部提交</span
          ><!----></a
        ></span
      >
    </div>
    <div data-v-126cf686="" class="question-intr">
      <span data-v-126cf686="">时间限制：C/C++ 2000MS，其他语言 4000MS</span
      ><br data-v-126cf686="" /><span data-v-126cf686=""
        >内存限制：C/C++ 256MB，其他语言 512MB</span
      ><br data-v-126cf686="" /><!----><!----><!---->
    </div>
  </div>
  <div data-v-126cf686="" id="problem-content">
    <p data-v-126cf686="" class="title">描述</p>
    <div data-v-126cf686="" class="markdown-body md-content">
      <p>
        You are given an array <span class="tex-span"><i>a</i></span> consisting
        of <span class="tex-span"><i>n</i></span> elements. The
        <span class="tex-font-style-it">imbalance value</span> of some
        subsegment of this array is the difference between the maximum and
        minimum element from this segment. The
        <span class="tex-font-style-it">imbalance value</span> of the array is
        the sum of <span class="tex-font-style-it">imbalance values</span> of
        all subsegments of this array.
      </p>
      <p>
        For example, the
        <span class="tex-font-style-it">imbalance value</span> of array
        <span class="tex-span">[1, 4, 1]</span> is
        <span class="tex-span">9</span>, because there are
        <span class="tex-span">6</span> different subsegments of this array:
      </p>
      <ul>
        <li>
          <span class="tex-span">[1]</span> (from index
          <span class="tex-span">1</span> to index
          <span class="tex-span">1</span>),
          <span class="tex-font-style-it">imbalance value</span> is
          <span class="tex-span">0</span>;
        </li>
        <li>
          <span class="tex-span">[1, 4]</span> (from index
          <span class="tex-span">1</span> to index
          <span class="tex-span">2</span>),
          <span class="tex-font-style-it">imbalance value</span> is
          <span class="tex-span">3</span>;
        </li>
        <li>
          <span class="tex-span">[1, 4, 1]</span> (from index
          <span class="tex-span">1</span> to index
          <span class="tex-span">3</span>),
          <span class="tex-font-style-it">imbalance value</span> is
          <span class="tex-span">3</span>;
        </li>
        <li>
          <span class="tex-span">[4]</span> (from index
          <span class="tex-span">2</span> to index
          <span class="tex-span">2</span>),
          <span class="tex-font-style-it">imbalance value</span> is
          <span class="tex-span">0</span>;
        </li>
        <li>
          <span class="tex-span">[4, 1]</span> (from index
          <span class="tex-span">2</span> to index
          <span class="tex-span">3</span>),
          <span class="tex-font-style-it">imbalance value</span> is
          <span class="tex-span">3</span>;
        </li>
        <li>
          <span class="tex-span">[1]</span> (from index
          <span class="tex-span">3</span> to index
          <span class="tex-span">3</span>),
          <span class="tex-font-style-it">imbalance value</span> is
          <span class="tex-span">0</span>;
        </li>
      </ul>
      <p>
        You have to determine the
        <span class="tex-font-style-it">imbalance value</span> of the array
        <span class="tex-span"><i>a</i></span
        >.
      </p>
    </div>
    <p data-v-126cf686="" class="title">输入描述</p>
    <div data-v-126cf686="" class="markdown-body md-content">
      <p>
        The first line contains one integer
        <span class="tex-span"><i>n</i></span> (<span class="tex-span"
          >1 ≤ <i>n</i> ≤ 10<sup class="upper-index">6</sup></span
        >) — size of the array <span class="tex-span"><i>a</i></span
        >.
      </p>
      <p>
        The second line contains <span class="tex-span"><i>n</i></span> integers
        <span class="tex-span"
          ><i>a</i><sub class="lower-index">1</sub>, <i>a</i
          ><sub class="lower-index">2</sub>... <i>a</i
          ><sub class="lower-index"><i>n</i></sub></span
        >
        (<span class="tex-span"
          >1 ≤ <i>a</i><sub class="lower-index"><i>i</i></sub
          > ≤ 10<sup class="upper-index">6</sup></span
        >) — elements of the array.
      </p>
    </div>
    <p data-v-126cf686="" class="title">输出描述</p>
    <div data-v-126cf686="" class="markdown-body md-content">
      <p>
        Print one integer — the
        <span class="tex-font-style-it">imbalance value</span> of
        <span class="tex-span"><i>a</i></span
        >.
      </p>
    </div>
    <div data-v-126cf686="">
      <div data-v-126cf686="" class="flex-container example">
        <div data-v-126cf686="" class="example-input">
          <p data-v-126cf686="" class="title">
            用例输入 1
            <a data-v-126cf686="" class="copy"
              ><i data-v-126cf686="" class="el-icon-document-copy"></i
            ></a>
          </p>
          <pre data-v-126cf686="">
3
1 4 1</pre
          >
        </div>
        <div data-v-126cf686="" class="example-output">
          <p data-v-126cf686="" class="title">
            用例输出 1
            <a data-v-126cf686="" class="copy"
              ><i data-v-126cf686="" class="el-icon-document-copy"></i
            ></a>
          </p>
          <pre data-v-126cf686="">9</pre>
        </div>
      </div>
    </div>
    <!----><!---->
  </div>
</div>

# Solution

The violent simulation's time complexity is $O(n^3)$ which is not acceptable when $n$ ranges in $\left[1, 10^6\right]$.

We need to take another perspective to look at this problem. For every $a_i$, it can be the maximum number in range $\left(l_{i}, r_{i}\right)$ and be the minimum number in range $\left(l'_{i}, r'_{i}\right)$. Then, if we take the subarray's left end point in $\left(l_{i}, i\right]$, and the right end point in $\left[i, r_{i}\right)$, the subarray's maximum number will be $a_{i}$. There are totally $(i - l_{i}) \cdot (r_{i} - i)$ posibilities. Therefore, the final answer will increase by $a_i  \cdot (i - l_{i}) \cdot (r_{i} - i)$. The same to take $a_{i}$ as the minimum number. The final answer will decrease by $a_i  \cdot (i - l'_{i}) \cdot (r'_{i} - i)$. Notice that the $[i, i]$ situation's imbalanced value is $0$ which is equal to increase by $a_i$ and then decrease by $a_i$.

Now the question comes to how to get the $\left(l_{i}, r_{i}\right)$ and $\left(l'_{i}, r'_{i}\right)$ for every $a_i$. For $l_i$ we can observe that:

* $l_0 = -1$;
* $l_i = l_{j}\ if\ a_i \geq a_{j}\ until \ j = 0 \lor a_i < a_j, j \in [0, i-1]$; otherwise $l_i = i - 1$.
* $r_0 = n$;
* $r_i = r_{j}\ if\ a_i > a_{j}\ until \ j = n-1 \lor a_i \leq a_j, j \in [i + 1, n-1]$; otherwise $r_i = i + 1$.

Notice that there is a difference between $l$ and $r$ when $a_i = a_j$.

It will be very easy to get a array for $l$ through stack. The same to $l'_i$ and $r'_i$. Notice that for $r$ and $r'$, we scan the numbers from index $n$ to $1$.
