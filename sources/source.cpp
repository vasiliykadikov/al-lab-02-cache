// Copyright 2020 vasiliykadikov@inbox.ru

/*
L1 = 256 kb
L2 = 1.0 mb (1024 kb)
L3 = 6.0 mb (6144 kb)
128 <  256 < 512 < 1024 < 2048 < 4096 < 8192 < 9216
0.125 < 0.25 < 0.5 < 1 < 2 < 4 < 8 < 9
*/
#include <iostream>
#include <algorithm>
#include <ctime>
#include <random>

#define MULT(x) x x x x x x x x x x x x x x x x

void print_time(int array_size, double c_end,
    double c_begin, int j) {
    auto time = (!!j) * (c_end - c_begin)
        / (CLOCKS_PER_SEC * 0.04096);
    std::cout << "\n        input_data:\n" << "          buffer_size: ";
    std::cout << array_size << "kb\n" << "        results:\n";
    std::cout << "          duration: " << time << "ns\n";
}
void straight_method(int array_size) {
    int* arr = new int[array_size * 1024 / 4];
    for (int i = 0; i < array_size * 1024 / 4 - 17; i += 16) {
        arr[i] = i + 16;
    }
    arr[array_size * 1024 / 4 - 16] = 0;
    int j = 0;
    auto c_begin = std::clock();
    for (int i = 0; i < 10'000; ++i) {
        MULT(MULT(MULT(j = arr[j];)));
    }
    auto c_end = std::clock();
    j++;
    print_time(array_size, c_end, c_begin, j);
    delete[] arr;
}

void back_method(int array_size) {
    int* arr = new int[array_size * 1024 / 4];
    for (int i = array_size * 1024 / 4 - 16; i > 1; i -= 16) {
        arr[i] = i - 16;
    }
    arr[0] = array_size * 1024 / 4 - 16;;
    int j = 0;
    auto c_begin = std::clock();
    for (int i = 0; i < 10'000; ++i) {
        MULT(MULT(MULT(j = arr[j];)));
    }
    auto c_end = std::clock();
    j++;
    print_time(array_size, c_end, c_begin, j);
    delete[] arr;
}

void random_method(int array_size) {
    int* arr = new int[array_size * 1024 / 4];
    std::vector<int> index;
    for (int i = 0; i < array_size * 1024 / 4; i += 16) {
        index.push_back(i);
    }
    std::random_shuffle(index.begin(), index.end());
    for (int i = 0; i < array_size * 1024 / 4; i += 16) {
        arr[i] = index[i / 16];
    }
    arr[0] = array_size * 1024 / 4 - 16;;
    int j = 0;
    auto c_begin = std::clock();
    for (int i = 0; i < 10'000; ++i) {
        MULT(MULT(MULT(j = arr[j];)));
    }
    auto c_end = std::clock();
    j++;
    print_time(array_size, c_end, c_begin, j);
    delete[] arr;
}

int array_checks(int array_size) {
    if (array_size < 512) {
        array_size += 16;
    } else if (array_size < 1536) {
        array_size += 64;
    } else if (array_size <= 8 * 1024) {
        array_size += 256;
    }
    return array_size;
}
void f_print() {
    int L1_begin = 64;
    int L3_end = 8*1024;

   int array_size = L1_begin;
   std::cout << "  investigaion:\n    travel_order: straight\n";
   std::cout << "    experiments:\n";
   int exp = 1;
   while (array_size <= L3_end) {
        std::cout << "    - experiment:\n        number: " << exp;
        straight_method(array_size);
        array_size = array_checks(array_size);
        exp++;
    }

    array_size = L1_begin;
    std::cout << "  investigaion:\n    travel_order: straight\n";
    std::cout << "    experiments:\n";
    exp = 1;
    while (array_size <= L3_end) {
        std::cout << "    - experiment:\n        number: " << exp;
        back_method(array_size);
        array_size = array_checks(array_size);
        exp++;
    }

    array_size = L1_begin;
    std::cout << "  investigaion:\n    travel_order: straight\n";
    std::cout << "    experiments:\n";
    exp = 1;
    while (array_size <= L3_end) {
        std::cout << "    - experiment:\n        number: " << exp;
        random_method(array_size);
        array_size = array_checks(array_size);
        exp++;
    }
}

int main() {
    f_print();
    return 0;
}
