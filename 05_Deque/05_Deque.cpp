#include <iostream>
#include <deque>
#include <iterator>
using namespace std;
int main() {
    /*
        What Do You Learnning In Deque ?
        ================================
        1- Add From front|back ===> O(1)
        2- Slowly In Remove And Add From Middle ===> O(n)
        3- Slowly In Search ===> O(1)
    */
    //  Deque ===> From Sequence Container
    /*
        Reverse Vector(Quick In Add From Back Only) This Quick In Add From Two Directions Front, Back

        =====
        Need:
        =====
        1- #include <deque>

        ================================
        How To Create Object From Deque:
        ================================
        deque<int> q1 = {10, 20, 30};
        // 99% From Vector's Methods Found in Deque
        New Method In This Container:
        =============================
        1- d.push_front() ===> Add Element To begin of deque
        2- d1.insert(d1.begin(), 5, 'p') ===> Add In Begin Deque Five 'p'
        3- d1.clear() ===> After You Finish Your Work Make This Rule clear
    */

    // Ex1:
    deque<char> d1 = {'r', 'o', 'g', 'r', 'a', 'm', 'm'};
    d1.push_back('r');
    d1.push_front('P');
    for(int i=0;i<d1.size();i++) {
        cout<<d1[i]<<".";
    }
    cout<<endl;
    // Output: P.r.o.g.r.a.m.m.r.
    deque<char>::iterator it1 = d1.begin();
    for(;it1!=d1.end();it1++) {
        cout<<*it1<<".";
    }
    cout<<endl;
    // Output: P.r.o.g.r.a.m.m.r.
    d1.insert(d1.begin(), 3, 'A');
    deque<char>::iterator it2 = d1.begin();
    for(;it2!=d1.end();it2++) {
        cout<<*it2<<".";
    }
    cout<<endl;
    // Output: A.A.A.P.r.o.g.r.a.m.m.r.

    d1.clear();


    return 0;
    system("PAUSE");
}
