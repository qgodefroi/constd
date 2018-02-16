Constd - Constexpr standard library algorithms
----------------------------------------------

``` c++
constexpr std::array arr{0, 1, 3, 4, 2, 1};
static_assert(constd::accumulate(arr.begin(), arr.end(), 3,
                                 std::plus{}) == 14);
```

This single header lib is a rewrite of C++ standard library algorithms to enable their use in constexpr contexts.

It is woefully incomplete: I add algorithms as I need them in various C++ projects.

Clarity and simplicity are prioritised over extreme performance optimisations as can be found in some compiler's standard libraries. For runtime-only code, std:: algorithms should generally be prefered. For the kinds of simple structures and iterators (often raw pointers) used in most constexpr-enabled code, modern compilers should have little trouble optimising the algorithms anyway, but I make no promises.