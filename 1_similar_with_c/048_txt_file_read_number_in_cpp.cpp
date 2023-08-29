#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ifstream  MyFile("number_file.txt");
    int my_int;
    MyFile >> my_int;
    cout << my_int<<endl;
    MyFile.close();
    cout<<"File read(number) successfully";
    return 0;
}
