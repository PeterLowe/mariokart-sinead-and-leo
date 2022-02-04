
#include "Licence.h"
#include "Game.h"

// Creates license page and will move to splash screen after a few seconds.

Licence::Licence()
{
}


Licence::~Licence()
{
}

void Licence::initialise(sf::Font& t_font)
{
	m_font = t_font;
	m_message.setFont(m_font);
	m_message.setString("Created by Sine Whooley and Leo Carabini");

	m_message.setFillColor(sf::Color::White);
	m_message.setCharacterSize(36);
	m_message.setPosition(0.0f, 70.0f);
	m_cumulativeTime = sf::seconds(0);
}