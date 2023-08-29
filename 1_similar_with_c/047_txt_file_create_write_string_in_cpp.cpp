#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ofstream MyFile("string_file.txt");
    MyFile << "ABCD";
    MyFile.close();
    cout<<"File write(string) successfully";
    return 0;
}
