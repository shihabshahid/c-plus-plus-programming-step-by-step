#include<iostream>
using namespace std;
int sum_arr(int *p1){
    int sum = 0;
    for(int i=0;i<5;i++){
        sum=sum+*(p1+i);
    }
    return sum;
}
int main(){
    int arr[] = {9,8,3,6,2};
    int result = sum_arr(&arr[0]);
    cout<<"Sum Array address passing to function  = "<<result;
    return 0;
}
