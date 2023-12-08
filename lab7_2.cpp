#include <iostream>
#include <string>
using namespace std;

int main()
{   string name;
    string movie ;
    string day ;
    string text;
    int gear ;
   cout << "Fahsai: Sawadee ka...Can you tell me your name?"<<"\n?????: " ;
 
   getline(cin,name) ;
   cout << "Fahsai: Wow!!! "<< name << " is a really cool name.\n";
   cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n"<<name<< ": ";
   cin >> gear ;

   cout << "Fahsai: I think you may be GEAR "<< gear/10000000-12 <<". I have a free movie ticket for you.\n" << "Fahsai: Let's go to the cinema together!!!\n"  ;

    cin.ignore() ; 
   
   cout << "Fahsai: What movie do you want to watch?"<<"\n"<< name << ": " ;
    getline(cin,movie) ;


   cout << "Fahsai: So....which day are you free to go with me?\n"<<name<< ": " ; 
    getline(cin,day) ;

   
   cout << "Fahsai: "<< day <<"....that is OK!!! I'm looking forward to watching "<< movie <<" with you.\n" ;
   cout << name<< ": " ;
   cin >> text ;
   cout << "Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/" ; 

  return 0;
}