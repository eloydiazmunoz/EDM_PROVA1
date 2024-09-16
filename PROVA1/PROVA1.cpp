#include <iostream>
#include <SFML/Window.hpp>
#include "game.h"


int main()
{
    sf::Window window(sf::VideoMode(300, 200), "The title");
    Game joc;
    joc.run();

    return 0;
}
