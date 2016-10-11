//
// Created by raatiniemi on 10/11/16.
//

#ifndef EXERCISES_CPP_SEQUENCE_H
#define EXERCISES_CPP_SEQUENCE_H

namespace raa {
    class sequence {
    public:
        sequence(int lhs, int rhs) : lhs(lhs), rhs(rhs) {};
        int get_value();
        sequence next_sequence();

    private:
        int lhs;
        int rhs;
    };
}

#endif //EXERCISES_CPP_SEQUENCE_H
