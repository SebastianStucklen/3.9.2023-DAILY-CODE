#include <SFML/Graphics.hpp>

//function declaration
void drawShamrock(sf::RenderWindow& window, int x, int y);
void drawRainbow(sf::RenderWindow& window, int x, int y, int size);

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Shamrocks"); //set up game screen

	while (window.isOpen())//OMG GAME LOOP#######################################################
	{
		//input section--------------------------------
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close(); //let you close by pressing the top right "x" button
		}

		//render section-------------------------------
		window.clear();

		drawShamrock(window, 200, 200);
		drawShamrock(window, 400, 200);
		drawShamrock(window, 200, 400);
		drawShamrock(window, 400, 400);
		drawRainbow(window, 300, 600, 100);
		drawRainbow(window, 500, 600, 80);
		drawRainbow(window, 140, 600, 80);
		window.display();

	}//end game loop#############################################################################

} //end main


//function definition
void drawShamrock(sf::RenderWindow& window, int x, int y) {
	sf::CircleShape circle;
	sf::RectangleShape rect;
	circle.setRadius(30);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(x, y);
	window.draw(circle);

	circle.setRadius(30);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(x + 50, y);
	window.draw(circle);

	circle.setRadius(30);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(x + 25, y - 50);
	window.draw(circle);

	rect.setPosition(x + 45, y);
	rect.setFillColor(sf::Color(0, 100, 0));
	rect.setSize(sf::Vector2f(20, 80));
	window.draw(rect);
}

void drawRainbow(sf::RenderWindow& window, int x, int y, int size) {
	sf::CircleShape circle;
	sf::RectangleShape rect;
	circle.setRadius(size);
	circle.setFillColor((sf::Color(255, 39, 28)));
	circle.setPosition(x, y);
	window.draw(circle);

	circle.setRadius(size-10);
	circle.setFillColor((sf::Color(255, 134, 43)));
	circle.setPosition(x+10 , y+10);
	window.draw(circle);

	circle.setRadius(size-20);
	circle.setFillColor((sf::Color(250, 255, 74)));
	circle.setPosition(x+20, y+20);
	window.draw(circle);

	circle.setRadius(size-30);
	circle.setFillColor((sf::Color(0, 190, 76)));
	circle.setPosition(x + 30, y + 30);
	window.draw(circle);

	circle.setRadius(size-40);
	circle.setFillColor((sf::Color(40, 95, 248)));
	circle.setPosition(x + 40, y + 40);
	window.draw(circle);

	circle.setRadius(size - 50);
	circle.setFillColor((sf::Color(0, 0, 0)));
	circle.setPosition(x + 50, y + 50);
	window.draw(circle);

	rect.setPosition(x, y+size);
	rect.setFillColor(sf::Color(0, 0, 0));
	rect.setSize(sf::Vector2f(size*2, size));
	window.draw(rect);
}