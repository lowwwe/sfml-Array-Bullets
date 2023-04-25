#pragma once

#include <SFML/Graphics.hpp>

const int MAX_BULLETS = 10;

class Bullet
{
public:
	Bullet();
	Bullet(int t_x, int t_y);
	void setPosition(sf::Vector2f t_location);
	void setVelocity(sf::Vector2f t_velocity);
	void update();
	void draw(sf::RenderWindow& t_window);
	bool active{ false };
private:
	sf::CircleShape m_circle;	// circle
	sf::Vector2f m_velocity; // velocity
};

