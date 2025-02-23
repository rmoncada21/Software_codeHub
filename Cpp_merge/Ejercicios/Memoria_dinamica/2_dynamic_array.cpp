#include <iostream>

#define ARRAY_SIZE 10
using namespace std;

void init_array(int* array, int size){

    for(int i=0; i<size; i++){
        *(array+i)=i;
    }
}

void print_array(int* array, int size){
    for(int i=0; i<size; i++){
        cout << *(array+i) << " - ";
    }
    
    cout<<endl;
}


void init_array(string* array, int size){

    for(int i=0; i<size; i++){
        *(array+i)="*";
    }
}

void print_array(string* array, int size){
    for(int i=0; i<size; i++){
        cout << *(array+i) << " - ";
    }
    
    cout<<endl;
}

int main(){
    int* ptr_iarray=new int[ARRAY_SIZE];
    string* ptr_sarray=new string[ARRAY_SIZE];

    init_array(ptr_iarray, ARRAY_SIZE);
    print_array(ptr_iarray, ARRAY_SIZE);

    init_array(ptr_sarray, ARRAY_SIZE);
    print_array(ptr_sarray, ARRAY_SIZE);


    delete[] ptr_iarray;
    return 0;
}