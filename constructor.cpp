#include <bits/stdc++.h>
using namespace std;

class Barbie{
  public:
    string name;
    string movie;
    int year;
    
    Barbie (){
        cout << "Barbie Object is created!" << endl;
    }
    Barbie(string n, string m, int y){
        cout << "Barbie Object is created with params!" << endl;
        name = n;
        movie = m;
        year = y;
    }
    
    void print(){
        cout << "Name - " << name << endl;
    }
    void printOutside();
};

void Barbie::printOutside(){
    cout << "this prints outside" << endl;
}

int main(){
    Barbie b1;
    b1.name = "Clara";
    b1.movie = "Nutcracker";
    b1.year = 2001;
    
    Barbie b2("Rapunzel", "Rapunzel", 2002);
    
    b1.print();
    b2.print();
    
    b1.printOutside();
    
    return 0;
}
