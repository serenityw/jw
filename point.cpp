#include<iostream.h>
class point{
private:
	double x;
	double y;
public:
	point()
		:x(0),y(0)
	{}
	point(double newX,double newY)
		:x(newX),y(newY)
	{}
	point operator++(int);
	point operator--(int);
	point &operator++();
	point &operator--();
	void show()
	{
		cout<<this<<endl;
        cout<<"当前坐标为："<<"("<<x<<","<<y<<")"<<endl;
		cout<<endl;
	}

};
point point::operator++( int)
{
	point old(x,y);
	x++;
	y++;
	return old;
}

point point::operator--(int)
{
	point old(x,y);
	x--;
	y--;
	return old;
}
point& point::operator++( )
{
	x++;
	y++;
	return *this;
}
point& point::operator--( )
{
	x--;
	y--;
	return *this;
}
void main()
{
   point a(2,2);
   a.show ();
   a++;
   a.show ();
   ++a;
   a.show();
   point b(8,8);
   b.show ();
   b--;
   b.show ();
   --b;
   b.show ();
}
