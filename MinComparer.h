#pragma once

template <class Type1, class Type2>

class MinComparer {
public:
    Type1 Min(Type1 a, Type2 b) {
        return (a < b) ? a : b;
    }
};