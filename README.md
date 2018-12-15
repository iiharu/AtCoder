<div id="table-of-contents">
<h2>Table of Contents</h2>
<div id="text-table-of-contents">
<ul>
<li><a href="#sec-1">1. Requirements</a></li>
<li><a href="#sec-2">2. Libraries</a>
<ul>
<li><a href="#sec-2-1">2.1. stdc++</a></li>
<li><a href="#sec-2-2">2.2. boost</a></li>
</ul>
</li>
<li><a href="#sec-3">3. LICENSE</a></li>
<li><a href="#sec-4">4. Reference</a></li>
</ul>
</div>
</div>


# Requirements<a id="sec-1" name="sec-1"></a>

-   Artistic Style
-   GNU Emacs (Optional)
-   C++ Compiler
    -   GNU Compiler Collection (g++)
    -   LLVM Clang Compiler (clang++)
-   GNU Make

In Debian GNU/Linux:

    sudo apt install astyle emacs-nox g++ make

# Libraries<a id="sec-2" name="sec-2"></a>

## stdc++<a id="sec-2-1" name="sec-2-1"></a>

-   algorithm
    -   std::sort
    -   std::find
    -   std::lower\_bound
    -   std::upper\_bound
-   array
    -   std::array
-   bitset
    -   std::bitset
-   cmath
    -   std::abs
    -   std::pow
    -   std::sqrt
-   iomanip
    -   std::setprecision
-   iostream
    -   std::cin
    -   std::cout
    -   std::cerr
    -   std::endl
-   limits
    -   std::numeric\_limits
-   map
    -   std::map
-   numeric
    -   std::accumulate
-   set
    -   std::set
-   string
    -   std::string
-   utility
    -   std::pair
-   vector
    -   std::vector

## boost<a id="sec-2-2" name="sec-2-2"></a>

-   algorithm
    -   clamp.hpp
        -   boost::algorithm::clamp
-   math
    -   common\_factor\_rt.hpp
        -   boost::math::gcd
        -   boost::math::lcm

# LICENSE<a id="sec-3" name="sec-3"></a>

-   include/boost

Boost Software License - Version 1.0 - August 17th, 2003

# Reference<a id="sec-4" name="sec-4"></a>

-   [C++ Reference](https://en.cppreference.com/)
-   [C++日本語リファレンス](https://cpprefjp.github.io/)
-   [Boost C++ Libraries](https://www.boost.org/)