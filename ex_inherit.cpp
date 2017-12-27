#include <iostream>

using namespace std;

class Shape
{
    public:
        void setWidth(int w)
        {
            Width = w;
        }
        
        void setHeight(int h)
        {
            Height = h;
        }
        
    protected:
        int Width;
        int Height;
};

class Square : public Shape
{
    public:
        int getSquare()
        {
            return (Width * Height);
        }
};

int main()
{
    Square AlphaRectangular;
    AlphaRectangular.setHeight(7);
    AlphaRectangular.setWidth(5);
    std::cout << "Area of AlphaRectangular: " << AlphaRectangular.getSquare() << std::endl;
}