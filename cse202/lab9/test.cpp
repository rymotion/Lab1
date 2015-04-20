//Ryan Paglinawan
//Lab 9
//CSE202
#include "data.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  Data d1;
  Data d2;
  Data d3;

  d1.addData(10);
  d1.addData(20);
  d1.addData(30);

  d2.addData(10);
  d2.addData(20);
  d2.addData(30);

  d3.addData(10);
  d3.addData(25);
  d3.addData(30);

  if (d1 == d2){
    cout << "d1=d2" << endl;
  }
  if (d2 == d3){
    cout << "d2=d3" << endl;
  }
  else {
    cout << "d2 != d3" << endl;
  }

  cout << "d1 benchmark " << d1.getBenchmark() <<endl;
  cout << "d2 benchmark " << d2.getBenchmark() <<endl;
  cout << "d3 benchmark " << d3.getBenchmark() <<endl;

  d1.changeBenchmark(100);

  cout << "new d1 benchmark " << d1.getBenchmark() <<endl;
  cout << "new d2 benchmark " << d2.getBenchmark() <<endl;
  cout << "new d3 benchmark " << d3.getBenchmark() <<endl;
}