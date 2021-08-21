#include <iostream>
#include <list>

using namespace std;

void display (list<int>  &lst)
{
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << "  ";
    }

    cout<<endl;
}

int main()
{

    list<int> list1; //list of zero length
    
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(56);
    list1.push_back(12);
     display(list1);

     //REMOVING ELEMENTS FROM LIST 
    //  list1.pop_back();
    // list1.remove(9);
    // list1.pop_front();
    //   list1.pop_back();
    //SORTING IN LIST
    // list1.sort();
    //  display(list1);
    list1.reverse();
    display(list1);

    list<int> list2(3); //Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 56;
    iter++;
    *iter = 40;
    iter++;
    display(list2);
    // list1.sort();
    // list2.sort();
    list1.merge(list2);
    cout<<" After merging"<<endl;
    display(list1);


    return 0;
}