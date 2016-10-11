//
// Created by raatiniemi on 10/11/16.
//

#include "sequence.h"

int raa::sequence::get_value() {
    return lhs + rhs;
}

raa::sequence raa::sequence::next_sequence() {
    return raa::sequence(rhs, get_value());
}
