#ifndef ITERATOR_H
#define ITERATOR_H

#include "node.hpp"

template <typename T> 
class Iterator {
    private:
        Node<T> *current;

    public:
        Iterator() {
            // TODO
        }

        Iterator(Node<T> *node) : current(node)
		{
            // TODO
        }

        Iterator<T> operator=(Iterator<T> other) {          
            // TODO
        }

        bool operator!=(Iterator<T> other) {
            // TODO
        }

        Iterator<T> operator++() {
            // TODO
        }

        Iterator<T> operator--() {
            // TODO
        }

        T operator*()
		{
			return (current->data);
        }
};

#endif
