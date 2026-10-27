//if else condition

#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin>>age;
    if (age>=18)
    {
        cout<<"Voter\n";

    }
    else
    {
        cout<<"Not voter\n";
    }
    

    switch (age)
    {
    case 1:
        cout<<"Adult\n";
        break;
    
    default:
        cout<<"Not Adult\n";
        break;
    }
    return 0;
}