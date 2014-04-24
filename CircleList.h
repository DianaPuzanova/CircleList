
#ifndef __CircleList_H_
#define __CircleList_H_

#include <iostream>

using namespace std;

namespace Cl {

    typedef int Data;

    class CircleList {
    public:
        CircleList();
        ~CircleList();

        void push(Data dt);
        void pop();

        Data onTop();
        Data onEnd();

        bool isEmpty();
        void Clear();

        void show();

    private:
        struct Node{
            Data datum;
            Node *link;
        } *top, *bottom;
    };

}


#endif //__CircleList_H_
