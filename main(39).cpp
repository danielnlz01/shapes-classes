#include <iostream>
#include <string>
using namespace std;
#include "Classes.h"

int main() 
{
 
  // Rectangulo
  Rectangle r1(15, 9, "morado");
  r1.print();
  cout << endl;
  cout << "area=" << r1.getArea() << endl;
  cout << "\n";
 
  // Circulo
  Circle c1(134, "azul");
  c1.print();
  cout << endl;
  cout << "area=" << c1.getArea() << endl;
  cout << "\n";
 
  //Apuntadores a shape
  Shape * s1, * s2; 
  s1 = new Circle(121);
  s1->print(); 
  cout << endl;
  cout << "area= " << s1->getArea() << endl; 
  cout << "\n";

  s2 = new Rectangle(34, 67); 
  s2->print();  
  cout << endl;
  cout << "area= " << s2->getArea() << endl; 
  cout << "\n";
 
 
  Circle c3(13);
  Shape & s3 = c3;  
  s3.print();
  cout << endl;
  cout << "area= " << s3.getArea() << endl;
  cout << "\n";

  Circle c4(17);
  Shape * s4 = &c4; 
  s4->print();
  cout << endl;
  cout << "area= " << s4->getArea() << endl;
  cout << "\n";

  return 0;
}
