#include<iostream>

using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }
	void ShowPosition() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
	friend bool operator==(const Point& pos1, const Point& pos2);
	friend bool operator!=(const Point& pos1, const Point& pos2);
private:
	int xpos, ypos;
};

bool operator==(const Point& pos1, const Point& pos2) {
	if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator!=(const Point& pos1, const Point& pos2) {
	if (pos1==pos2)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main() {
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3(10, 20);

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();

	if (pos1==pos2)
	{
		cout << "pos1과 pos2는 같다." << endl;
	}
	else
	{
		cout << "pos1과 pos2는 다르다." << endl;

	}

	if (pos2 == pos3)
	{
		cout << "pos2과 pos3는 같다." << endl;
	}
	else
	{
		cout << "pos2과 pos3는 다르다." << endl;

	}
	return 0;
}