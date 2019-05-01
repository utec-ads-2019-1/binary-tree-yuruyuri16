#include <iostream>
#include "tester/tester.hpp"
#include "bstree.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Search Tree Practice" << endl;
    cout << "===========================================================" << endl << endl;

    //Tester::execute();
	BSTree<int> t;
	t.insert(13);
	t.insert(3);
	t.insert(14);
	t.insert(1);
	t.insert(4);
	t.insert(18);
	t.insert(2);
	t.insert(12);
	t.insert(10);
	t.insert(5);
	t.insert(11);
	t.insert(8);
	t.insert(7);
	t.insert(9);
	t.insert(6);
	t.insert(6);
	t.traverseInOrder();
	t.traversePreOrder();
	t.traversePostOrder();
	if (t.find(13) && t.find(3) && t.find(14) && t.find(1) && t.find(4) && t.find(18) && t.find(2) && t.find(12) && t.find(10) && t.find(5) && t.find(11) && t.find(8) && t.find(7) && t.find(9) && t.find(6))
	{
		std::cout << "x\n";
	}
	std::cout << *(t.begin()) << '\n';
    return EXIT_SUCCESS;
}
