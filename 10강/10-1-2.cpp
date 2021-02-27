#include<iostream>

using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }
	void ShowPosition() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
	Point operator+=(const Point& ref) {
		xpos += ref.xpos;
		ypos += ref.ypos;
		return *this;
	}

	Point operator-=(const Point& ref) {
		xpos -= ref.xpos;
		ypos -= ref.ypos;
		return *this;
	}
private:
	int xpos, ypos;
};

int main() {
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = (pos1 += pos2);
	Point pos4 = (pos1 -= pos2);

	pos1.ShowPosition();
	pos2.ShowPosition();
	(pos1 += pos2).ShowPosition();
	(pos1 -= pos2).ShowPosition();
	// pos1+pos2 상태에서 pos2를 감소시키므로 처음 pos1과 값이 같다.

	return 0;
}