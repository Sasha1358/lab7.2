#include "NegativeCounter.h"
#include <algorithm>

int NegativeCounter::countNegativeElements() const {
    return std::count_if(data.begin(), data.end(), [](int i) { return i < 0; });
}
