//
// Created by raatiniemi on 10/11/16.
//

#include <iostream>
#include "sequence.h"

const int number_of_sequences = 10;

int main() {
    raa::sequence sequence(0, 1);
    for (int i = 0; i < number_of_sequences; i++) {
        std::cout << sequence.get_value() << std::endl;

        sequence = sequence.next_sequence();
    }
}
