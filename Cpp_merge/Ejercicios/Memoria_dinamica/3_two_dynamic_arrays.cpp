#include <iostream>
#include <cstring>

#define ARRAY_SIZE 10
using namespace std;

void transfer_info(string* word, string copy){
    *word = copy;
}

void transfer_info(char* character, char* copy, int size){
    for(int i=0; i<size; i++){
        *(character+i)=*(copy+i);
    }
}

void cout_character(char* character, int size){
    for(int i=0; i<size; i++){
        cout<<*(character+i);
    }
}

int main(int argc, char* argv[]){
    string* word = new string[ARRAY_SIZE];
    int character_size=strlen(argv[2]);
    char* character = new char[character_size];

    transfer_info(word, argv[1]);
    cout<<"Palabra digita es: "<<*word<<endl;
    transfer_info(character, argv[2], character_size);
    
    cout << "Caracteres digitados es: ";
    cout_character(character, character_size);
    cout << endl;


    delete[] word;
    delete[] character;

    return 0;
}