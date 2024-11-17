#include<iostream>
using namespace std;
class Rectangle 
{
private:
	int x; 
	int y; 
	int height;
	int width;
public:
	int getX()//int x
	{
		return x;
	}
	int getY()//int y)
	{
		return y;
	}
	int getHeight()//int height)
	{
		return height;
	}
	int getWidth()//int width)
	{
		return width;
	}
	void setX(int n)
	{
		x = n;
	}
	void setY(int n)
	{
		y = n;
	}
	void setHeight(int n)
	{
		height = n;
	}
	void setWidth(int n)
	{
		width = n;
	}
	void show() //метод
	{
		cout << "X: " << getX() << " " << " Y: " << getY() << " " <<
			"Height: " << getHeight() << " " << "Width: " << getWidth() << " " << endl;
		/*cout << "X: " << getX(12) << " " << " Y: " << getY(22) << " " <<
			"Height: " << getHeight(7) << " " << "Width: " << getWidth(30) << " " << endl;*/
	}
};


int main()
{
	Rectangle p1;
	p1.setX(10);
	p1.setY(4);
	p1.setHeight(5);
	p1.setWidth(15);
	p1.show();
	return 0;
	system("pause");
}
