#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    // Unordered Map ( From Unordered Associative Containers )
    // =======================================================
    /*
        Add|Delete|Search ===> O(1)
        ===========================

        99% From Methods Same In Unordered_Set Container

        Notes
        =====
        1- Elements In Unordered_Map Not Sorted
        2- The Differences Between unordered_set and unordered_map is in map pair(Key, Value)
            Pair [Key | Value]
        3- Support Edit And Update And Add By [], at() ===> Support Random Access
        4- Doesn't Support Repeated Elements

        How can you create objects from unordered_map
        =============================================
        1- unordered_map<string, int> um;
        2- unordered_map<string, int> um { {"Kia", 2020}, {"Honda", 2025} };
        3- unordered_map<string, int> um ( { {"Kia", 2020}, {"Honda", 2025} } ); ===> By Parametrize Constructor

        [] And at()
        ===========
        1       at()
        ==
        If You want to print value by at() for key not found
        cout<<um.at("aaa"); ===> Error

        2       []
        ==
        It Give me zero
        cout<<um.at("aaa"); ===> 0

        Methods:
        ========

    */







    return 0;
    system("PAUSE");
}
