#include "Bullet.h"

Bullet::Bullet()
{
	m_circle.setRadius(5.0f);
	m_circle.setFillColor(sf::Color::Black);
}

Bullet::Bullet(int t_x, int t_y)
{
	m_circle.setRadius(5.0f);
	m_circle.setFillColor(sf::Color::Black);
	m_circle.setPosition(static_cast<float>(t_x),
		static_cast<float>(t_y));
	m_velocity.x = 1.0f;
	m_velocity.y = 1.0f;
}

void Bullet::setPosition(sf::Vector2f t_location)
{
	m_circle.setPosition(t_location);
}

void Bullet::setVelocity(sf::Vector2f t_velocity)
{
	m_velocity = t_velocity;
}

void Bullet::update()
{
	if (active)
	{
		m_circle.move(m_velocity);
		if (m_circle.getPosition().x > 800.0f)
		{
			active = false;
		}
	}
}

void Bullet::draw(sf::RenderWindow& t_window)
{
	t_window.draw(m_circle);
}