#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
    int i,n;
    float *element;
	cout<<endl<<endl<<"Pointer : Find the largest element using Dynamic Memory Allocation :"<<endl;
	cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<" Input total number of elements(1 to 100): ";
    cin>>n;
    element=(float*)calloc(n,sizeof(float));  // Memory is allocated for 'n' elements
    if(element==NULL){
        cout<<" No memory is allocated.";
        exit(0);
    }
    cout<<endl;
    for(i=0;i<n;++i){
       cout<<" Number "<<i+1<<": ";
       cin>>*(element+i);
    }
    for(i=1;i<n;++i){
       if(*element<*(element+i))
           *element=*(element+i);
    }
    cout<<" The Largest element is :  "<<*element<<endl<<endl;
    return 0;
}
