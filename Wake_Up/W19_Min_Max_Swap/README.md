<!--
File: \temp.html
Project: ACM
Created Date: Monday Feb 6th 2023, 11:04:41 am
Author: Wenren Muyan
Comments: 
--------------------------------------------------------------------------------
Last Modified: 6/02/2023 11:04:42
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
    <span data-v-126cf686="">Div. 2 Min Max Swap</span><br data-v-126cf686="" />
    <div data-v-126cf686="" class="problem-tag">
      <span data-v-126cf686="" class="el-tag el-tag--small el-tag--plain"
        >暂无标签</span
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
      <span data-v-126cf686="">时间限制：C/C++ 1000MS，其他语言 2000MS</span
      ><br data-v-126cf686="" /><span data-v-126cf686=""
        >内存限制：C/C++ 256MB，其他语言 512MB</span
      ><br data-v-126cf686="" /><span data-v-126cf686=""
        >难度：<span
          data-v-126cf686=""
          class="el-tag el-tag--small"
          style="
            color: rgb(255, 255, 255) !important;
            background-color: rgb(45, 140, 240) !important;
          "
          >中等</span
        ></span
      ><br data-v-126cf686="" /><!----><span data-v-126cf686=""
        >出题人：<a
          data-v-126cf686=""
          class="author-name el-link el-link--info is-underline"
          ><!----><span class="el-link--inner">root</span
          ><!----></a
        ></span
      ><br data-v-126cf686="" />
    </div>
  </div>
  <div data-v-126cf686="" id="problem-content">
    <p data-v-126cf686="" class="title">描述</p>
    <div data-v-126cf686="" class="markdown-body md-content">
      <p>
        You are given two arrays
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
        and
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>b</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >b</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.69444em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">b</span></span
              ></span
            ></span
          ></span
        >
        of
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
        positive integers each. You can apply the following operation to them
        any number of times:
      </p>
      <ul>
        <li>
          Select an index
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
                      >1\leq i\leq n</annotation
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
          >) and swap
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
                      ><msub><mi>b</mi><mi>i</mi></msub></mrow
                    ><annotation encoding="application/x-tex"
                      >b_i</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.84444em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">b</span
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
          (i.&nbsp;e.
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
          becomes
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>b</mi><mi>i</mi></msub></mrow
                    ><annotation encoding="application/x-tex"
                      >b_i</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.84444em; vertical-align: -0.15em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">b</span
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
          and vice versa).
        </li>
      </ul>
      <p>
        Find the <span class="tex-font-style-bf">minimum</span> possible value
        of
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><mi>max</mi><mo>⁡</mo><mo stretchy="false">(</mo
                    ><msub><mi>a</mi><mn>1</mn></msub
                    ><mo separator="true">,</mo><msub><mi>a</mi><mn>2</mn></msub
                    ><mo separator="true">,</mo><mo>…</mo
                    ><mo separator="true">,</mo><msub><mi>a</mi><mi>n</mi></msub
                    ><mo stretchy="false">)</mo><mo>⋅</mo><mi>max</mi><mo>⁡</mo
                    ><mo stretchy="false">(</mo><msub><mi>b</mi><mn>1</mn></msub
                    ><mo separator="true">,</mo><msub><mi>b</mi><mn>2</mn></msub
                    ><mo separator="true">,</mo><mo>…</mo
                    ><mo separator="true">,</mo><msub><mi>b</mi><mi>n</mi></msub
                    ><mo stretchy="false">)</mo></mrow
                  ><annotation encoding="application/x-tex"
                    >\max(a_1, a_2, \ldots, a_n) \cdot \max(b_1, b_2, \ldots,
                    b_n)</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 1em; vertical-align: -0.25em"
                ></span
                ><span class="mop">max</span><span class="mopen">(</span
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
                          ></span></span></span></span></span></span
                ><span class="mclose">)</span
                ><span class="mspace" style="margin-right: 0.222222em"></span
                ><span class="mbin">⋅</span
                ><span
                  class="mspace"
                  style="margin-right: 0.222222em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 1em; vertical-align: -0.25em"
                ></span
                ><span class="mop">max</span><span class="mopen">(</span
                ><span class="mord"
                  ><span class="mord mathnormal">b</span
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
                  ><span class="mord mathnormal">b</span
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
                  ><span class="mord mathnormal">b</span
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
                          ></span></span></span></span></span></span
                ><span class="mclose">)</span></span
              ></span
            ></span
          ></span
        >
        you can get after applying such operation any number of times (possibly
        zero).
      </p>
    </div>
    <p data-v-126cf686="" class="title">输入描述</p>
    <div data-v-126cf686="" class="markdown-body md-content">
      <p>
        The input consists of multiple test cases. The first line contains a
        single integer
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
                    ><mn>1</mn><mo>≤</mo><mi>t</mi><mo>≤</mo><mn>100</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >1 \leq t \leq 100</annotation
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
                  style="height: 0.64444em; vertical-align: 0em"
                ></span
                ><span class="mord">1</span><span class="mord">0</span
                ><span class="mord">0</span></span
              ></span
            ></span
          ></span
        >) — the number of test cases. Description of the test cases follows.
      </p>
      <p>
        The first line of each test case contains an integer
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
                    ><mn>1</mn><mo>≤</mo><mi>n</mi><mo>≤</mo><mn>100</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >1\le n\le 100</annotation
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
                ><span class="mord">1</span><span class="mord">0</span
                ><span class="mord">0</span></span
              ></span
            ></span
          ></span
        >) — the length of the arrays.
      </p>
      <p>
        The second line of each test case contains
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
                    ><mn>1</mn><mo>≤</mo><msub><mi>a</mi><mi>i</mi></msub
                    ><mo>≤</mo><mn>10</mn> <mn>000</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >1 \le a_i \le 10\,000</annotation
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
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mord">0</span><span class="mord">0</span
                ><span class="mord">0</span></span
              ></span
            ></span
          ></span
        >) where
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
        is the
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
        >-th element of the array
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
        >.
      </p>
      <p>
        The third line of each test case contains
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
                    ><msub><mi>b</mi><mn>1</mn></msub
                    ><mo separator="true">,</mo><msub><mi>b</mi><mn>2</mn></msub
                    ><mo separator="true">,</mo><mo>…</mo
                    ><mo separator="true">,</mo
                    ><msub><mi>b</mi><mi>n</mi></msub></mrow
                  ><annotation encoding="application/x-tex"
                    >b_1, b_2, \ldots, b_n</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.88888em; vertical-align: -0.19444em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">b</span
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
                  ><span class="mord mathnormal">b</span
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
                  ><span class="mord mathnormal">b</span
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
                    ><mn>1</mn><mo>≤</mo><msub><mi>b</mi><mi>i</mi></msub
                    ><mo>≤</mo><mn>10</mn> <mn>000</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >1 \le b_i \le 10\,000</annotation
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
                  style="height: 0.84444em; vertical-align: -0.15em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">b</span
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
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mord">0</span><span class="mord">0</span
                ><span class="mord">0</span></span
              ></span
            ></span
          ></span
        >) where
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><msub><mi>b</mi><mi>i</mi></msub></mrow
                  ><annotation encoding="application/x-tex"
                    >b_i</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.84444em; vertical-align: -0.15em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal">b</span
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
        is the
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
        >-th element of the array
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>b</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >b</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.69444em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">b</span></span
              ></span
            ></span
          ></span
        >.
      </p>
    </div>
    <p data-v-126cf686="" class="title">输出描述</p>
    <div data-v-126cf686="" class="markdown-body md-content">
      <p>
        For each test case, print a single integer, the
        <span class="tex-font-style-bf">minimum</span> possible value of
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><mi>max</mi><mo>⁡</mo><mo stretchy="false">(</mo
                    ><msub><mi>a</mi><mn>1</mn></msub
                    ><mo separator="true">,</mo><msub><mi>a</mi><mn>2</mn></msub
                    ><mo separator="true">,</mo><mo>…</mo
                    ><mo separator="true">,</mo><msub><mi>a</mi><mi>n</mi></msub
                    ><mo stretchy="false">)</mo><mo>⋅</mo><mi>max</mi><mo>⁡</mo
                    ><mo stretchy="false">(</mo><msub><mi>b</mi><mn>1</mn></msub
                    ><mo separator="true">,</mo><msub><mi>b</mi><mn>2</mn></msub
                    ><mo separator="true">,</mo><mo>…</mo
                    ><mo separator="true">,</mo><msub><mi>b</mi><mi>n</mi></msub
                    ><mo stretchy="false">)</mo></mrow
                  ><annotation encoding="application/x-tex"
                    >\max(a_1, a_2, \ldots, a_n) \cdot \max(b_1, b_2, \ldots,
                    b_n)</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 1em; vertical-align: -0.25em"
                ></span
                ><span class="mop">max</span><span class="mopen">(</span
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
                          ></span></span></span></span></span></span
                ><span class="mclose">)</span
                ><span class="mspace" style="margin-right: 0.222222em"></span
                ><span class="mbin">⋅</span
                ><span
                  class="mspace"
                  style="margin-right: 0.222222em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 1em; vertical-align: -0.25em"
                ></span
                ><span class="mop">max</span><span class="mopen">(</span
                ><span class="mord"
                  ><span class="mord mathnormal">b</span
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
                  ><span class="mord mathnormal">b</span
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
                  ><span class="mord mathnormal">b</span
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
                          ></span></span></span></span></span></span
                ><span class="mclose">)</span></span
              ></span
            ></span
          ></span
        >
        you can get after applying such operation any number of times.
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
6
1 2 6 5 1 2
3 4 3 2 2 5
3
3 3 3
3 3 3
2
1 2
2 1</pre
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
18
9
2</pre
          >
        </div>
      </div>
    </div>
    <p data-v-126cf686="" class="title">提示</p>
    <div data-v-126cf686="" class="el-card is-always-shadow" dis-hover="">
      <!---->
      <div class="el-card__body">
        <div data-v-126cf686="" class="markdown-body hint-content">
          <p>
            In the first test, you can apply the operations at indices
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
            and
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow><mn>6</mn></mrow
                      ><annotation encoding="application/x-tex"
                        >6</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.64444em; vertical-align: 0em"
                    ></span
                    ><span class="mord">6</span></span
                  ></span
                ></span
              ></span
            >, then
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mi>a</mi><mo>=</mo><mo stretchy="false">[</mo
                        ><mn>1</mn><mo separator="true">,</mo><mn>4</mn
                        ><mo separator="true">,</mo><mn>6</mn
                        ><mo separator="true">,</mo><mn>5</mn
                        ><mo separator="true">,</mo><mn>1</mn
                        ><mo separator="true">,</mo><mn>5</mn
                        ><mo stretchy="false">]</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >a = [1, 4, 6, 5, 1, 5]</annotation
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
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">[</span><span class="mord">1</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">4</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">6</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">5</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">1</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">5</span
                    ><span class="mclose">]</span></span
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
                        ><mi>b</mi><mo>=</mo><mo stretchy="false">[</mo
                        ><mn>3</mn><mo separator="true">,</mo><mn>2</mn
                        ><mo separator="true">,</mo><mn>3</mn
                        ><mo separator="true">,</mo><mn>2</mn
                        ><mo separator="true">,</mo><mn>2</mn
                        ><mo separator="true">,</mo><mn>2</mn
                        ><mo stretchy="false">]</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >b = [3, 2, 3, 2, 2, 2]</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.69444em; vertical-align: 0em"
                    ></span
                    ><span class="mord mathnormal">b</span
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
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">[</span><span class="mord">3</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">2</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">3</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">2</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">2</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">2</span
                    ><span class="mclose">]</span></span
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
                        ><mi>max</mi><mo>⁡</mo><mo stretchy="false">(</mo
                        ><mn>1</mn><mo separator="true">,</mo><mn>4</mn
                        ><mo separator="true">,</mo><mn>6</mn
                        ><mo separator="true">,</mo><mn>5</mn
                        ><mo separator="true">,</mo><mn>1</mn
                        ><mo separator="true">,</mo><mn>5</mn
                        ><mo stretchy="false">)</mo><mo>⋅</mo><mi>max</mi
                        ><mo>⁡</mo><mo stretchy="false">(</mo><mn>3</mn
                        ><mo separator="true">,</mo><mn>2</mn
                        ><mo separator="true">,</mo><mn>3</mn
                        ><mo separator="true">,</mo><mn>2</mn
                        ><mo separator="true">,</mo><mn>2</mn
                        ><mo separator="true">,</mo><mn>2</mn
                        ><mo stretchy="false">)</mo><mo>=</mo><mn>6</mn
                        ><mo>⋅</mo><mn>3</mn><mo>=</mo><mn>18</mn></mrow
                      ><annotation encoding="application/x-tex"
                        >\max(1, 4, 6, 5, 1, 5) \cdot \max(3, 2, 3, 2, 2, 2) = 6
                        \cdot 3 = 18</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mop">max</span><span class="mopen">(</span
                    ><span class="mord">1</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">4</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">6</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">5</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">1</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">5</span><span class="mclose">)</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.222222em"
                    ></span
                    ><span class="mbin">⋅</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.222222em"
                    ></span></span
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mop">max</span><span class="mopen">(</span
                    ><span class="mord">3</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">2</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">3</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">2</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">2</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">2</span><span class="mclose">)</span
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
                    ><span class="mord">6</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.222222em"
                    ></span
                    ><span class="mbin">⋅</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.222222em"
                    ></span></span
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.64444em; vertical-align: 0em"
                    ></span
                    ><span class="mord">3</span
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
                    ><span class="mord">1</span
                    ><span class="mord">8</span></span
                  ></span
                ></span
              ></span
            >.
          </p>
          <p>
            In the second test, no matter how you apply the operations,
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mi>a</mi><mo>=</mo><mo stretchy="false">[</mo
                        ><mn>3</mn><mo separator="true">,</mo><mn>3</mn
                        ><mo separator="true">,</mo><mn>3</mn
                        ><mo stretchy="false">]</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >a = [3, 3, 3]</annotation
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
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">[</span><span class="mord">3</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">3</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">3</span
                    ><span class="mclose">]</span></span
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
                        ><mi>b</mi><mo>=</mo><mo stretchy="false">[</mo
                        ><mn>3</mn><mo separator="true">,</mo><mn>3</mn
                        ><mo separator="true">,</mo><mn>3</mn
                        ><mo stretchy="false">]</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >b = [3, 3, 3]</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.69444em; vertical-align: 0em"
                    ></span
                    ><span class="mord mathnormal">b</span
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
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">[</span><span class="mord">3</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">3</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">3</span
                    ><span class="mclose">]</span></span
                  ></span
                ></span
              ></span
            >
            will always hold, so the answer is
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mi>max</mi><mo>⁡</mo><mo stretchy="false">(</mo
                        ><mn>3</mn><mo separator="true">,</mo><mn>3</mn
                        ><mo separator="true">,</mo><mn>3</mn
                        ><mo stretchy="false">)</mo><mo>⋅</mo><mi>max</mi
                        ><mo>⁡</mo><mo stretchy="false">(</mo><mn>3</mn
                        ><mo separator="true">,</mo><mn>3</mn
                        ><mo separator="true">,</mo><mn>3</mn
                        ><mo stretchy="false">)</mo><mo>=</mo><mn>3</mn
                        ><mo>⋅</mo><mn>3</mn><mo>=</mo><mn>9</mn></mrow
                      ><annotation encoding="application/x-tex"
                        >\max(3, 3, 3) \cdot \max(3, 3, 3) = 3 \cdot 3 =
                        9</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mop">max</span><span class="mopen">(</span
                    ><span class="mord">3</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">3</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">3</span><span class="mclose">)</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.222222em"
                    ></span
                    ><span class="mbin">⋅</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.222222em"
                    ></span></span
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mop">max</span><span class="mopen">(</span
                    ><span class="mord">3</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">3</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">3</span><span class="mclose">)</span
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
                    ><span class="mord">3</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.222222em"
                    ></span
                    ><span class="mbin">⋅</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.222222em"
                    ></span></span
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.64444em; vertical-align: 0em"
                    ></span
                    ><span class="mord">3</span
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
            >.
          </p>
          <p>
            In the third test, you can apply the operation at index
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
            >, then
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mi>a</mi><mo>=</mo><mo stretchy="false">[</mo
                        ><mn>2</mn><mo separator="true">,</mo><mn>2</mn
                        ><mo stretchy="false">]</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >a = [2, 2]</annotation
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
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">[</span><span class="mord">2</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">2</span
                    ><span class="mclose">]</span></span
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
                        ><mi>b</mi><mo>=</mo><mo stretchy="false">[</mo
                        ><mn>1</mn><mo separator="true">,</mo><mn>1</mn
                        ><mo stretchy="false">]</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >b = [1, 1]</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.69444em; vertical-align: 0em"
                    ></span
                    ><span class="mord mathnormal">b</span
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
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">[</span><span class="mord">1</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">1</span
                    ><span class="mclose">]</span></span
                  ></span
                ></span
              ></span
            >, so the answer is
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mi>max</mi><mo>⁡</mo><mo stretchy="false">(</mo
                        ><mn>2</mn><mo separator="true">,</mo><mn>2</mn
                        ><mo stretchy="false">)</mo><mo>⋅</mo><mi>max</mi
                        ><mo>⁡</mo><mo stretchy="false">(</mo><mn>1</mn
                        ><mo separator="true">,</mo><mn>1</mn
                        ><mo stretchy="false">)</mo><mo>=</mo><mn>2</mn
                        ><mo>⋅</mo><mn>1</mn><mo>=</mo><mn>2</mn></mrow
                      ><annotation encoding="application/x-tex"
                        >\max(2, 2) \cdot \max(1, 1) = 2 \cdot 1 = 2</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mop">max</span><span class="mopen">(</span
                    ><span class="mord">2</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">2</span><span class="mclose">)</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.222222em"
                    ></span
                    ><span class="mbin">⋅</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.222222em"
                    ></span></span
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mop">max</span><span class="mopen">(</span
                    ><span class="mord">1</span><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">1</span><span class="mclose">)</span
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
                    ><span class="mord">2</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.222222em"
                    ></span
                    ><span class="mbin">⋅</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.222222em"
                    ></span></span
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 0.64444em; vertical-align: 0em"
                    ></span
                    ><span class="mord">1</span
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
        </div>
      </div>
    </div>
    <!---->
  </div>
</div>

# Solution

Assuming that originally the maximum number in $a$ is $m_a$ and the maximum number in $b$ is $m_b$ and $m_a >= m_b$. However we swap the elements, the $m_a$ will be always selected in the last step. So the question comes to how to minimize the $m_b$. It is clear that if we put all the smaller element in an array, the maximum number in the array will be minimized. So our strategy is that compare all the $a_i$ and $b_i$, swapping each other when $a_i < b_i$, otherwise doing nothing. Finally, we scan for the maximum number in the transformed $a$ and $b$, their product is the answer.