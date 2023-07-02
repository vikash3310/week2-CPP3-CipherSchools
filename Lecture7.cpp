
#include <iostream>
using namespace std;

class student{ string passcode;
friend class bestfriend;
protected:
int age;
// int, char, string, float..
public:
string name;
int id;
void into(){
cout <<"My name is "<<name<<", my id is "<<id<<"passcord is "<<passcode<<endl;
}
void setpass(string s,int a){
passcode = s;
age = a;
}
};
// friend class bestfriend;
class bestfriend{
public:
void sharingSecret (student s){ cout<<s.passcode<<s.age<<endl;
}
};
int main() {
    student s1;
s1.setpass("0001",10);
bestfriend bff;
// bff.sharingSecret (s1); hacker(s1);
//s1.passcode = "001";
return 0;
}