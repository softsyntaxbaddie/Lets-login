#include<iostream>
#include<string>
using namespace std;

int main()
{
    string correctUsername = "admin";
    string correctPassword = "1234";

    string username, password;
    int attempts = 3;
    while(attempts> 0){
        cout<<"Enter the username: ";
        cin>> username;
        cout<<"Enter the password: ";
        cin>>password;

        if (username == correctUsername && correctPassword == password)
        {
            cout<<"\nLogin succesful! Welcome: "<<endl;
            return 0;
        }
    else{
        attempts--;
        cout<<"Incorrect username or password. "
            <<"Attempts left: "<< attempts <<"\n\n";
    }
}
cout<<"Too many failed attempts. Access Denied." <<endl;
return 0;
}
