#include "juego.h"
#include <iostream>

Juego::Juego(){ //Constructor del juego
	std::cout << "Objeto Juego creado" << std::endl;
	std::cout << "Juego: Ventana creada" << std::endl;

	ventana.create(sf::VideoMode(ancho, alto), titulo, sf::Style::None); //Se crea la ventana
	ventana.setFramerateLimit(60); //Limitar cuadros por segundo
}

Juego::~Juego(){
	std::cout << "Objeto Juego destruido" << std::endl;
}

void Juego::ciclo(){ //Ciclo principal del juego
	while (ventana.isOpen())
	{
		// Event es un objeto donde se almacenan eventos, usado para iterar sobre todos los ocurridos 
		sf::Event evento;

		// Revisa todos los eventoc ocurridos desde la ultima ejecucion del ciclo
		while (ventana.pollEvent(evento))
		{
			// "close requested" event: we close the window
			if (evento.type == sf::Event::KeyPressed)
				ventana.close();
		}

		ventana.clear(); //Limpiar
		ventana.display();//Actualizar
	}
}