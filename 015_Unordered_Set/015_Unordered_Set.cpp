#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    // Unordered_Set From ( Unordered Associative Container )
    // ======================================================
    /*
        About
        =====
        - Need To Implements #include <unordered_set>

        Methods:
        ========
        1- us.bucket(s) ===> For Know Every Element In Any Bucket Found ( s ===> Loop )
        2- us.bucket_count() ===> Get Number Of Buckets
        3- us.bucket_size(i) ===> Get Size Of Bucket i
        ====Note: Every Bucket Can Content A Number Of Element ( Not Infinite )
        4- us.size() ===> For Get Size Of us
        5- us.bucket(i) ===> For Get Bucket That Contains Element i
        6- us.load_factor() ===> Get Number Of Element These Bucket Can Load Them ( Approximate value )
        ====load_factor=us.size()/us.bucket_count()
        7- us.max_load_factor() ===> Get Max Number Of Element These Bucket Can Load Them ( Approximate value )
        8- us.max_bucket_count() ===> Get Max Number Of Buckets
        9- us.insert({"El1", "El2"}) ===> For Add Element Or More Element To Unordered_Set
        10- us.insert(a, a+2) ===> For Add Array To Unordered_Set
        ==== But string s[] = {"a1", "a2"};
        11- us.emplace() And us.emplace_hint() ===> Same Before In Set
        12- us.erase(us.begin()) ===> Remove First Element But Depending On Bucket
        ==== auto it = us.begin();
        ==== us.erase(*it);
        ==== And Can Erase us.erase("Sun");
        ==== And Can Erase Range us.erase(us.find("Wed"), us.end());
        13- us.hash_function() ===> This Function Catch Every Element From us And Make Some Work For Storage This Element In Somewhere
            With Iterator
        14- Other Methods: empty(), clear(), count(), reverse(), swap()
        Note: If All Elements Storage In Same Bucket Solve This Problem With rehash
        15- us.rehash(100) ===> But 100 > us.bucket_count()
        Note: If your want to repeat element in unordered_set use unordered_multimap

    */

    // Ex1:
    unordered_set<string> us1;
    // Ex2:
    unordered_set<string> us2 ({"Sun", "Mon", "Tuth", "Wed", "Thur", "Fri", "Sat"});
    for(auto i: us2) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: Sat Fri Wed Tuth Mon Thur Sun

    // Print All Buckets
    for(auto i: us2) {
        cout<<i<<" "<<us2.bucket(i)<<endl;
    }
    /*
        Output:
        =======
        Sat 11
        Fri 2
        Wed 2
        Tuth 0
        Mon 0
        Thur 12
        Sun 12
    */

    // Ex3: Print All Buckets With Elements In Them
    int c = us2.bucket_count();
    for(int i=0;i<c;i++) {
        cout<<"Bucket # 0"<<i<<" Contains:\n";
        for(auto it1 = us2.begin(i);it1!=us2.end(i);it1++) {
            cout<<*it1<<" ";
        }
        cout<<endl;
    }
    /*
        Output:
        =======
        Bucket # 01 Contains:

        Bucket # 02 Contains:
        Fri Wed
        Bucket # 03 Contains:

        Bucket # 04 Contains:

        Bucket # 05 Contains:

        Bucket # 06 Contains:

        Bucket # 07 Contains:

        Bucket # 08 Contains:

        Bucket # 09 Contains:

        Bucket # 010 Contains:

        Bucket # 011 Contains:
        Sat
        Bucket # 012 Contains:
        Thur Sun
    */
    // Ex4: Print Size Of Every Bucket Without Nested Loops
    int d = us2.bucket_count();
    for(int i=0;i<d;i++) {
        cout<<"Bucket #0"<<i<<" ---> "<<us2.bucket_size(i)<<endl;
    }
    /*
        Output:
        =======
        Bucket #00 ---> 2
        Bucket #01 ---> 0
        Bucket #02 ---> 2
        Bucket #03 ---> 0
        Bucket #04 ---> 0
        Bucket #05 ---> 0
        Bucket #06 ---> 0
        Bucket #07 ---> 0
        Bucket #08 ---> 0
        Bucket #09 ---> 0
        Bucket #010 ---> 0
        Bucket #011 ---> 1
        Bucket #012 ---> 2
    */
    // Ex5: hash_function
    unordered_set<string>::hasher fn;
    fn = us2.hash_function();
    cout<<fn("AaaAA")<<endl;
    // Output: Number For Storage AAA In us






    return 0;
    system("PAUSE");
}
