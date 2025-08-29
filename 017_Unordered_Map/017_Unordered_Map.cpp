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
        cout<<um.["aaa"]; ===> 0

        Methods:
        ========
        1- um.insert({one, two}); ===> For Insert Pair To unordered_map
        2- um.empty();
        3- um.size();
        4- um.max_size();
        5- um.insert_or_assign("key", 222); if found key update | or no add new key/value
        6- um.emplace() ===> Same Insert But Faster
        7- um.emplace_hint()
        8- um.try_emplace("Key", 123) ===> Search About Key
            If Found Key In um
            Doesn't Reserve Place in Memory

            If Not Found
            Will Add And Reserve Place For It In Memory
        9- um.erase()
        10- um.swap()
        11- um.extract() ===> For Edit On Key in um
        12- um.merge(um2) ===> For Merge Between Two unordered_map Or two map
        13- um.bucket("K1") ===> For Get Number Of bucket for element "K1"
        14- um.bucket_count() ===> For Get Number Of Bucket
        15- um.bucket_size(0) ===> For Get Size Of Bucket 0 Or 1 Or ...
        16- um.max_bucket_count() ===> For Get Max Number Of Bucket
        17- um.load_factor() ===> Get Number Of Elements That Can Take Bucket
            Lf = size/bucket_count
        18- um.max_load_factor() ===> Get Max Of Number Of Elements That Can Take Bucket
        19- um.rehash(100) ===> But Must 100 > bucket_count ===> For Rehash Elements
        20- um.reverse() ===> Reverse Elements
        21- um.find("a") ===> For Search About Key a in um
    */
    // Ex1: try_emplace
    unordered_map<string, int> um{{"A", 1}};
    cout<< um["A"]<<endl;
    // Output: 1
    um.try_emplace("B", 2);
    cout<< um["B"]<<endl;
    // Output: 1
    auto it = um.begin();
    um.try_emplace(it, "BA", 3);

    // Ex2: Bucket
    unordered_map<string, int> um2 ({{"A", 1}, {"B", 2}, {"C", 3}});
    int n = um2.bucket_count();
    for(int i=0;i<n;i++) {
        cout<<"Bucket Number #0"<<i<<": ";
        for(auto it = um2.begin(i);it != um2.end(i); it++) {
            cout<<"["<<it->first<<":"<<it->second<<"] ";
        }
        cout<<endl;
    }
    /*
        Output:
        =======
        Bucket Number #00: [B:2]
        Bucket Number #01:
        Bucket Number #02:
        Bucket Number #03:
        Bucket Number #04:
        Bucket Number #05: [C:3] [A:1]
        Bucket Number #06:
        Bucket Number #07:
        Bucket Number #08:
        Bucket Number #09:
        Bucket Number #010:
        Bucket Number #011:
        Bucket Number #012:
    */

    // Ex3: For Know How can search about element in unordered_map
    auto search = um2.find("A");
    if(search != um2.end()) {
        cout<<"Found"<<endl;
    } else {
        cout<<"Not Found"<<endl;
    }
    // Output: Found






    return 0;
    system("PAUSE");
}
