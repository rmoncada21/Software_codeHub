#include <iostream>

#define ARRAY_SIZE 10
using namespace std;


typedef struct person{
    string name;
    int id;
}person_t;


int main(int argc, char* argv[]){
    person_t* person1 = new person_t();

    person1->name = "Person1";
    person1->id = 123456;

    cout << "Name: " << person1->name << " - id: " << person1->id << endl;

    return 0;
}