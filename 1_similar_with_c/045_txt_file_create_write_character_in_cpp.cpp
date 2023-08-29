#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ofstream MyFile("character_file.txt");
    MyFile << 'A';
    MyFile.close();
    cout<<"File write(character) successfully";
    return 0;
}
