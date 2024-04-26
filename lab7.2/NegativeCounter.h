#pragma once
#include <forward_list>
#include <algorithm>

class NegativeCounter {
private:
    std::forward_list<int> data;

public:
    NegativeCounter(const std::forward_list<int>& input_data) : data(input_data) {}
    int countNegativeElements() const;
};

