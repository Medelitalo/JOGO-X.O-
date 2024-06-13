#include <SFML/Graphics.hpp> 

//desenhar linha
void DesenharLinha(sf::RenderWindow& Janela, sf::Vector2f PontoInicial, sf::Vector2f PontoFinal) {

	sf::Vertex line[] =
	{
		sf::Vertex(PontoInicial),
		sf::Vertex(PontoFinal)
	}; 
	Janela.draw(line, 2, sf::Lines); 
}

void DesenharQuadr(sf::RenderWindow& Janela, sf::Vector2f posicao, float size) {

	sf::RectangleShape quadrado(sf::Vector2f(size, size)); 
	quadrado.setPosition(posicao); 
	quadrado.setFillColor(sf::Color::Black); 
	Janela.draw(quadrado); 
}



int main() {

	sf::RenderWindow Janela(sf::VideoMode(400, 400), "Janela"); 

	int QtdBlocos = 9; 


	//Loop pricipal
	while (Janela.isOpen())
	{

		//verifica Eventos
		sf::Event Evento; 

		while (Janela.pollEvent(Evento)) {

			if (Evento.type == sf::Event::Closed)
			{
				Janela.close(); 
			}
		}


		Janela.clear(sf::Color(96, 96, 96)); 

		//desenhar linha 
		DesenharLinha(Janela, sf::Vector2f(130, 0), sf::Vector2f(130, 400)); 
		DesenharLinha(Janela, sf::Vector2f(270, 0), sf::Vector2f(270, 400));
		DesenharLinha(Janela, sf::Vector2f(0, 140), sf::Vector2f(400, 140)); 
		DesenharLinha(Janela, sf::Vector2f(0, 270), sf::Vector2f(400, 270)); 

		//desenhar quadrado 

		DesenharQuadr(Janela, sf::Vector2f(0.f, 5.f), 125.f); 
		DesenharQuadr(Janela, sf::Vector2f(138.f, 5.f), 125.f);
		DesenharQuadr(Janela, sf::Vector2f(275.f, 5.f), 125.f); 

		DesenharQuadr(Janela, sf::Vector2f(0.f, 142.f ), 123.f); 
		DesenharQuadr(Janela, sf::Vector2f(138, 142.f), 125.f); 
		DesenharQuadr(Janela, sf::Vector2f(275.f, 142.f), 125.f); 

		DesenharQuadr(Janela, sf::Vector2f(0.f, 275.f), 125.f); 
		DesenharQuadr(Janela, sf::Vector2f(138.f, 275.f), 125.f); 
		DesenharQuadr(Janela, sf::Vector2f(275.f, 275.f), 125.f); 
		
		Janela.display(); 

	}


}