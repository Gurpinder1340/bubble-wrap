#include <bn_color.h>
#include <bn_backdrop.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main()
{   
    bn::core::init();
    bn::backdrop::set_color(bn::color(20, 20, 31));  

    while (true)
    {
        // A button (X in mGBA) 
        if (bn::keypad::a_pressed())
        {  
            bn::backdrop::set_color(bn::color(31, 0, 0)); // red
        } 

        // B button (Z in mGBA)
        if (bn::keypad::b_pressed())
        {
            bn::backdrop::set_color(bn::color(0, 0, 31)); // blue
        }

        bn::core::update(); 
    }
}
