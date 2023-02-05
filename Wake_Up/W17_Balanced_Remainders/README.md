<!--
File: \temp.html
Project: ACM
Created Date: Saturday Feb 4th 2023, 10:49:30 am
Author: Wenren Muyan
Comments: 
--------------------------------------------------------------------------------
Last Modified: 4/02/2023 10:49:35
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
    <span data-v-126cf686="">Balanced Remainders</span
    ><br data-v-126cf686="" /><span data-v-126cf686=""
      ><span data-v-126cf686="" class="el-tag el-tag--small el-tag--plain"
        >比赛题目</span
      ></span
    >
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
        You are given a number
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>n</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >n</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">n</span></span
              ></span
            ></span
          ></span
        >
        (<span class="tex-font-style-bf"
          >divisible by
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow><mn>3</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >3</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">3</span></span
                ></span
              ></span
            ></span
          ></span
        >) and an array
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><mi>a</mi><mo stretchy="false">[</mo><mn>1</mn><mo>…</mo
                    ><mi>n</mi><mo stretchy="false">]</mo></mrow
                  ><annotation encoding="application/x-tex"
                    >a[1 \dots n]</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 1em; vertical-align: -0.25em"
                ></span
                ><span class="mord mathnormal">a</span
                ><span class="mopen">[</span><span class="mord">1</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="minner">…</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mord mathnormal">n</span
                ><span class="mclose">]</span></span
              ></span
            ></span
          ></span
        >. In one move, you can increase any of the array elements by one.
        Formally, you choose the index
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>i</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >i</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.65952em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">i</span></span
              ></span
            ></span
          ></span
        >
        (<span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><mn>1</mn><mo>≤</mo><mi>i</mi><mo>≤</mo><mi>n</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >1 \le i \le n</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.78041em; vertical-align: -0.13597em"
                ></span
                ><span class="mord">1</span
                ><span class="mspace" style="margin-right: 0.277778em"></span
                ><span class="mrel">≤</span
                ><span
                  class="mspace"
                  style="margin-right: 0.277778em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.79549em; vertical-align: -0.13597em"
                ></span
                ><span class="mord mathnormal">i</span
                ><span class="mspace" style="margin-right: 0.277778em"></span
                ><span class="mrel">≤</span
                ><span
                  class="mspace"
                  style="margin-right: 0.277778em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">n</span></span
              ></span
            ></span
          ></span
        >) and <span class="tex-font-style-bf">replace</span>
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><msub><mi>a</mi><mi>i</mi></msub></mrow
                  ><annotation encoding="application/x-tex"
                    >a_i</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.58056em; vertical-align: -0.15em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">a</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.311664em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: 0em;
                              margin-right: 0.05em;
                            "
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mathnormal mtight"
                                >i</span
                              ></span
                            ></span
                          ></span
                        ><span class="vlist-s">​</span></span
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.15em"
                          ><span
                            class=""
                          ></span></span></span></span></span></span></span></span></span
        ></span>
        with
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><msub><mi>a</mi><mi>i</mi></msub
                    ><mo>+</mo><mn>1</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >a_i + 1</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.73333em; vertical-align: -0.15em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">a</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.311664em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: 0em;
                              margin-right: 0.05em;
                            "
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mathnormal mtight"
                                >i</span
                              ></span
                            ></span
                          ></span
                        ><span class="vlist-s">​</span></span
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.15em"
                          ><span
                            class=""
                          ></span></span></span></span></span></span
                ><span class="mspace" style="margin-right: 0.222222em"></span
                ><span class="mbin">+</span
                ><span
                  class="mspace"
                  style="margin-right: 0.222222em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.64444em; vertical-align: 0em"
                ></span
                ><span class="mord">1</span></span
              ></span
            ></span
          ></span
        >. You can choose the same index
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>i</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >i</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.65952em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">i</span></span
              ></span
            ></span
          ></span
        >
        multiple times for different moves.
      </p>
      <p>
        Let's denote by
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><msub><mi>c</mi><mn>0</mn></msub></mrow
                  ><annotation encoding="application/x-tex"
                    >c_0</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.58056em; vertical-align: -0.15em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">c</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.301108em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: 0em;
                              margin-right: 0.05em;
                            "
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mtight">0</span></span
                            ></span
                          ></span
                        ><span class="vlist-s">​</span></span
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.15em"
                          ><span
                            class=""
                          ></span></span></span></span></span></span></span></span></span></span
        >,
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><msub><mi>c</mi><mn>1</mn></msub></mrow
                  ><annotation encoding="application/x-tex"
                    >c_1</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.58056em; vertical-align: -0.15em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">c</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.301108em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: 0em;
                              margin-right: 0.05em;
                            "
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mtight">1</span></span
                            ></span
                          ></span
                        ><span class="vlist-s">​</span></span
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.15em"
                          ><span
                            class=""
                          ></span></span></span></span></span></span></span></span></span
        ></span>
        and
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><msub><mi>c</mi><mn>2</mn></msub></mrow
                  ><annotation encoding="application/x-tex"
                    >c_2</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.58056em; vertical-align: -0.15em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">c</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.301108em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: 0em;
                              margin-right: 0.05em;
                            "
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mtight">2</span></span
                            ></span
                          ></span
                        ><span class="vlist-s">​</span></span
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.15em"
                          ><span
                            class=""
                          ></span></span></span></span></span></span></span></span></span
        ></span>
        the number of numbers from the array
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>a</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >a</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">a</span></span
              ></span
            ></span
          ></span
        >
        that have remainders
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mn>0</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >0</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.64444em; vertical-align: 0em"
                ></span
                ><span class="mord">0</span></span
              ></span
            ></span
          ></span
        >,
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mn>1</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >1</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.64444em; vertical-align: 0em"
                ></span
                ><span class="mord">1</span></span
              ></span
            ></span
          ></span
        >
        and
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mn>2</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >2</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.64444em; vertical-align: 0em"
                ></span
                ><span class="mord">2</span></span
              ></span
            ></span
          ></span
        >
        when divided by the number
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mn>3</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >3</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.64444em; vertical-align: 0em"
                ></span
                ><span class="mord">3</span></span
              ></span
            ></span
          ></span
        >, respectively. Let's say that the array
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>a</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >a</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">a</span></span
              ></span
            ></span
          ></span
        >
        has balanced remainders if
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><msub><mi>c</mi><mn>0</mn></msub></mrow
                  ><annotation encoding="application/x-tex"
                    >c_0</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.58056em; vertical-align: -0.15em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">c</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.301108em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: 0em;
                              margin-right: 0.05em;
                            "
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mtight">0</span></span
                            ></span
                          ></span
                        ><span class="vlist-s">​</span></span
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.15em"
                          ><span
                            class=""
                          ></span></span></span></span></span></span></span></span></span></span
        >,
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><msub><mi>c</mi><mn>1</mn></msub></mrow
                  ><annotation encoding="application/x-tex"
                    >c_1</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.58056em; vertical-align: -0.15em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">c</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.301108em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: 0em;
                              margin-right: 0.05em;
                            "
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mtight">1</span></span
                            ></span
                          ></span
                        ><span class="vlist-s">​</span></span
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.15em"
                          ><span
                            class=""
                          ></span></span></span></span></span></span></span></span></span
        ></span>
        and
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><msub><mi>c</mi><mn>2</mn></msub></mrow
                  ><annotation encoding="application/x-tex"
                    >c_2</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.58056em; vertical-align: -0.15em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">c</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.301108em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: 0em;
                              margin-right: 0.05em;
                            "
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mtight">2</span></span
                            ></span
                          ></span
                        ><span class="vlist-s">​</span></span
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.15em"
                          ><span
                            class=""
                          ></span></span></span></span></span></span></span></span></span
        ></span>
        are equal.
      </p>
      <p>
        For example, if
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>n</mi><mo>=</mo><mn>6</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >n = 6</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">n</span
                ><span class="mspace" style="margin-right: 0.277778em"></span
                ><span class="mrel">=</span
                ><span
                  class="mspace"
                  style="margin-right: 0.277778em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.64444em; vertical-align: 0em"
                ></span
                ><span class="mord">6</span></span
              ></span
            ></span
          ></span
        >
        and
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><mi>a</mi><mo>=</mo><mo stretchy="false">[</mo><mn>0</mn
                    ><mo separator="true">,</mo><mn>2</mn
                    ><mo separator="true">,</mo><mn>5</mn
                    ><mo separator="true">,</mo><mn>5</mn
                    ><mo separator="true">,</mo><mn>4</mn
                    ><mo separator="true">,</mo><mn>8</mn
                    ><mo stretchy="false">]</mo></mrow
                  ><annotation encoding="application/x-tex"
                    >a = [0, 2, 5, 5, 4, 8]</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">a</span
                ><span class="mspace" style="margin-right: 0.277778em"></span
                ><span class="mrel">=</span
                ><span
                  class="mspace"
                  style="margin-right: 0.277778em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 1em; vertical-align: -0.25em"
                ></span
                ><span class="mopen">[</span><span class="mord">0</span
                ><span class="mpunct">,</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mord">2</span><span class="mpunct">,</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mord">5</span><span class="mpunct">,</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mord">5</span><span class="mpunct">,</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mord">4</span><span class="mpunct">,</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mord">8</span><span class="mclose">]</span></span
              ></span
            ></span
          ></span
        >, then the following sequence of moves is possible:
      </p>
      <ul>
        <li>
          initially
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>c</mi><mn>0</mn></msub
                      ><mo>=</mo><mn>1</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >c_0 = 1</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">c</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">0</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">1</span></span
                ></span
              ></span
            ></span
          >,
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>c</mi><mn>1</mn></msub
                      ><mo>=</mo><mn>1</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >c_1 = 1</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">c</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">1</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">1</span></span
                ></span
              ></span
            ></span
          >
          and
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>c</mi><mn>2</mn></msub
                      ><mo>=</mo><mn>4</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >c_2 = 4</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">c</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">2</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">4</span></span
                ></span
              ></span
            ></span
          >, these values are not equal to each other. Let's increase
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>a</mi><mn>3</mn></msub></mrow
                    ><annotation encoding="application/x-tex"
                      >a_3</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">a</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">3</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span></span></span></span></span
          >, now the array
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><mi>a</mi><mo>=</mo><mo stretchy="false">[</mo><mn>0</mn
                      ><mo separator="true">,</mo><mn>2</mn
                      ><mo separator="true">,</mo><mn>6</mn
                      ><mo separator="true">,</mo><mn>5</mn
                      ><mo separator="true">,</mo><mn>4</mn
                      ><mo separator="true">,</mo><mn>8</mn
                      ><mo stretchy="false">]</mo></mrow
                    ><annotation encoding="application/x-tex"
                      >a = [0, 2, 6, 5, 4, 8]</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.43056em; vertical-align: 0em"
                  ></span
                  ><span class="mord mathnormal">a</span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 1em; vertical-align: -0.25em"
                  ></span
                  ><span class="mopen">[</span><span class="mord">0</span
                  ><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">2</span><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">6</span><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">5</span><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">4</span><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">8</span
                  ><span class="mclose">]</span></span
                ></span
              ></span
            ></span
          >;
        </li>
        <li>
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>c</mi><mn>0</mn></msub
                      ><mo>=</mo><mn>2</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >c_0 = 2</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">c</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">0</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">2</span></span
                ></span
              ></span
            ></span
          >,
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>c</mi><mn>1</mn></msub
                      ><mo>=</mo><mn>1</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >c_1 = 1</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">c</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">1</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">1</span></span
                ></span
              ></span
            ></span
          >
          and
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>c</mi><mn>2</mn></msub
                      ><mo>=</mo><mn>3</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >c_2 = 3</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">c</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">2</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">3</span></span
                ></span
              ></span
            ></span
          >, these values are not equal. Let's increase
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>a</mi><mn>6</mn></msub></mrow
                    ><annotation encoding="application/x-tex"
                      >a_6</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">a</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">6</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span></span></span></span></span
          >, now the array
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><mi>a</mi><mo>=</mo><mo stretchy="false">[</mo><mn>0</mn
                      ><mo separator="true">,</mo><mn>2</mn
                      ><mo separator="true">,</mo><mn>6</mn
                      ><mo separator="true">,</mo><mn>5</mn
                      ><mo separator="true">,</mo><mn>4</mn
                      ><mo separator="true">,</mo><mn>9</mn
                      ><mo stretchy="false">]</mo></mrow
                    ><annotation encoding="application/x-tex"
                      >a = [0, 2, 6, 5, 4, 9]</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.43056em; vertical-align: 0em"
                  ></span
                  ><span class="mord mathnormal">a</span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 1em; vertical-align: -0.25em"
                  ></span
                  ><span class="mopen">[</span><span class="mord">0</span
                  ><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">2</span><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">6</span><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">5</span><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">4</span><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">9</span
                  ><span class="mclose">]</span></span
                ></span
              ></span
            ></span
          >;
        </li>
        <li>
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>c</mi><mn>0</mn></msub
                      ><mo>=</mo><mn>3</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >c_0 = 3</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">c</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">0</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">3</span></span
                ></span
              ></span
            ></span
          >,
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>c</mi><mn>1</mn></msub
                      ><mo>=</mo><mn>1</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >c_1 = 1</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">c</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">1</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">1</span></span
                ></span
              ></span
            ></span
          >
          and
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>c</mi><mn>2</mn></msub
                      ><mo>=</mo><mn>2</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >c_2 = 2</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">c</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">2</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">2</span></span
                ></span
              ></span
            ></span
          >, these values are not equal. Let's increase
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>a</mi><mn>1</mn></msub></mrow
                    ><annotation encoding="application/x-tex"
                      >a_1</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">a</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">1</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span></span></span></span></span
          >, now the array
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><mi>a</mi><mo>=</mo><mo stretchy="false">[</mo><mn>1</mn
                      ><mo separator="true">,</mo><mn>2</mn
                      ><mo separator="true">,</mo><mn>6</mn
                      ><mo separator="true">,</mo><mn>5</mn
                      ><mo separator="true">,</mo><mn>4</mn
                      ><mo separator="true">,</mo><mn>9</mn
                      ><mo stretchy="false">]</mo></mrow
                    ><annotation encoding="application/x-tex"
                      >a = [1, 2, 6, 5, 4, 9]</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.43056em; vertical-align: 0em"
                  ></span
                  ><span class="mord mathnormal">a</span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 1em; vertical-align: -0.25em"
                  ></span
                  ><span class="mopen">[</span><span class="mord">1</span
                  ><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">2</span><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">6</span><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">5</span><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">4</span><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord">9</span
                  ><span class="mclose">]</span></span
                ></span
              ></span
            ></span
          >;
        </li>
        <li>
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>c</mi><mn>0</mn></msub
                      ><mo>=</mo><mn>2</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >c_0 = 2</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">c</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">0</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">2</span></span
                ></span
              ></span
            ></span
          >,
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>c</mi><mn>1</mn></msub
                      ><mo>=</mo><mn>2</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >c_1 = 2</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">c</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">1</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">2</span></span
                ></span
              ></span
            ></span
          >
          and
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>c</mi><mn>2</mn></msub
                      ><mo>=</mo><mn>2</mn></mrow
                    ><annotation encoding="application/x-tex"
                      >c_2 = 2</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.58056em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">c</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.301108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight">2</span></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.15em"
                            ><span
                              class=""
                            ></span></span></span></span></span></span
                  ><span class="mspace" style="margin-right: 0.277778em"></span
                  ><span class="mrel">=</span
                  ><span
                    class="mspace"
                    style="margin-right: 0.277778em"
                  ></span></span
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.64444em; vertical-align: 0em"
                  ></span
                  ><span class="mord">2</span></span
                ></span
              ></span
            ></span
          >, these values are equal to each other, which means that the array
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow><mi>a</mi></mrow
                    ><annotation encoding="application/x-tex"
                      >a</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.43056em; vertical-align: 0em"
                  ></span
                  ><span class="mord mathnormal">a</span></span
                ></span
              ></span
            ></span
          >
          has balanced remainders.
        </li>
      </ul>
      <p>
        Find the minimum number of moves needed to make the array
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>a</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >a</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">a</span></span
              ></span
            ></span
          ></span
        >
        have balanced remainders.
      </p>
    </div>
    <p data-v-126cf686="" class="title">输入描述</p>
    <div data-v-126cf686="" class="markdown-body md-content">
      <p>
        The first line contains one integer
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>t</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >t</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.61508em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">t</span></span
              ></span
            ></span
          ></span
        >
        (<span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><mn>1</mn><mo>≤</mo><mi>t</mi><mo>≤</mo><mn>1</mn
                    ><msup><mn>0</mn><mn>4</mn></msup></mrow
                  ><annotation encoding="application/x-tex"
                    >1 \le t \le 10^4</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.78041em; vertical-align: -0.13597em"
                ></span
                ><span class="mord">1</span
                ><span class="mspace" style="margin-right: 0.277778em"></span
                ><span class="mrel">≤</span
                ><span
                  class="mspace"
                  style="margin-right: 0.277778em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.77194em; vertical-align: -0.13597em"
                ></span
                ><span class="mord mathnormal">t</span
                ><span class="mspace" style="margin-right: 0.277778em"></span
                ><span class="mrel">≤</span
                ><span
                  class="mspace"
                  style="margin-right: 0.277778em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.814108em; vertical-align: 0em"
                ></span
                ><span class="mord">1</span
                ><span class="mord"
                  ><span class="mord">0</span
                  ><span class="msupsub"
                    ><span class="vlist-t"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.814108em"
                          ><span
                            class=""
                            style="top: -3.063em; margin-right: 0.05em"
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mtight">4</span></span
                            ></span
                          ></span
                        ></span
                      ></span
                    ></span
                  ></span
                ></span
              ></span
            ></span
          ></span
        >). Then
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>t</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >t</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.61508em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">t</span></span
              ></span
            ></span
          ></span
        >
        test cases follow.
      </p>
      <p>
        The first line of each test case contains one integer
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>n</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >n</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">n</span></span
              ></span
            ></span
          ></span
        >
        (<span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><mn>3</mn><mo>≤</mo><mi>n</mi><mo>≤</mo><mn>3</mn><mo>⋅</mo
                    ><mn>1</mn><msup><mn>0</mn><mn>4</mn></msup></mrow
                  ><annotation encoding="application/x-tex"
                    >3 \le n \le 3 \cdot 10^4</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.78041em; vertical-align: -0.13597em"
                ></span
                ><span class="mord">3</span
                ><span class="mspace" style="margin-right: 0.277778em"></span
                ><span class="mrel">≤</span
                ><span
                  class="mspace"
                  style="margin-right: 0.277778em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.77194em; vertical-align: -0.13597em"
                ></span
                ><span class="mord mathnormal">n</span
                ><span class="mspace" style="margin-right: 0.277778em"></span
                ><span class="mrel">≤</span
                ><span
                  class="mspace"
                  style="margin-right: 0.277778em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.64444em; vertical-align: 0em"
                ></span
                ><span class="mord">3</span
                ><span class="mspace" style="margin-right: 0.222222em"></span
                ><span class="mbin">⋅</span
                ><span
                  class="mspace"
                  style="margin-right: 0.222222em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.814108em; vertical-align: 0em"
                ></span
                ><span class="mord">1</span
                ><span class="mord"
                  ><span class="mord">0</span
                  ><span class="msupsub"
                    ><span class="vlist-t"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.814108em"
                          ><span
                            class=""
                            style="top: -3.063em; margin-right: 0.05em"
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mtight">4</span></span
                            ></span
                          ></span
                        ></span
                      ></span
                    ></span
                  ></span
                ></span
              ></span
            ></span
          ></span
        >)&nbsp;— the length of the array
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>a</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >a</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">a</span></span
              ></span
            ></span
          ></span
        >. It is guaranteed that the number
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>n</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >n</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">n</span></span
              ></span
            ></span
          ></span
        >
        is divisible by
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mn>3</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >3</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.64444em; vertical-align: 0em"
                ></span
                ><span class="mord">3</span></span
              ></span
            ></span
          ></span
        >.
      </p>
      <p>
        The next line contains
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>n</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >n</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">n</span></span
              ></span
            ></span
          ></span
        >
        integers
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><msub><mi>a</mi><mn>1</mn></msub
                    ><mo separator="true">,</mo><msub><mi>a</mi><mn>2</mn></msub
                    ><mo separator="true">,</mo><mo>…</mo
                    ><mo separator="true">,</mo
                    ><msub><mi>a</mi><mi>n</mi></msub></mrow
                  ><annotation encoding="application/x-tex"
                    >a_1, a_2, \ldots, a_n</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.625em; vertical-align: -0.19444em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">a</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.301108em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: 0em;
                              margin-right: 0.05em;
                            "
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mtight">1</span></span
                            ></span
                          ></span
                        ><span class="vlist-s">​</span></span
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.15em"
                          ><span
                            class=""
                          ></span></span></span></span></span></span
                ><span class="mpunct">,</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mord"
                  ><span class="mord mathnormal">a</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.301108em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: 0em;
                              margin-right: 0.05em;
                            "
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mtight">2</span></span
                            ></span
                          ></span
                        ><span class="vlist-s">​</span></span
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.15em"
                          ><span
                            class=""
                          ></span></span></span></span></span></span
                ><span class="mpunct">,</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="minner">…</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mpunct">,</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mord"
                  ><span class="mord mathnormal">a</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.151392em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: 0em;
                              margin-right: 0.05em;
                            "
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mathnormal mtight"
                                >n</span
                              ></span
                            ></span
                          ></span
                        ><span class="vlist-s">​</span></span
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.15em"
                          ><span
                            class=""
                          ></span></span></span></span></span></span></span></span></span
        ></span>
        (<span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><mn>0</mn><mo>≤</mo><msub><mi>a</mi><mi>i</mi></msub
                    ><mo>≤</mo><mn>100</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >0 \leq a_i \leq 100</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.78041em; vertical-align: -0.13597em"
                ></span
                ><span class="mord">0</span
                ><span class="mspace" style="margin-right: 0.277778em"></span
                ><span class="mrel">≤</span
                ><span
                  class="mspace"
                  style="margin-right: 0.277778em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.78597em; vertical-align: -0.15em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">a</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.311664em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: 0em;
                              margin-right: 0.05em;
                            "
                            ><span class="pstrut" style="height: 2.7em"></span
                            ><span class="sizing reset-size6 size3 mtight"
                              ><span class="mord mathnormal mtight"
                                >i</span
                              ></span
                            ></span
                          ></span
                        ><span class="vlist-s">​</span></span
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.15em"
                          ><span
                            class=""
                          ></span></span></span></span></span></span
                ><span class="mspace" style="margin-right: 0.277778em"></span
                ><span class="mrel">≤</span
                ><span
                  class="mspace"
                  style="margin-right: 0.277778em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.64444em; vertical-align: 0em"
                ></span
                ><span class="mord">1</span><span class="mord">0</span
                ><span class="mord">0</span></span
              ></span
            ></span
          ></span
        >).
      </p>
      <p>
        It is guaranteed that the sum of
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>n</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >n</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">n</span></span
              ></span
            ></span
          ></span
        >
        over all test cases does not exceed
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mn>150</mn> <mn>000</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >150\,000</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.64444em; vertical-align: 0em"
                ></span
                ><span class="mord">1</span><span class="mord">5</span
                ><span class="mord">0</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mord">0</span><span class="mord">0</span
                ><span class="mord">0</span></span
              ></span
            ></span
          ></span
        >.
      </p>
    </div>
    <p data-v-126cf686="" class="title">输出描述</p>
    <div data-v-126cf686="" class="markdown-body md-content">
      <p>
        For each test case, output one integer&nbsp;— the minimum number of
        moves that must be made for the
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>a</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >a</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">a</span></span
              ></span
            ></span
          ></span
        >
        array to make it have balanced remainders.
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
4
6
0 2 5 5 4 8
6
2 0 2 1 0 0
9
7 1 3 4 2 10 3 9 6
6
0 1 2 3 4 5</pre
          >
        </div>
        <div data-v-126cf686="" class="example-output">
          <p data-v-126cf686="" class="title">
            用例输出 1
            <a data-v-126cf686="" class="copy"
              ><i data-v-126cf686="" class="el-icon-document-copy"></i
            ></a>
          </p>
          <pre data-v-126cf686="">
3
1
3
0</pre
          >
        </div>
      </div>
    </div>
    <p data-v-126cf686="" class="title">提示</p>
    <div data-v-126cf686="" class="el-card is-always-shadow" dis-hover="">
      <!---->
      <div class="el-card__body">
        <div data-v-126cf686="" class="markdown-body hint-content">
          <p>The first test case is explained in the statements.</p>
          <p>
            In the second test case, you need to make one move for
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow><mi>i</mi><mo>=</mo><mn>2</mn></mrow
                      ><annotation encoding="application/x-tex"
                        >i=2</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.65952em; vertical-align: 0em"
                    ></span
                    ><span class="mord mathnormal">i</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.277778em"
                    ></span
                    ><span class="mrel">=</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.277778em"
                    ></span></span
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.64444em; vertical-align: 0em"
                    ></span
                    ><span class="mord">2</span></span
                  ></span
                ></span
              ></span
            >.
          </p>
          <p>The third test case you need to make three moves:</p>
          <ul>
            <li>
              the first move:
              <span
                ><span class="katex"
                  ><span class="katex-mathml"
                    ><math xmlns="http://www.w3.org/1998/Math/MathML"
                      ><semantics
                        ><mrow><mi>i</mi><mo>=</mo><mn>9</mn></mrow
                        ><annotation encoding="application/x-tex"
                          >i=9</annotation
                        ></semantics
                      ></math
                    ></span
                  ><span class="katex-html" aria-hidden="true"
                    ><span class="base"
                      ><span
                        class="strut"
                        style="height: 0.65952em; vertical-align: 0em"
                      ></span
                      ><span class="mord mathnormal">i</span
                      ><span
                        class="mspace"
                        style="margin-right: 0.277778em"
                      ></span
                      ><span class="mrel">=</span
                      ><span
                        class="mspace"
                        style="margin-right: 0.277778em"
                      ></span></span
                    ><span class="base"
                      ><span
                        class="strut"
                        style="height: 0.64444em; vertical-align: 0em"
                      ></span
                      ><span class="mord">9</span></span
                    ></span
                  ></span
                ></span
              >;
            </li>
            <li>
              the second move:
              <span
                ><span class="katex"
                  ><span class="katex-mathml"
                    ><math xmlns="http://www.w3.org/1998/Math/MathML"
                      ><semantics
                        ><mrow><mi>i</mi><mo>=</mo><mn>9</mn></mrow
                        ><annotation encoding="application/x-tex"
                          >i=9</annotation
                        ></semantics
                      ></math
                    ></span
                  ><span class="katex-html" aria-hidden="true"
                    ><span class="base"
                      ><span
                        class="strut"
                        style="height: 0.65952em; vertical-align: 0em"
                      ></span
                      ><span class="mord mathnormal">i</span
                      ><span
                        class="mspace"
                        style="margin-right: 0.277778em"
                      ></span
                      ><span class="mrel">=</span
                      ><span
                        class="mspace"
                        style="margin-right: 0.277778em"
                      ></span></span
                    ><span class="base"
                      ><span
                        class="strut"
                        style="height: 0.64444em; vertical-align: 0em"
                      ></span
                      ><span class="mord">9</span></span
                    ></span
                  ></span
                ></span
              >;
            </li>
            <li>
              the third move:
              <span
                ><span class="katex"
                  ><span class="katex-mathml"
                    ><math xmlns="http://www.w3.org/1998/Math/MathML"
                      ><semantics
                        ><mrow><mi>i</mi><mo>=</mo><mn>2</mn></mrow
                        ><annotation encoding="application/x-tex"
                          >i=2</annotation
                        ></semantics
                      ></math
                    ></span
                  ><span class="katex-html" aria-hidden="true"
                    ><span class="base"
                      ><span
                        class="strut"
                        style="height: 0.65952em; vertical-align: 0em"
                      ></span
                      ><span class="mord mathnormal">i</span
                      ><span
                        class="mspace"
                        style="margin-right: 0.277778em"
                      ></span
                      ><span class="mrel">=</span
                      ><span
                        class="mspace"
                        style="margin-right: 0.277778em"
                      ></span></span
                    ><span class="base"
                      ><span
                        class="strut"
                        style="height: 0.64444em; vertical-align: 0em"
                      ></span
                      ><span class="mord">2</span></span
                    ></span
                  ></span
                ></span
              >.
            </li>
          </ul>
          <p>
            In the fourth test case, the values
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><msub><mi>c</mi><mn>0</mn></msub></mrow
                      ><annotation encoding="application/x-tex"
                        >c_0</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.58056em; vertical-align: -0.15em"
                    ></span
                    ><span class="mord"
                      ><span class="mord mathnormal">c</span
                      ><span class="msupsub"
                        ><span class="vlist-t vlist-t2"
                          ><span class="vlist-r"
                            ><span class="vlist" style="height: 0.301108em"
                              ><span
                                class=""
                                style="
                                  top: -2.55em;
                                  margin-left: 0em;
                                  margin-right: 0.05em;
                                "
                                ><span
                                  class="pstrut"
                                  style="height: 2.7em"
                                ></span
                                ><span class="sizing reset-size6 size3 mtight"
                                  ><span class="mord mtight">0</span></span
                                ></span
                              ></span
                            ><span class="vlist-s">​</span></span
                          ><span class="vlist-r"
                            ><span class="vlist" style="height: 0.15em"
                              ><span
                                class=""
                              ></span></span></span></span></span></span></span></span></span></span
            >,
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><msub><mi>c</mi><mn>1</mn></msub></mrow
                      ><annotation encoding="application/x-tex"
                        >c_1</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.58056em; vertical-align: -0.15em"
                    ></span
                    ><span class="mord"
                      ><span class="mord mathnormal">c</span
                      ><span class="msupsub"
                        ><span class="vlist-t vlist-t2"
                          ><span class="vlist-r"
                            ><span class="vlist" style="height: 0.301108em"
                              ><span
                                class=""
                                style="
                                  top: -2.55em;
                                  margin-left: 0em;
                                  margin-right: 0.05em;
                                "
                                ><span
                                  class="pstrut"
                                  style="height: 2.7em"
                                ></span
                                ><span class="sizing reset-size6 size3 mtight"
                                  ><span class="mord mtight">1</span></span
                                ></span
                              ></span
                            ><span class="vlist-s">​</span></span
                          ><span class="vlist-r"
                            ><span class="vlist" style="height: 0.15em"
                              ><span
                                class=""
                              ></span></span></span></span></span></span></span></span></span
            ></span>
            and
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><msub><mi>c</mi><mn>2</mn></msub></mrow
                      ><annotation encoding="application/x-tex"
                        >c_2</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.58056em; vertical-align: -0.15em"
                    ></span
                    ><span class="mord"
                      ><span class="mord mathnormal">c</span
                      ><span class="msupsub"
                        ><span class="vlist-t vlist-t2"
                          ><span class="vlist-r"
                            ><span class="vlist" style="height: 0.301108em"
                              ><span
                                class=""
                                style="
                                  top: -2.55em;
                                  margin-left: 0em;
                                  margin-right: 0.05em;
                                "
                                ><span
                                  class="pstrut"
                                  style="height: 2.7em"
                                ></span
                                ><span class="sizing reset-size6 size3 mtight"
                                  ><span class="mord mtight">2</span></span
                                ></span
                              ></span
                            ><span class="vlist-s">​</span></span
                          ><span class="vlist-r"
                            ><span class="vlist" style="height: 0.15em"
                              ><span
                                class=""
                              ></span></span></span></span></span></span></span></span></span
            ></span>
            initially equal to each other, so the array
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow><mi>a</mi></mrow
                      ><annotation encoding="application/x-tex"
                        >a</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.43056em; vertical-align: 0em"
                    ></span
                    ><span class="mord mathnormal">a</span></span
                  ></span
                ></span
              ></span
            >
            already has balanced remainders.
          </p>
        </div>
      </div>
    </div>
    <!---->
  </div>
</div>

# Solution

It's hard to find the rule for three numbers $c_0$, $c_1$, $c_2$. Observing the problem's maximum scale, the voilent simulation is acceptable. As long as, $c_0$, $c_1$, $c_2 \neq \frac{n}{3}$, we make the number which is smaller than $\frac{n}{3}$ increase by $1$ and the adjacent number decrease by $1$.

Notice the direction that the move can be made.
