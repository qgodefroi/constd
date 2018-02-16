#pragma once

namespace constd {

/*
 * Fill a range of iterators with a specific value
 */
template <class Iterator, class T>
constexpr void fill(Iterator begin, Iterator end,
                    T const& val) noexcept {
    for (; begin != end; ++begin) {
        *begin = val;
    }
}

/*
 * Copy a range of iterators to an output iterator
 */
template <class InputIterator, class OutputIterator>
constexpr void copy(InputIterator begin, InputIterator end,
                    OutputIterator out) noexcept {
    for (; begin != end; (void)++begin, ++out) {
        *out = *begin;
    }
}

/*
 * Fold a range of iterators with a function object
 */
template <class Iterator, class T, class Func>
constexpr T accumulate(Iterator begin, Iterator end, T init,
                       Func&& func) noexcept(noexcept(func(init,
                                                           *begin))) {
    for (; begin != end; ++begin) {
        init = func(init, *begin);
    }
    return init;
}
}  // namespace constd
