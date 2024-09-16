#include <SFML/Graphics.hpp>

class Game
{
public:
    Game();        // Constructor: inicialitzo el joc
    void run();    // Mètode principal per al bucle del joc

private:
    void processEvents();    // Processa l'entrada de l'usuari i els esdeveniments
    void update(sf::Time deltaTime);  // Actualitzo la lògica del joc
    void render();           // Renderitzo l'escena del joc

    void handlePlayerInput(sf::Keyboard::Key key, bool isPressed); // Manejo l'entrada del jugador

private:
    sf::RenderWindow mWindow;           // La finestra principal del joc
    sf::RectangleShape mPlayer;         // Represento al jugador com un quadrat

    // Noves formes
    sf::RectangleShape mBarrierTop;     // Barrera a la part superior
    sf::RectangleShape mBarrierBottom;  // Barrera a la part inferior
    sf::RectangleShape mExtraSquare;    // Quadrat addicional a la dreta

    // Banderes de moviment
    bool mIsMovingUp;     // Indico si el jugador es mou cap amunt
    bool mIsMovingDown;   // Indico si el jugador es mou cap avall
    bool mIsMovingLeft;   // Indico si el jugador es mou cap a l'esquerra
    bool mIsMovingRight;  // Indico si el jugador es mou cap a la dreta

    const float PlayerSpeed = 100.f;    // Velocitat del jugador
    const sf::Time TimePerFrame = sf::seconds(1.f / 60.f); // Temps per fotograma per a 60 FPS
};
