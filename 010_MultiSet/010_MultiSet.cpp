#include <iostream>
#include <set>
using namespace std;
int main() {
    // MultiSet Container From ( Associative Container )
    /*
        The MultiSet Like Set But It Different In Them
        In Repeated Elements
        In Set ===> Not Repeated Elements
        In MultiSet ===> Repeated Elements

        Note: All Methods In Set Found In MultiSet

        The Difference In Method Only In Count() Method:
        ================================================
        In Set: s.count(num) ===> For Check If Number Sended Has Find In Set(1) Or No(0)
        In MultiSet: ms.count(num) ===> For Get How Much Found Number In MultiSet
    */
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    cout<<ms.count(10);
    // Output: 4


    return 0;
    system("PAUSE");
}
