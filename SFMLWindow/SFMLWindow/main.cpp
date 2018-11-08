/*
    SFML Window Example
    Based on: https://www.sfml-dev.org/tutorials/2.5/window-window.php
*/

#include <SFML/Window.hpp>

int main(int, char const**)
{
    // Create the window
    sf::Window window;
    window.create(sf::VideoMode(800, 600), "My window");
    
    // Prevents tearing
    window.setVerticalSyncEnabled(true);
    
    // Run the program as long as the window is open
    while (window.isOpen())
    {
        
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }
    
    return 0;
}
