/*The advantage of encapsulation and data hiding is that a non-member function
of the class cannot access a member data of that class. Care must be taken
using friend function because it breaks the natural encapsulation, which is
one of the advantages of object-oriented programming.*/
#include<iostream>
using namespace std;
class A{
    private:
        int a;
    public:
        A(){
            a=0;
        }
	friend class B; // Friend Class
};
class B{
    private:
        int b;
    public:
        void showA(A& x){
            // Since B is friend of A, it can access
            // private members of A
            cout << "A::a=" << x.a;
        }
};
int main(){
	A a;
	B b;
	b.showA(a);
	return 0;
}
