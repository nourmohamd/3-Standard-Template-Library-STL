#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    // Unordered_MultiSet
    /*
        Note: Unordered_Set Doesn't Repeated Elements
        But
        ===
        Note: Unordered_MultiSet Repeated Elements

        - This is a differences between unordered_set & unordered_multiset

        Why We Learnning Unordered_MultiSet
        =====================================================
        1- Add|Delete|Search ===> O(1)
        2- Random_Access ===> [], at() Not Support
        3- Doesn't Agree To Change Storage Values
        4- Doesn't Agree To Change Key Of Values
        5- Elements Sorted
    */
    unordered_multiset<string> ums({"Sun", "Mon", "Tuth", "Wed", "Thur", "Thur", "Fri", "Sat"});
    for(auto i:ums) {
        cout<<i<<endl;
    }
    /*
        Output:
        =======
        Fri
        Thur
        Thur
        Tuth
        Sat
        Mon
        Wed
        Sun
    */
    return 0;
    system("PAUSE");
}
