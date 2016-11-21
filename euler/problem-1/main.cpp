//
// Created by raatiniemi on 11/21/16.
//

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> produce_numbers(std::vector<int> factors, int max_limit) {
    std::vector<int> produced_numbers;

    for (auto factor : factors) {
        for (int number = 1; number < max_limit; number++) {
            int product = factor * number;

            if (product >= max_limit) {
                break;
            }

            produced_numbers.push_back(product);
        }
    }

    std::sort(produced_numbers.begin(), produced_numbers.end());
    return produced_numbers;
}

int main() {
    const int max_limit = 1000;
    const std::vector<int> factors = {3, 5};

    const std::vector<int> produced_numbers = produce_numbers(factors, max_limit);

    long sum_of_produced_numbers = 0;
    for (auto produced_number : produced_numbers) {
        sum_of_produced_numbers += produced_number;
    }

    std::cout << "sum: " << sum_of_produced_numbers << std::endl;

    return 0;
}
