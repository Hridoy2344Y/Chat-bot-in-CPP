#include <iostream>
using namespace std;//This line means that we are using standard functions from the namespace
int main(){
    string name;//This line defines that name is a Variable which is a string, In C++ we have to define data types of the variable
    cout<< "Whats your name: ";
    cin>>name;
    cout<<" So Hello "<< name<< "\n" <<" Nice to Meet you "<<"\n";
    int cl_ass;
    cout<< "Class: ";
    cin>>cl_ass;
    cout<<" So you are of class "<< cl_ass;
    return 0;//This returns 0 means that our program have executed succesfully and anything written after this will be ignored
}