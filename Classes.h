#include <iostream>
#include <string>
using namespace std;

class Shape
{
  private: 
    string color;
	
  public:
    Shape(string color = "rojo")
    {
      this->color = color;
    }
    string getColor()
    {
      return this->color;
    }
    void setColor(string color)
    {
      this->color = color;
    }
    virtual void print()
    {
      cout << "Figura de color = " << color;
    }
  	virtual double getArea() = 0;
};

class Rectangle : public Shape
{
	private:
		int length;
		int width;
	
	public:
		Rectangle(int length = 1, int width = 1)
		{
			this->length = length;
			this->width = width;
		}		
    Rectangle(int length, int width, string color) : Shape(color)
		{
			this->length = length;
			this->width = width;
		}
		int getLength()
		{
			return this->length;
		}
		void setLength(int length)
		{
			this->length = length;
		}
		int getWidth()
		{
			return this->width;
		}
		void setWidth(int width)
		{
			this->width = width;
		}
		void print()
		{
			cout << "Rectángulo de longitud: " << this->length << " Ancho: " << this->width << endl;
      cout << "Subclase de ";
			Shape::print();
		}
		double getArea()
		{
			return this->length * this->width;
		}
};

class Circle : public Shape
{
  private:
    int radius;

  public:
    Circle(int radius = 1)
		{
      this->radius = radius;
    }
    Circle(int radius, string color) : Shape(color)
		{
      this->radius = radius;
    }
    int getRadius()
		{
      return this-> radius;
    }
    void setRadius(int radius)
		{
      this->radius = radius;
    }
    double getArea()
		{
      return 3.1416 * this->radius * this->radius;
    }
    void print()
		{
      cout << "Circulo radio: " << this->radius<< " " << endl;
      cout << "Subclase de "<< " ";
      Shape :: print();
    }
};
