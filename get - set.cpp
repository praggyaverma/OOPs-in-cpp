#include <bits/stdc++.h>
using namespace std;

// public - members are accessible from outside the class
// private - members cannot be accessed from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.


class Barbie{
    string ml;
  public:
    string name;
    string movie;
    int year;
    
    Barbie (){
        cout << "Barbie Object is created!" << endl;
    }
    
    void setML(string s){
        ml = s;
    }
    
    string getML(){
        return ml;
    }
    
    void print(){
        cout << "Name - " << name << endl;
    }
};

int main(){
    Barbie b1;
    b1.name = "Clara";
    b1.movie = "Nutcracker";
    b1.year = 2001;
    b1.setML("nutcracker man");
    
    cout << b1.getML() << endl;
    
    return 0;
}
