#include "CircleList.h"

Cl::CircleList::CircleList():
    top(nullptr), bottom(nullptr)
{

}

Cl::CircleList::~CircleList()
{
    Clear();
}

void Cl::CircleList::push(Data dt)
{
    Node *temp = nullptr;
    temp = new Node;

    temp->datum = dt;

    if (isEmpty()){
        top = temp;
        temp->link = temp;
    }
    else
    {
        temp->link = top;
        bottom->link = temp;
    }

    bottom = temp;
    temp = nullptr;
}

void Cl::CircleList::pop()
{
    if (top == bottom)
    {
        delete top;
        top = nullptr;
        bottom = nullptr;
        return;
    }

    if(!isEmpty())
    {
        top = top->link;
        delete bottom->link;
        bottom->link = top;
    }
}
Cl::Data Cl::CircleList::onTop()
{
    if (!isEmpty())
    {
        return top->datum;
    }
    return 2147483647;
}

Cl::Data Cl::CircleList::onEnd()
{
    if (!isEmpty())
    {
        return bottom->datum;
    }
    return 2147483647;
}

void Cl::CircleList::Clear()
{
    while(!isEmpty())
    {
        pop();
    }
}

bool Cl::CircleList::isEmpty()
{
    if  (top && bottom)
    {
        return false;
    }
    return true;
}

void Cl::CircleList::show()
{
    Node *temp;
    temp = top;

    do
    {
        cout<< temp->datum<<endl;
        temp = temp->link;
    } while(temp != top);

}
