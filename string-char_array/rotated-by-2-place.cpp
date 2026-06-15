#include<iostream>
#include<string>
using namespace std;
void clockwiseRotaion(string &name){
    char temp = name[0];
    for(int i=1;i<name.size();i++){
        name[i-1]=name[i];
    }
    name[name.size()-1]=temp;
}
void anticlockwiseRotaion(string &name){
    char temp = name[name.size()-1];
    for(int i=name.size()-1;i>0;i--){
        name[i]=name[i-1];
    }
    name[0]=temp;
}        
int main(){
    string name ="devraj";
    string ans="vrajde";
    clockwiseRotaion(name);
    clockwiseRotaion(name);
    if(name==ans){
        cout<<"the string is rotated by 2 place";
       
    }
   anticlockwiseRotaion(name);
   anticlockwiseRotaion(name);
    if(name==ans){
          cout<<"the string is rotated by 2 place";
     }
     else{
         cout<<"the string is not rotated by 2 place";
     }
     return 0;


}