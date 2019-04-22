#ifndef ITERATOR_H
#define ITERATOR_H

#include "node.h"

template <typename T> 
class Iterator {
    private:
        Node<T> *current;

    public:
        Iterator() {
            // TODO
        }

        Iterator(Node<T> *node) {
            // TODO
        }

        Iterator<T> operator=(Iterator<T> other) {          
            // TODO
            return *this;
        }

        bool operator!=(Iterator<T> other) {
            // TODO
            return false;
        }

        Iterator<T> operator++() {
            // TODO
            return *this;
        }

        Iterator<T> operator--() {
            // TODO
            return *this;
        }

        T operator*() {
            // TODO
            return current->data;
        }
};

#endif
