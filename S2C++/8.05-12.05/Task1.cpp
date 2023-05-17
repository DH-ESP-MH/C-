#include <iostream>

class Tree {
public:
    virtual void draw() const = 0;
};

class SimpleTree : public Tree {
public:
    void draw() const override {
        std::cout << "/\\" << std::endl;
    }
};

class ComplexTree : public Tree {
public:
    void draw() const override {
        std::cout << "/\\" << std::endl;
        std::cout << "/**\\" << std::endl;
    }
};

class CustomTree : public Tree {
public:
    void draw() const override {
        std::cout << "/\\" << std::endl;
        std::cout << "/++\\" << std::endl;
    }
};

int main() {
    Tree* treeTable[3];

    SimpleTree simpleTree;
    ComplexTree complexTree;
    CustomTree customTree;

    treeTable[0] = &simpleTree;
    treeTable[1] = &complexTree;
    treeTable[2] = &customTree;

    for (int i = 0; i < 3; ++i) {
        std::cout << "Drawing " << i + 1 << ":" << std::endl;
        treeTable[i]->draw();
    }

    return 0;
}