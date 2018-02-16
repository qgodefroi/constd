#include <qg/constd.hpp>

#include <array>

constexpr std::array arr{0, 1, 3, 4, 2, 1};
static_assert(constd::accumulate(arr.begin(), arr.end(), 3,
                                 std::plus{}) == 14);

int main() { return 0; }
