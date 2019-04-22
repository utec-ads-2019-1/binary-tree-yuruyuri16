#ifndef TESTER_H
#define TESTER_H

#include <stdexcept>
#include <iostream>
#include <assert.h>

#include "../mocker/mocker.h"
#include "../bstree.h"

using namespace std;

#define NUMBER_OF_TESTS 1000

class Tester {
    public:
        static void execute();
};

#endif