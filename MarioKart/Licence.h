#ifndef LICENCE_H
#define LICENCE_H

#include <SFML\Graphics.hpp>

/// <summary>
/// Name: Leo Carabini
/// ID: C00262339
/// Date: 4th February 2022
/// 
/// Code to display licence text.
/// 
/// </summary>
class Licence
{
public:
	Licence();
	~Licence();	

	void initialise(sf::Font& t_font); 
	void render(sf::RenderWindow& t_window);
	void update(sf::Time t_deltaTime); 

protected:
	sf::Font m_font;
	sf::Text m_message; 
	sf::Time m_cumulativeTime;

};

#endif // !LICENCE_H