//
// Created by 이동우 on 9/21/24.
//
#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {

    array<string, 10> arr{};

    for (auto &i: arr) {
        cin >> i;
    }

    for (int j = arr.size() - 1; j >= 0; j--) {
        cout << arr[j];
    }

    return 0;
}
