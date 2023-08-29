#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ifstream  MyFile("decimal_file.txt");
    float my_decimal;
    MyFile >> my_decimal;
    cout << my_decimal<<endl;
    MyFile.close();
    cout<<"File read(decimal) successfully";
    return 0;
}
