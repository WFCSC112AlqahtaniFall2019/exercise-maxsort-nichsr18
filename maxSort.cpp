#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v(5);  // vector to be sorted
    // initialize v
    v.at(0)=6;
    v.at(1)=1;
    v.at(2)=3;
    v.at(3)=2;
    v.at(4)=1;


    // print the unsorted v

    print(v);

    // sort v
    maxSort(v);


    // print the sorted v
    print(v);


    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list){
    int current_max=0;
    for(int i=list.size()-1;i>=0;i--){
        current_max=0;
        for(int j=0;j<=i;j++){
            if(list.at(j)>list.at(current_max)){
                current_max=j;
            }
        }
        swap(list.at(current_max),list.at(i));
    }
}

// swap function
void swap(int& a, int&b){
    int temp=a;
    a=b;
    b=temp;
}

// print function
void print(const vector<int>& list){
    for(int i=0;i<list.size();i++){
        cout<<list.at(i)<<" ";
    }
    cout<<endl;
}

