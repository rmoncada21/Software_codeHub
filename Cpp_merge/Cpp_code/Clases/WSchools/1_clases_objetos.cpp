#include <string>
#include <iostream>


using namespace  std;

class MyClass{
    public:
        int myNum;
        string myString;
};

typedef MyClass myclass_t;

int main(int argc, char* argv[]){
    // crear objeto de la clase
    MyClass myObj;
    myclass_t typeObjet;

    // Acceder a los atributos de la clase
    // usando MyClass myObj;
    myObj.myNum=1;
    myObj.myString="abcd";

    cout << "myObj.myNum: " << myObj.myNum << endl;
    cout << "myObj.myString: " << myObj.myString << endl;

    //usando myclass_t typeObjet;
    typeObjet.myNum=2;
    typeObjet.myString="ABCD";

    cout << "typeObjet.myNum: " << typeObjet.myNum << endl;
    cout << "typeObjet.myString: " << typeObjet.myString << endl;

    return 0;
}