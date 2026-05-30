#include <iostream>  //C++ ka ek header file hai jo input aur output ke basic functions provide karta hai.

using namespace std;  //   C++ ka ek statement hai jo Standard Library (std) ke saare items ko directly use 
                      //    karne ki permission deta hai.


                      //    Without using namespace std:


                      //       #include <iostream>

                      //     int main() {
                      //      std::cout << "Hello";
                      //      return 0;
                      //     }


                      //With using namespace std:

                      
                      //   #include <iostream>
                      //   using namespace std;
                      
                      //   int main() {
                      //       cout << "Hello";  // std::cout likhne ki zaroorat nahi
                      //       return 0;
                      //   }
                      

int main(){
    cout<<"helo world";
    return 0;
}   