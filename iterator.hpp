#ifndef ITERATOR_H
#define ITERATOR_H

#include <stack>

#include "node.hpp"

template <typename T> 
class Iterator {
    private:
        Node<T> *current;
		std::stack<Node<T>*> st;

    public:
        Iterator() : current(nullptr)
		{
        }

        Iterator(Node<T> *node) : current(node)
		{
			while (current->left != nullptr)
			{
				st.push(current);
				current = current->left;
			}
			st.push(current);
        }

        Iterator<T> operator=(Iterator<T> other) {          
            this = other;
			return (*this);
        }

        bool operator!=(Iterator<T> other) {
            return (current != other.current);
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
