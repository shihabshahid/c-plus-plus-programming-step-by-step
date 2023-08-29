#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ofstream MyFile("decimal_file.txt");
    MyFile << 12.12;
    MyFile.close();
    cout<<"File write(decimal) successfully";
    return 0;
}
