#include <iostream>
using namespace std;

class GameWindow
{
private:
	int width, height;
public:
	GameWindow()
		: width(800), height(600)
	{ }
	GameWindow(const int width_, const int height_)
	{
		resizeWindow(width_, height_);
	}
	
	int getWidth() const
	{
		return width;
	}
	
	int getHeight() const
	{
		return height;
	}
	
	resizeWindow(const int width_, const int height_)
	{
		if(width_ < 800 || height_ < 600)
		{
			width = 800;
			height = 600;
		}
		else
		{
			width = width_;
			height = height_;
		}
	}
};

int main(void)
{
	GameWindow mainWindow(500, 768);
//	mainWindow.resizeWindow(1366, 768);
	cout << mainWindow.getWidth() << "x" << mainWindow.getHeight() << endl;
	return 0;
}
