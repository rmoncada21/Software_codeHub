#include <iostream>

using namespace std;


int main(){
    int* num=new int(45);
    char* character=new char;
    *character='a';
    string* word=new string("Hola Mundo");

    cout << "numero "<<*num << endl;
    cout << "character " << *character << endl;
    cout << "word " << *word << endl;

    delete num;
    delete character;
    delete word;

    return 0;
}