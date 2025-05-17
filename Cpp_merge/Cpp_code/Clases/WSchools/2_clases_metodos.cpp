#include <iostream>
#include <string>

using namespace std;


class MyClass{
    public:
        void myMethod();
        string nameClass(string name);
};

void MyClass::myMethod(){
    cout << "Hello world\n";
}

string MyClass::nameClass(string name){
    return name;
}

int main(int argc, char* argv[]){
    MyClass myObjt;
    myObjt.myMethod();
    cout << myObjt.nameClass("Escuela de ciencias") << endl;

    return 0;
}