#pragma once //Solo añadimos el header una vez, para evitar errores de definiciones duplicadas
#include <SFML/Graphics.hpp>

class Juego{
public:
	Juego();
	~Juego();
	void ciclo();
private:
	short ancho = 800;
	short alto = 600;
	sf::String titulo = "Sistema Ferroviario";
	sf::RenderWindow ventana;
};
