// #include<iostream>
// #include<queue>
// using namespace std;
// int main (){

//     int time=0;

//     queue <int> q;
//     q.push(3);
//     q.push(2);
//     q.push(5);
//     q.push(1);
//     q.push(4);

//     int target =2;
//     while (target!=0)
//     {
//        if(q.front()==0){
//         q.pop();
//        time++;

//        }
//        else{

//         q.front()--;
//         q.push(q.front());
//         q.pop();
//        time++;


//        }

//        time++;
//        target--;

//     }

//     cout<<"the total time is:  "<<time;
    






// }

#include<iostream>
#include<queue>
using namespace std;

int main() {

    int tickets[] = {2,3,2};
    int n = 3;
    int k = 2;

    queue<int> q;
    for(int i=0;i<n;i++){
        q.push(i);   // store index
    }

    int time = 0;

    while(!q.empty()) {
        int i = q.front();
        q.pop();

        tickets[i]--;
        time++;

        if(i == k && tickets[i] == 0){
            break;
        }

        if(tickets[i] > 0){
            q.push(i);
        }
    }

    cout << "Time required: " << time;
    return 0;
}