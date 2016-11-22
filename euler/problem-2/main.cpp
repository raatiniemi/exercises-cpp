//
// Created by raatiniemi on 11/22/16.
//

#include <iostream>
#include "../../algorithm/fibonacci/sequence.h"

bool is_even(raa::sequence &sequence);

int main() {
    int value_limit = 4000000;
    raa::sequence sequence(1, 2);

    long collected_value = 0;
    do {
        std::cout << "sequence value: " << sequence.get_value() << std::endl;
        if (is_even(sequence)) {
            collected_value += sequence.get_value();
        }

        sequence = sequence.next_sequence();
    } while(sequence.get_value() < value_limit);

    std::cout << "value is: " << collected_value << std::endl;

    return 0;
}

bool is_even(raa::sequence &sequence) { return 0 == sequence.get_value() % 2; }
