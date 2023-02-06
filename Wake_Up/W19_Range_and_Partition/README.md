<div
  data-v-126cf686=""
  padding="10"
  shadow=""
  id="js-left-ContestProblemDetails"
  class="js-left"
  style="height: auto"
>
  <div data-v-126cf686="" slot="header" class="panel-title">
    <span data-v-126cf686="">Range and Partition</span><br data-v-126cf686="" />
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
      <span data-v-126cf686="">时间限制：C/C++ 2000MS，其他语言 4000MS</span
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
        Given an array
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
        integers, find a range of values
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><mo stretchy="false">[</mo><mi>x</mi
                    ><mo separator="true">,</mo><mi>y</mi
                    ><mo stretchy="false">]</mo></mrow
                  ><annotation encoding="application/x-tex"
                    >[x, y]</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 1em; vertical-align: -0.25em"
                ></span
                ><span class="mopen">[</span
                ><span class="mord mathnormal">x</span
                ><span class="mpunct">,</span
                ><span class="mspace" style="margin-right: 0.166667em"></span
                ><span class="mord mathnormal" style="margin-right: 0.03588em"
                  >y</span
                ><span class="mclose">]</span></span
              ></span
            ></span
          ></span
        >
        (<span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>x</mi><mo>≤</mo><mi>y</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >x \le y</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.77194em; vertical-align: -0.13597em"
                ></span
                ><span class="mord mathnormal">x</span
                ><span class="mspace" style="margin-right: 0.277778em"></span
                ><span class="mrel">≤</span
                ><span
                  class="mspace"
                  style="margin-right: 0.277778em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.625em; vertical-align: -0.19444em"
                ></span
                ><span class="mord mathnormal" style="margin-right: 0.03588em"
                  >y</span
                ></span
              ></span
            ></span
          ></span
        >), and split
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
        into <span class="tex-font-style-bf">exactly</span>
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>k</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >k</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.69444em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal" style="margin-right: 0.03148em"
                  >k</span
                ></span
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
                    ><mn>1</mn><mo>≤</mo><mi>k</mi><mo>≤</mo><mi>n</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >1 \le k \le n</annotation
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
                  style="height: 0.83041em; vertical-align: -0.13597em"
                ></span
                ><span class="mord mathnormal" style="margin-right: 0.03148em"
                  >k</span
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
        >) subarrays in such a way that:
      </p>
      <ul>
        <li>
          Each subarray is formed by several continuous elements of
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
          >, that is, it is equal to
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><msub><mi>a</mi><mi>l</mi></msub
                      ><mo separator="true">,</mo
                      ><msub
                        ><mi>a</mi
                        ><mrow><mi>l</mi><mo>+</mo><mn>1</mn></mrow></msub
                      ><mo separator="true">,</mo><mo>…</mo
                      ><mo separator="true">,</mo
                      ><msub><mi>a</mi><mi>r</mi></msub></mrow
                    ><annotation encoding="application/x-tex"
                      >a_l, a_{l+1}, \ldots, a_r</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.638891em; vertical-align: -0.208331em"
                  ></span
                  ><span class="mord"
                    ><span class="mord mathnormal">a</span
                    ><span class="msupsub"
                      ><span class="vlist-t vlist-t2"
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.336108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span
                                  class="mord mathnormal mtight"
                                  style="margin-right: 0.01968em"
                                  >l</span
                                ></span
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
                          ><span class="vlist" style="height: 0.336108em"
                            ><span
                              class=""
                              style="
                                top: -2.55em;
                                margin-left: 0em;
                                margin-right: 0.05em;
                              "
                              ><span class="pstrut" style="height: 2.7em"></span
                              ><span class="sizing reset-size6 size3 mtight"
                                ><span class="mord mtight"
                                  ><span
                                    class="mord mathnormal mtight"
                                    style="margin-right: 0.01968em"
                                    >l</span
                                  ><span class="mbin mtight">+</span
                                  ><span class="mord mtight">1</span></span
                                ></span
                              ></span
                            ></span
                          ><span class="vlist-s">​</span></span
                        ><span class="vlist-r"
                          ><span class="vlist" style="height: 0.208331em"
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
                                ><span
                                  class="mord mathnormal mtight"
                                  style="margin-right: 0.02778em"
                                  >r</span
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
          for some
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow><mi>l</mi></mrow
                    ><annotation encoding="application/x-tex"
                      >l</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.69444em; vertical-align: 0em"
                  ></span
                  ><span class="mord mathnormal" style="margin-right: 0.01968em"
                    >l</span
                  ></span
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
                    ><mrow><mi>r</mi></mrow
                    ><annotation encoding="application/x-tex"
                      >r</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.43056em; vertical-align: 0em"
                  ></span
                  ><span class="mord mathnormal" style="margin-right: 0.02778em"
                    >r</span
                  ></span
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
                      ><mn>1</mn><mo>≤</mo><mi>l</mi><mo>≤</mo><mi>r</mi
                      ><mo>≤</mo><mi>n</mi></mrow
                    ><annotation encoding="application/x-tex"
                      >1 \leq l \leq r \leq n</annotation
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
                    style="height: 0.83041em; vertical-align: -0.13597em"
                  ></span
                  ><span class="mord mathnormal" style="margin-right: 0.01968em"
                    >l</span
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
                  ><span class="mord mathnormal" style="margin-right: 0.02778em"
                    >r</span
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
          >).
        </li>
        <li>
          Each element from
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
          belongs to exactly one subarray.
        </li>
        <li>
          In each subarray the number of elements inside the range
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><mo stretchy="false">[</mo><mi>x</mi
                      ><mo separator="true">,</mo><mi>y</mi
                      ><mo stretchy="false">]</mo></mrow
                    ><annotation encoding="application/x-tex"
                      >[x, y]</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 1em; vertical-align: -0.25em"
                  ></span
                  ><span class="mopen">[</span
                  ><span class="mord mathnormal">x</span
                  ><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord mathnormal" style="margin-right: 0.03588em"
                    >y</span
                  ><span class="mclose">]</span></span
                ></span
              ></span
            ></span
          >
          (inclusive) is
          <span class="tex-font-style-bf">strictly greater</span> than the
          number of elements outside the range. An element with index
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
          is inside the range
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><mo stretchy="false">[</mo><mi>x</mi
                      ><mo separator="true">,</mo><mi>y</mi
                      ><mo stretchy="false">]</mo></mrow
                    ><annotation encoding="application/x-tex"
                      >[x, y]</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 1em; vertical-align: -0.25em"
                  ></span
                  ><span class="mopen">[</span
                  ><span class="mord mathnormal">x</span
                  ><span class="mpunct">,</span
                  ><span class="mspace" style="margin-right: 0.166667em"></span
                  ><span class="mord mathnormal" style="margin-right: 0.03588em"
                    >y</span
                  ><span class="mclose">]</span></span
                ></span
              ></span
            ></span
          >
          if and only if
          <span
            ><span class="katex"
              ><span class="katex-mathml"
                ><math xmlns="http://www.w3.org/1998/Math/MathML"
                  ><semantics
                    ><mrow
                      ><mi>x</mi><mo>≤</mo><msub><mi>a</mi><mi>i</mi></msub
                      ><mo>≤</mo><mi>y</mi></mrow
                    ><annotation encoding="application/x-tex"
                      >x \le a_i \le y</annotation
                    ></semantics
                  ></math
                ></span
              ><span class="katex-html" aria-hidden="true"
                ><span class="base"
                  ><span
                    class="strut"
                    style="height: 0.77194em; vertical-align: -0.13597em"
                  ></span
                  ><span class="mord mathnormal">x</span
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
                    style="height: 0.625em; vertical-align: -0.19444em"
                  ></span
                  ><span class="mord mathnormal" style="margin-right: 0.03588em"
                    >y</span
                  ></span
                ></span
              ></span
            ></span
          >.
        </li>
      </ul>
      <p>
        Print any solution that minimizes
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>y</mi><mo>−</mo><mi>x</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >y - x</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.77777em; vertical-align: -0.19444em"
                ></span
                ><span class="mord mathnormal" style="margin-right: 0.03588em"
                  >y</span
                ><span class="mspace" style="margin-right: 0.222222em"></span
                ><span class="mbin">−</span
                ><span
                  class="mspace"
                  style="margin-right: 0.222222em"
                ></span></span
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">x</span></span
              ></span
            ></span
          ></span
        >.
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
                    ><mn>1</mn><mo>≤</mo><mi>t</mi><mo>≤</mo><mn>3</mn><mo>⋅</mo
                    ><mn>1</mn><msup><mn>0</mn><mn>4</mn></msup></mrow
                  ><annotation encoding="application/x-tex"
                    >1 \leq t \leq 3 \cdot 10^4</annotation
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
        >) — the number of test cases. Description of the test cases follows.
      </p>
      <p>
        The first line of each test case contains two integers
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
        and
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>k</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >k</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.69444em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal" style="margin-right: 0.03148em"
                  >k</span
                ></span
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
                    ><mn>1</mn><mo>≤</mo><mi>k</mi><mo>≤</mo><mi>n</mi><mo>≤</mo
                    ><mn>2</mn><mo>⋅</mo><mn>1</mn
                    ><msup><mn>0</mn><mn>5</mn></msup></mrow
                  ><annotation encoding="application/x-tex"
                    >1 \le k \le n \le 2 \cdot 10^5</annotation
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
                  style="height: 0.83041em; vertical-align: -0.13597em"
                ></span
                ><span class="mord mathnormal" style="margin-right: 0.03148em"
                  >k</span
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
                ><span class="mord">2</span
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
                              ><span class="mord mtight">5</span></span
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
        >) — the length of the array
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
        and the number of subarrays required in the partition.
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
                    ><mo>≤</mo><mi>n</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >1 \le a_i \le n</annotation
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
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">n</span></span
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
        >-th element of the array.
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
                  ><mrow
                    ><mn>2</mn><mo>⋅</mo><mn>1</mn
                    ><msup><mn>0</mn><mn>5</mn></msup></mrow
                  ><annotation encoding="application/x-tex"
                    >2\cdot10^5</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.64444em; vertical-align: 0em"
                ></span
                ><span class="mord">2</span
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
                              ><span class="mord mtight">5</span></span
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
        >.
      </p>
    </div>
    <p data-v-126cf686="" class="title">输出描述</p>
    <div data-v-126cf686="" class="markdown-body md-content">
      <p>
        For each test case, print
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>k</mi><mo>+</mo><mn>1</mn></mrow
                  ><annotation encoding="application/x-tex"
                    >k+1</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.77777em; vertical-align: -0.08333em"
                ></span
                ><span class="mord mathnormal" style="margin-right: 0.03148em"
                  >k</span
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
        >
        lines.
      </p>
      <p>
        In the first line, print
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>x</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >x</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">x</span></span
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
                  ><mrow><mi>y</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >y</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.625em; vertical-align: -0.19444em"
                ></span
                ><span class="mord mathnormal" style="margin-right: 0.03588em"
                  >y</span
                ></span
              ></span
            ></span
          ></span
        >
        — the limits of the found range.
      </p>
      <p>
        Then print
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow><mi>k</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >k</annotation
                  ></semantics
                ></math
              ></span
            ><span class="katex-html" aria-hidden="true"
              ><span class="base"
                ><span
                  class="strut"
                  style="height: 0.69444em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal" style="margin-right: 0.03148em"
                  >k</span
                ></span
              ></span
            ></span
          ></span
        >
        lines, the
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
        >-th should contain
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><msub><mi>l</mi><mi>i</mi></msub></mrow
                  ><annotation encoding="application/x-tex"
                    >l_i</annotation
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
                  ><span class="mord mathnormal" style="margin-right: 0.01968em"
                    >l</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.311664em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: -0.01968em;
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
        and
        <span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><msub><mi>r</mi><mi>i</mi></msub></mrow
                  ><annotation encoding="application/x-tex"
                    >r_i</annotation
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
                  ><span class="mord mathnormal" style="margin-right: 0.02778em"
                    >r</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.311664em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: -0.02778em;
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
        (<span
          ><span class="katex"
            ><span class="katex-mathml"
              ><math xmlns="http://www.w3.org/1998/Math/MathML"
                ><semantics
                  ><mrow
                    ><mn>1</mn><mo>≤</mo><msub><mi>l</mi><mi>i</mi></msub
                    ><mo>≤</mo><msub><mi>r</mi><mi>i</mi></msub
                    ><mo>≤</mo><mi>n</mi></mrow
                  ><annotation encoding="application/x-tex"
                    >1\leq l_i \leq r_i \leq n</annotation
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
                  ><span class="mord mathnormal" style="margin-right: 0.01968em"
                    >l</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.311664em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: -0.01968em;
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
                  style="height: 0.78597em; vertical-align: -0.15em"
                ></span
                ><span class="mord"
                  ><span class="mord mathnormal" style="margin-right: 0.02778em"
                    >r</span
                  ><span class="msupsub"
                    ><span class="vlist-t vlist-t2"
                      ><span class="vlist-r"
                        ><span class="vlist" style="height: 0.311664em"
                          ><span
                            class=""
                            style="
                              top: -2.55em;
                              margin-left: -0.02778em;
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
                  style="height: 0.43056em; vertical-align: 0em"
                ></span
                ><span class="mord mathnormal">n</span></span
              ></span
            ></span
          ></span
        >) — the limits of the
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
        >-th subarray.
      </p>
      <p>You can print the subarrays in any order.</p>
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
2 1
1 2
4 2
1 2 2 2
11 3
5 5 5 1 5 5 1 5 5 5 1</pre
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
1 2
1 2
2 2
1 3
4 4
5 5
1 1
2 2
3 11</pre
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
            In the first test, there should be only one subarray, which must be
            equal to the whole array. There are
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
            elements inside the range
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mo stretchy="false">[</mo><mn>1</mn
                        ><mo separator="true">,</mo><mn>2</mn
                        ><mo stretchy="false">]</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >[1, 2]</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
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
                    ><span class="mord">2</span
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
            >
            elements outside, if the chosen range is
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mo stretchy="false">[</mo><mn>1</mn
                        ><mo separator="true">,</mo><mn>1</mn
                        ><mo stretchy="false">]</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >[1, 1]</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
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
            >, there will be
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
            element inside (<span
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
                              ></span></span></span></span></span></span></span></span></span></span
            >) and
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
            element outside (<span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><msub><mi>a</mi><mn>2</mn></msub></mrow
                      ><annotation encoding="application/x-tex"
                        >a_2</annotation
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
                              ></span></span></span></span></span></span></span></span></span></span
            >), and the answer will be invalid.
          </p>
          <p>
            In the second test, it is possible to choose the range
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mo stretchy="false">[</mo><mn>2</mn
                        ><mo separator="true">,</mo><mn>2</mn
                        ><mo stretchy="false">]</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >[2, 2]</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
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
            >, and split the array in subarrays
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mo stretchy="false">(</mo><mn>1</mn
                        ><mo separator="true">,</mo><mn>3</mn
                        ><mo stretchy="false">)</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >(1, 3)</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">(</span><span class="mord">1</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">3</span
                    ><span class="mclose">)</span></span
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
                        ><mo stretchy="false">(</mo><mn>4</mn
                        ><mo separator="true">,</mo><mn>4</mn
                        ><mo stretchy="false">)</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >(4, 4)</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">(</span><span class="mord">4</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">4</span
                    ><span class="mclose">)</span></span
                  ></span
                ></span
              ></span
            >, in subarray
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mo stretchy="false">(</mo><mn>1</mn
                        ><mo separator="true">,</mo><mn>3</mn
                        ><mo stretchy="false">)</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >(1, 3)</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">(</span><span class="mord">1</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">3</span
                    ><span class="mclose">)</span></span
                  ></span
                ></span
              ></span
            >
            there are
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
            elements inside the range (<span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><msub><mi>a</mi><mn>2</mn></msub></mrow
                      ><annotation encoding="application/x-tex"
                        >a_2</annotation
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
            and
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
                                ><span
                                  class="pstrut"
                                  style="height: 2.7em"
                                ></span
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
            >) and
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
            element outside (<span
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
                              ></span></span></span></span></span></span></span></span></span></span
            >), in subarray
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mo stretchy="false">(</mo><mn>4</mn
                        ><mo separator="true">,</mo><mn>4</mn
                        ><mo stretchy="false">)</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >(4, 4)</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">(</span><span class="mord">4</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">4</span
                    ><span class="mclose">)</span></span
                  ></span
                ></span
              ></span
            >
            there is only
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
            element (<span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><msub><mi>a</mi><mn>4</mn></msub></mrow
                      ><annotation encoding="application/x-tex"
                        >a_4</annotation
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
                                ><span
                                  class="pstrut"
                                  style="height: 2.7em"
                                ></span
                                ><span class="sizing reset-size6 size3 mtight"
                                  ><span class="mord mtight">4</span></span
                                ></span
                              ></span
                            ><span class="vlist-s">​</span></span
                          ><span class="vlist-r"
                            ><span class="vlist" style="height: 0.15em"
                              ><span
                                class=""
                              ></span></span></span></span></span></span></span></span></span></span
            >), and it is inside the range.
          </p>
          <p>
            In the third test, it is possible to choose the range
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mo stretchy="false">[</mo><mn>5</mn
                        ><mo separator="true">,</mo><mn>5</mn
                        ><mo stretchy="false">]</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >[5, 5]</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">[</span><span class="mord">5</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">5</span
                    ><span class="mclose">]</span></span
                  ></span
                ></span
              ></span
            >, and split the array in subarrays
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mo stretchy="false">(</mo><mn>1</mn
                        ><mo separator="true">,</mo><mn>4</mn
                        ><mo stretchy="false">)</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >(1, 4)</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">(</span><span class="mord">1</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">4</span
                    ><span class="mclose">)</span></span
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
                        ><mo stretchy="false">(</mo><mn>5</mn
                        ><mo separator="true">,</mo><mn>7</mn
                        ><mo stretchy="false">)</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >(5, 7)</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">(</span><span class="mord">5</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">7</span
                    ><span class="mclose">)</span></span
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
                        ><mo stretchy="false">(</mo><mn>8</mn
                        ><mo separator="true">,</mo><mn>11</mn
                        ><mo stretchy="false">)</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >(8, 11)</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">(</span><span class="mord">8</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">1</span><span class="mord">1</span
                    ><span class="mclose">)</span></span
                  ></span
                ></span
              ></span
            >, in the subarray
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mo stretchy="false">(</mo><mn>1</mn
                        ><mo separator="true">,</mo><mn>4</mn
                        ><mo stretchy="false">)</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >(1, 4)</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">(</span><span class="mord">1</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">4</span
                    ><span class="mclose">)</span></span
                  ></span
                ></span
              ></span
            >
            there are
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
            >
            elements inside the range and
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
            element outside, in the subarray
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mo stretchy="false">(</mo><mn>5</mn
                        ><mo separator="true">,</mo><mn>7</mn
                        ><mo stretchy="false">)</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >(5, 7)</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">(</span><span class="mord">5</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">7</span
                    ><span class="mclose">)</span></span
                  ></span
                ></span
              ></span
            >
            there are
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
            elements inside and
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
            element outside and in the subarray
            <span
              ><span class="katex"
                ><span class="katex-mathml"
                  ><math xmlns="http://www.w3.org/1998/Math/MathML"
                    ><semantics
                      ><mrow
                        ><mo stretchy="false">(</mo><mn>8</mn
                        ><mo separator="true">,</mo><mn>11</mn
                        ><mo stretchy="false">)</mo></mrow
                      ><annotation encoding="application/x-tex"
                        >(8, 11)</annotation
                      ></semantics
                    ></math
                  ></span
                ><span class="katex-html" aria-hidden="true"
                  ><span class="base"
                    ><span
                      class="strut"
                      style="height: 1em; vertical-align: -0.25em"
                    ></span
                    ><span class="mopen">(</span><span class="mord">8</span
                    ><span class="mpunct">,</span
                    ><span
                      class="mspace"
                      style="margin-right: 0.166667em"
                    ></span
                    ><span class="mord">1</span><span class="mord">1</span
                    ><span class="mclose">)</span></span
                  ></span
                ></span
              ></span
            >
            there are
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
            >
            elements inside and
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
            element outside.
          </p>
        </div>
      </div>
    </div>
    <!---->
  </div>
</div>

# Solution

To find the minimum $y - x$, we can considered the worst situation which is that the number of elenments in $[x, y]$ is just $k$ larger than the number of elements not in $[x, y]$. In this situation, the selected range must be the smallest, in other words, the value of $y - x$ is minimum. Also, it can be found that in such a situation, there is always at least a solution to divide the array into $k$ partitions which are all meet the conditions.

Now the question comes to how to find the $x$ and $y$. Assuming that there are $cnt_1$ elements in $[x, y]$ and $cnt_2$ elements not in $[x, y]$. They meet these conditions.

$$
\begin{equation}
\left\{
             \begin{array}{lr}
             cnt_1 - cnt_2 \geq k, &  \\
             cnt_1 + cnt_2 = n.   
             \end{array}
\right.
\end{equation}
$$

Simply rhe conditions we can get the relationship of $cnt_1$ and $cnt_2$ which is 
$$
cnt_1 \geq \lceil \frac{n + k}{2} \rceil
$$. 

We can copy the original array and sort it. Then we can select 
