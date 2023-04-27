/// <summary>
/// author Pete Lowe Arpil 2023
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// new comment
/// </summary>
#include <SFML/Graphics.hpp>
#include "Bullet.h"

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();
	
private:
	sf::FloatRect m_targetFloat;
	sf::IntRect m_targetInt;
	void processEvents();
	void processKeys(sf::Event t_event);
	void processMouseClick(sf::Event t_event);

	void update(sf::Time t_deltaTime);
	void render();
	void setupTarget();

	void setupFontAndText();
	void setupSprite();
	int findNextBullet();

	Bullet m_bullets[MAX_BULLETS];// bullets
	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	sf::Texture m_logoTexture; // texture used for sfml logo
	sf::Sprite m_logoSprite; // sprite used for sfml logo
	bool m_exitGame; // control exiting game

};

#endif // !GAME_HPP

