#include<iostream>
using namespace std;
int main (){
    int i=9;

    //creating a reference variable ;

    // here we are just naming the daabba "i" with a another name "j";

    int& j=i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;



    // why we need refernce variable ??

    // when we are pasing a value into a another function then it will not send the original value it pass its copy value so their is no change will appear in the original value ..


    // pass by reference me memory same hi rhata he bs ek naya name de diya jata he




    return 0;
}



// note:---

// int n;
// cin>>n;
// int arr[n]; 

// it is bad practice hmlog array ka size variable nii dena chahiye 
// kyunki ye stack(static allocation) memory ka use krta he agr variable ka size jada hoga or utna hi space nii rahega stack ke pass then the programm will be crashed .



// so tackle this problem we will use the dynamic memory allocation which is (heap memory)

// to allocate memory in dynamic way we use 

// new char;   (ab ye dynamic way me memory allocate ho gya he)

// heap memory ek address return karta he so we gona use the pointer for it storing the data 

// char *ch =new char;    (so it will take total 9 byte =8 byte for pointer and 1 for char .)

//    |________|
//    |         |
//    |   710   |                          
//    |_________|
   
//         ch(stack memory)


//     |_________________________|
//    |                          |
//    |                          |
//    |                          |
//    |          same box of     |
//    |                          |
//    |    ( 710  )               |
//    |                          |                 |
//    |                          |
//    |__________________________|
//        heap memory


// for array :

// int *arr = new int [5];


// static allocation me memory automatic clean ho jata he jb outer bracket ko reach karta he but in heap memory ye proper clean nii hota then after alocationg all the space of heap memory program will crashed 


// while(true){
//     int i=5;
// }

// while(true){
//     int *ptr =new int;
    //    delete ptr;(so we use the delete  )
// }










/*Dynamic Memory Allocation

Memory program chalne ke baad allocate hoti hai.

int* p = new int;   // dynamic
*p = 10;


🧠 Memory → heap
Free karna padta hai:

delete p;

2️⃣ Static Memory (contrast)
int a = 10;   // static


🧠 Memory → stack

3️⃣ Dynamic Array
int* arr = new int[5];


Size runtime par decide hota hai.

4️⃣ Dynamic Object (OOP)
Hero* h = new Hero;


Object runtime par bana.

5️⃣ Dynamic Polymorphism

Runtime par function call decide hota hai
(virtual function)

class A {
public:
    virtual void show() {
        cout << "A";
    }
};

🔑 One-line definition (exam ready)

Dynamic means jo cheez program ke run time par allocate ya decide hoti hai, use dynamic kehte hain.

🔥 Real-life example

Static → Train ticket (fixed seat)

Dynamic → Bus ticket (seat availability runtime par)