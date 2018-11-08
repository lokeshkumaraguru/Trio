#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void getGreatest(int &, int &, int &);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HEREi
  getGreatest(red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void getGreatest(int &r, int &g, int &b)
{

if(r < g)
{
  int temp = r;
  r = g;
  g = temp;
}

if(g < b)
{
  int temp = g;
  g = b;
  b = temp;
}

if(r < g)
{
  int temp = r;
  r = g;
  g = temp;
}

}

