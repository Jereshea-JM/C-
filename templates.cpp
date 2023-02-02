//Templates

#include<iostream>
using namespace std;
template <typename T> void sorting(T array[],int n){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(array[i]>=array[j]){
            T temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
}
 for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of elements: "<<endl;;
    cin>>n;
     cout<<"Integer Array"<<endl;;
    int int_array[n];
    for(int i=0;i<n;i++){
        cin>>int_array[i];
    }
    sorting<int>(int_array,n);
    cout<<"Char Array"<<endl;
    char char_array[n];
    for(int i=0;i<n;i++){
        cin>>char_array[i];
    }
    sorting<char>(char_array,n);

}