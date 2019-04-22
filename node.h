#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
    private:
        T data;
        Node<T> *left;
        Node<T> *right;

    friend class BSTree; 
};

#endif