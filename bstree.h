#ifndef BSTREE_H
#define BSTREE_H

#include "node.h"
#include "iterator.h"

template <typename T> 
class BSTree {
    private:
        Node<T> *root;

    public:
        BSTree() : root(nullptr) {};

        bool find(T data) { 
            // TODO
            return true;
        } 

        bool insert(T data) {
            // TODO
            return true;
        }

        bool remove(T data) {
            // TODO
            return true;
        }

        unsigned int size() {
            // TODO
            return 4;
        }

        void traversePreOrder() {
            // TODO
        }

        void traverseInOrder() {
            // TODO
        }

        void traversePostOrder() {
            // TODO
        }

        Iterator<T> begin() {
            // TODO
            return Iterator<T>(root);
        }

        Iterator<T> end() { 
            // TODO
            return Iterator<T>(nullptr);
        }

        ~BSTree() {
            // TODO
        }
};

#endif
