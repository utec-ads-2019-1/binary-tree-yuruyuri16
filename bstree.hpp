#ifndef BSTREE_H
#define BSTREE_H

#include <stack>
#include <iostream>

#include "node.hpp"
#include "iterator.hpp"

template <typename T> 
class BSTree {
    private:
		typedef Node<T>* NodePointer;
        NodePointer root;
		int nodes;

    public:
        BSTree() : root(nullptr), nodes(0) {};

        bool find(T data) { 
			NodePointer *current;

			current = &root;
			while (*current != nullptr)
			{
				if ((*current)->data == data)
				{
					return true;
				}
				if (data < (*current)->data)
				{
					current = &(*current)->left;
				}
				else
				{
					current = &(*current)->right;
				}
			}
			return false;
        } 

        bool insert(T data) {
			NodePointer *current; 
			NodePointer newNode;

			current = &root;
			newNode = new Node<T>(data);
			while (*current != nullptr)
			{
				if (data == (*current)->data)
				{
					return false;
				}
				if (data < (*current)->data)
				{
					current = &(*current)->left;
				}
				else
				{
					current = &(*current)->right;
				}
			}
			*current = newNode;
			++nodes;
			return true;
        }

		bool remove(T data) {
            // TODO
        }

        unsigned int size() {
			return (nodes);
        }

        void traversePreOrder() {
            std::stack<NodePointer> s;
			NodePointer current;

			current = root;
			while (current != nullptr || s.empty() == false)
			{
				while (current != nullptr)
				{
					std::cout << current->data << ' ';
					s.push(current);
					current = current->left;
				}
				current = s.top();
				s.pop();
				current = current->right;
			}
			std::cout << '\n';
        }

        void traverseInOrder() {
			std::stack<NodePointer> s;
			NodePointer current;

			current = root;
			while (current != nullptr || s.empty() == false)
			{
				while (current != nullptr)
				{
					s.push(current);
					current = current->left;
				}
				current = s.top();
				s.pop();
				std::cout << current->data << ' ';
				current = current->right;
			}
			std::cout << '\n';
        }

        void traversePostOrder()
		{
			traversePostOrder(root);
			std::cout << '\n';
		}

		void traversePostOrder(NodePointer node)
		{
			if (node == nullptr)
			{
				return;
			}
			traversePostOrder(node->left);
			traversePostOrder(node->right);
			std::cout << node->data << ' ';
		}

        Iterator<T> begin() {
			return (Iterator<T>(root));
        }

        Iterator<T> end() { 
            // TODO
        }

        ~BSTree() {
            // TODO
        }
};

#endif
