#include<iostream>
using namespace std;
template <class T>
class Calculation{
        T var1,var2,var3;
    public:
        Calculation(T v1, T v2){
            var1=v1;
            var2=v2;
        }
        T addValue(){
            return var1+var2;
        }
};
int main(){
    Calculation <int>c1(10,5);
    cout<<c1.addValue()<<endl;
    Calculation <float>c2(10.55,5.55);
    cout<<c2.addValue()<<endl;
    return 0;
}
