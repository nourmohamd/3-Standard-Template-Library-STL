#include <iostream>
#include <queue>
using namespace std;
int main() {
    // Priority Queue From ( Adapter Container )
    /*
        - Need to use #include<queue>

        It's Elements Are Sorted: Ascending | Descending

        Notes:
        - In this type from containers can find max and min element easly because it is sorted O(1)
        - The top stay in max element and when we remove an element the top move to next element and
          remove max element
                   top old_top
          [40, 50, 60, Remove, .....]

        Methods:
        1- push(), emplace() ===> For Add Element To pq
        2- pop() ===> Remove element
        3- swap() ===> Swap Between Two pq
        4- size() ===> Get Size Of pq
        5- top() ===> Return Max Element
        6- empty() ===> For Check On pq
    */

    // Ex1:
    priority_queue<int> q;
    q.push(50);
    q.push(40);
    q.push(60);
    while(!q.empty()) {
        cout<<q.top()<<endl;
        q.pop();
    }
    // 60 50 40

    // Ex2: Storage priority_queue As deque, vector
    priority_queue<int, vector<int>> pq1;
    priority_queue<int, deque<int>> pq2;
    // Note: If you want to stand top on the min element
    priority_queue<int, vector<int>, greater<int>> pq3;
    pq3.push(50);
    pq3.push(20);
    pq3.push(10);
    pq3.push(60);
    while(pq3.size() != 0) {
        cout<<pq3.top()<<" ";
        pq3.pop();
    }
    // Output: 10 20 50 60
    // The Natural Mode For priority_Queue Is:
    // priority_queue<int, vector<int>, less<int>> pq;



    return 0;
}
