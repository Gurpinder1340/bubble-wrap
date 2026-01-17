#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>
#include <bn_color.h>
#include <bn_backdrop.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main()
{
    bn::core::init();
    // bn::sprite_ptr eyeL = bn::sprite_items::dot.create_sprite(-20, -20);
    // bn::sprite_ptr eyeR = bn::sprite_items::dot.create_sprite(20, -20);

    // bn::sprite_ptr mouth1 = bn::sprite_items::dot.create_sprite(-20, 20);
    // bn::sprite_ptr mouth2 = bn::sprite_items::dot.create_sprite(0, 25);
    // bn::backdrop::set_color(bn::color(20, 20, 31));


bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(-40, 40);
bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(-30, 40);
bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(-20, 40);
bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-10, 40);
bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(0, 40);
bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(10, 40);
bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(20, 40);
bn::sprite_ptr myCircle8 = bn::sprite_items::dot.create_sprite(30, 40);
bn::sprite_ptr myCircle9 = bn::sprite_items::dot.create_sprite(40, 40);


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

        // Left Button
        if (bn::keypad::left_pressed())
        {
            bn::backdrop::set_color(bn::color(0, 31, 0)); // green
        }

        // Right Button
        if (bn::keypad::right_pressed())
        {
            bn::backdrop::set_color(bn::color(31, 31, 0)); // yellow
        }

        bn::core::update();
    }
}
