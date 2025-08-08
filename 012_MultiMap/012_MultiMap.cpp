#include <iostream>
#include <map>
using namespace std;
int main() {
    //  MultiMap Container From ( Associative Container )
    // Why You Learnning Multimap:
    // ===========================
    /*
        1- Support Repeated Keyes
        2- Cannot Support Direct Access at(), []
        3- Cannot Rewrite in key in any position
    */
    // Need #include <map>
    /*
        Notes For MultiMap:
        ===================
        1- Cannot Support Direct Access at(), []
        2- Cannot Rewrite in key in any position
        // Example
           auto it = m.begin();
           it->first = "B";
        3- count() ===> Get Number Of This Key In MultiMap

    */
    // Ex1:
        multimap<string, string> m1;
        // Error Cannot Support m1["name1"] = "Rony";

        // Add 2 Element:
        m1.insert({"name2", "Nour"});
        m1.insert({"name3", "Mustafa"});

        // Print All Values:
        for(auto i:m1)
            cout<<i.first<<" "<<i.second<<endl;
        /*
            Output:
            =======
            name2 Nour
            name3 Mustafa
        */




    return 0;
    system("PAUSE");
}
