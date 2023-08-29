#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream  MyFile("string_file.txt");
    string my_string;
    MyFile >> my_string;
    cout << my_string<<endl;
    MyFile.close();
    cout<<"File read(string) successfully";
    return 0;
}
