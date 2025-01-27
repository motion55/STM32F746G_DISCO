#include <gui/containers/CustomContainer1.hpp>

CustomContainer1::CustomContainer1()
{

}

void CustomContainer1::initialize()
{
    CustomContainer1Base::initialize();
}

void CustomContainer1::SetIconPos(int X, int Y)
{
	radioButton1.setXY(X, Y);
	invalidate();
}

void CustomContainer1::ButtonDeselected1()
{
    // Override and implement this function in CustomContainer1
	int X = radioButton1.getX();
	int Y = radioButton1.getY();
	application().ButtonDeselected1(X, Y);
}
