#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // Create and open a text file
    ofstream MyFile("number_file.txt");

    // Write to the file
    MyFile << 10;

    // Close the file
    MyFile.close();

    cout<<"File write(number) successfully";
    return 0;
}
