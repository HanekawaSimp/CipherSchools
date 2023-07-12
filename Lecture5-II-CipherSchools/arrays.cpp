#include <iostream>
using namespace std;
int main(){
 int a[10]; 

 cout<<"Enter 10 integers in the array"<<endl;

 for(int i=0; i<10; i++){
  
  cin>>a[i];

}
 
 for(int i=0; i<10; i++){
  
  cout<<a[i] << endl;

}

 cout<<"Printing in reverse order"<<endl;
 
 for(int i=9; i>=0; i--){
  
  cout<<a[i] << endl;

}
return 0;
}