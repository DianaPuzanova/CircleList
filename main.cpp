#include <iostream>
#include "CircleList.h"

using namespace std;
using namespace Cl;

int main()
{
    CircleList *circleList = new CircleList();
    int choice, datum;

    do
    {
        cout<<" 1 add new element\n 2 show list\n 3 show first\n 4 show last\n 5 delete first \n 6 clear list\n 7 exit\n";
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Enter value of new element: ";
                cin>>datum;
                circleList->push(datum);
                cout<<endl<<"Element is added";
                break;
            case 2:
            case 3:
            case 4:
            case 5:
                if (circleList->isEmpty())
                {
                    cout<<"List is empty";
                }
                else
                {
                    switch (choice)
                    {
                        case 2:
                            circleList->show();
                            break;
                        case 3:
                            cout<<"The first element is "<<circleList->onTop();
                            break;
                        case 4:
                            cout<<"The last element is "<<circleList->onEnd();
                            break;
                        case 5:
                            cout<<"Element is deleted";
                            circleList->pop();
                            break;
                    }
                }
                break;
            case 6:
                circleList->Clear();
                cout<<"List is cleared";
                break;
            case 7:
                break;
            default:
                cout<<"Enter number between 1 and 7";
                break;
        }

        cout<<endl<<endl;
    } while(choice!=7);

    delete circleList;

    return 0;
}
