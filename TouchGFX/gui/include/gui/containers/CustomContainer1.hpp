#ifndef CUSTOMCONTAINER1_HPP
#define CUSTOMCONTAINER1_HPP

#include <gui_generated/containers/CustomContainer1Base.hpp>

class CustomContainer1 : public CustomContainer1Base
{
public:
    CustomContainer1();
    virtual ~CustomContainer1() {}

    virtual void initialize();
    virtual void ButtonDeselected1();
    void SetIconPos(int X, int Y);
protected:
};

#endif // CUSTOMCONTAINER1_HPP
