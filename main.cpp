#include <iostream>
using namespace std;


void flip(int &, int &, int &);


int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, green, blue;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


   flip(red, green, blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}


void flip(int & red, int & green, int & blue)
{
  int redTemp = red;
  int greenTemp = green;
  int blueTemp = blue;
  

  if(red > blue && red > green)
  {

    if(blueTemp > greenTemp)
    {
      green = blue;
      blue = greenTemp;

    }

    else if(greenTemp > blueTemp)
    {
      green = greenTemp;
      blue = blueTemp;
    }

  }

  if(green > red && green > blue)
  {
    red = green;

    if(redTemp > blueTemp)
    {
      green = redTemp;
      blue = blueTemp;

    }
    else if (redTemp < blueTemp)
    {
      green = blueTemp;
      blue = redTemp;
    }

  }

  if(blue > red && blue > green)
  {

    red = blue;

    if(redTemp > greenTemp) 
    {

      blue = redTemp;
      green = greenTemp;
    }

    else if(redTemp < greenTemp)
    {
      blue = redTemp;
    }

  }

}

