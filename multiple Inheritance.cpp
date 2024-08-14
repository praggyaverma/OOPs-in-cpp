#include <bits/stdc++.h>
using namespace std;

// public - members are accessible from outside the class
// private - members cannot be accessed from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.


class Barbie{
  public:
    string movie = "Nutcracker";
    int year = 2001;
    
    void Fprint(){
        cout << movie << " " << year << endl;
    }
};

class Clara{
  public:
    string main = "Clara";
    
    void Sprint(){
        cout << main << endl;
    }
};

class Nutcracker: public Clara, public Barbie{
  public:
    string villian = "Mouse King";
    
    void Tprint(){
        cout << movie << " " << year << " " << main << " " << villian << endl;
    }
};

int main(){
    Nutcracker b1;
    
    b1.Fprint();
    b1.Sprint();
    b1.Tprint();
    
    return 0;
}
