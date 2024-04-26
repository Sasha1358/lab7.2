#include <iostream>
#include <forward_list>
#include <ctime>
#include "NegativeCounter.h"

int main() {
    srand(unsigned(time(0)));
    int n;
    std::cout << "n =  ";
    std::cin >> n;

    // ��������� ������
    std::forward_list<int> lst;
    for (int i = 0; i < n; ++i) {
        lst.push_front(rand() % 100 - 50);
    }

    // �������� ������
    std::cout << "List: ";
    for (int i : lst)
        std::cout << i << " ";
    std::cout << std::endl;

    // ��������� ��'��� ����� NegativeCounter
    NegativeCounter counter(lst);

    // ���������� ������� ��'����� ��������
    int negativeCount = counter.countNegativeElements();

    std::cout << "Count of negative elements: " << negativeCount << std::endl;

    return 0;
}
