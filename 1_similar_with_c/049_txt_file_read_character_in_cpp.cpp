#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ifstream  MyFile("character_file.txt");
    char my_char;
    MyFile >> my_char;
    cout << my_char<<endl;
    MyFile.close();
    cout<<"File read(character) successfully";
    return 0;
}
