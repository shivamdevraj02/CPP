/*

vector :-  A vector represents a dynamic sized array in the Standard Template Library(STL) that automatically grows when elements are added beyond current capacity.

initiallisation and declaration :--              
                  
vector<T> v;

where T is the data type of elements and v is the name assigned to the vector.

Also include the header file " #include <vector> "

inserting  the element :--

vector <int > v (size of vector ,initialise)

vector <int> v(4)

v.push_back(2)

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // vector <int> v(5);
    vector<int> v = {10, 20, 30};
    v.push_back(34);
    v.push_back(89);
    v.front(); // it gives the first element of vector
    v.back();  //  it gives the  last element of vector
    v.empty(); // check the vector is empty or not.

    cout << v.at(1) << endl; // Output: 20
    // cout << v.at(5);   // Error: out_of_range

    cout << v.front() << endl;

    // iterating in vetor:

    // for(auto i =0;i<v.size();i++){
    //     cout<<v[i];
    // }

    // v.begin();  //points to the first element.
    // v.end();  // points to the position just AFTER the last element (not the last element itself)

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    // v.rbegin(); ---> it is a reverse beginig.
    // v.rend(); ---> it is a reverse end.

       // for sorting :--

 
    sort(v.begin(), v.end());

    for (auto i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    //  sort(v.begin(),v.end()greater<data type>());

    sort(v.begin(), v.end(), greater<int>());  // --> for the decreasing order 

    // for delete

    v.pop_back(); // ---> for deleting the element

    v.erase(v.begin() + 2); // for deleting the any inner element of yhe vector

    // v.insert(v.begin()+1,iserting value)
    v.insert(v.begin() + 1, 500); // ---> for inserting any element in between

    // v.clear(); // ----> for deleting all the element

    // for copying one vector into the another vector :--

    vector<int> v1;

    v1 = v;



    // for binnary search :--

    cout<<binary_search(v.begin(),v.end(),55)<<endl; // it will return 1 if found other wise 0 .

    return 0;
}