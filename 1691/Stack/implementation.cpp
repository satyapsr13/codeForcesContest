#include <iostream>
using namespace std;
class stack
{

    int data;
    stack *next;
    stack *front;

public:
    stack *top = nullptr;
    void push(int val)
    {
        // stack *newNode = stack * new sizeof(stack);

        // create newNode
        stack *newNode = new stack;
        newNode->data = val;

        newNode->next = nullptr;
        if (top == nullptr)
        {
            front = top;
        }

        top = newNode;
    }
    void pop()
    {
        }
};
int main(int argc, char const *argv[])
{
    stack st;

    return 0;
}
