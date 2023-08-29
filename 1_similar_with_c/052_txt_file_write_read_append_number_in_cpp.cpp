#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int my_int,process;
    ofstream fout;
    fout.open("number_file.txt",ios::app);
    cout<<"--------file write----------"<<endl;
    while(1){
        cout<<"Type continue(1/0): ";
        cin>>process;
        if(process==1){
            cout<<"Type a number: ";
            cin>>my_int;
            fout<<my_int<<endl;
        }
        else{
            break;
        }
    }
    fout.close();
    cout<<"--------file read----------"<<endl;
    ifstream fin;
    fin.open("number_file.txt");
    while(fin>>my_int){
        cout<<my_int<<endl;
    }
    fin.close();
    return 0;
}
