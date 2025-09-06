#include <iostream>
#include <queue>
using namespace std;
int main() {
    // Queue From ( Adapter Container )
    /*
        Why We Learnning Queue Adapter Container When We Have Stack Adapter Container
        =============================================================================
        1- Queue Works On Fifo That Mean: ( First-In-First-Out )
        2- Queue Is Example About List And Deque
        3- Add|Remove ===> O(1)

        -Need To Use Library #include <queue>

        Notes:
        ======
        1- In First: front = back = -1 because not found any

        Methods:
        ========
        1- push(), emplace() ===> For Add Element To Queue
        2- pop() ===> For Remove Element From Queue
        3- front() ===> For Get First Element
        4- back() ===> For Get Last Element
        5- size() ===> For Get Size Of Element
        6- empty() ===> Give False If not empty And true If Stack is Empty
        7- swap() ===> For Swap Between Two Stacks
    */
    // Ex1:
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    cout<<q1.front()<<" - "<<q1.back()<<endl;
    // Output: 10 - 30

    // Ex2:
    queue<int> q2({10, 20, 30});
    q2.pop();
    q2.pop();
    cout<<q2.front()<<endl;
    // Output: 30

    // Ex3:
    queue<int> q3({60, 30, 40});
    while(!q3.empty()) {
        cout<<q3.front()<<" ";
        q3.pop();
    }
    cout<<endl;
    // Output: 60 30 40

    // Ex4: How To Storage Queue As List Or Deque
    queue<int, list<int>> q4;
    queue<int, deque<int>> q5;

    return 0;
    system("PAUSE");
}
