#include <iostream>
using namespace std;

struct FootballPlayer{
  string FirstName;
  string LastName;
  double weight;
  int number;
  string position;
}
;

int main(){
  FootballPlayer famuPlayer = {"Cedee","Lamb",213,12,"CB"};
  FootballPlayer chiefsPlayer = {"Patrick","Mahomes", 209, 2, "QB"};

  cout << "Famu player first name:" << famuPlayer.FirstName << endl;
  cout << "Famu player last name:" << famuPlayer.LastName << endl;
  cout << "Famu player weight:" << famuPlayer.weight << endl;
  cout << "Famu player number:" << famuPlayer.number << endl;
    cout << "Famu player position:" << famuPlayer.position << endl;

    cout << "Chiefs player first name:" << chiefsPlayer.FirstName << endl;
        cout << "Chiefs player last name:" << chiefsPlayer.LastName << endl;
    cout << "Chiefs player weight:" << chiefsPlayer.weight << endl;
    cout << "Chiefs player number:" << chiefsPlayer.number << endl;
    cout << "Chiefs player position:" << chiefsPlayer.position << endl;

    return 0;
}
