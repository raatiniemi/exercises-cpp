//
// Created by raatiniemi on 10/11/16.
//

#include "gtest/gtest.h"
#include "sequence.h"

TEST(sequence, get_value) {
    raa::sequence sequence(0, 1);

    EXPECT_EQ(1, sequence.get_value());
}

TEST(sequence, next_sequence) {
    raa::sequence sequence(0, 1);
    raa::sequence next_sequence = sequence.next_sequence();

    EXPECT_EQ(2, next_sequence.get_value());
}
