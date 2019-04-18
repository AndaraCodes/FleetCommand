#pragma once

#include "IScreen.h"

#include "DisplayPanel.h"
#include "GUIButton.h"

namespace fleet {
	class CityDashboard : public IScreen {
	public:
		explicit CityDashboard(sf::RenderWindow& window, sf::Font& font, DisplayPanel& displayPanel);

		void setCity(unsigned index, bool owned);

		GameEvent input() override;
		void update() override;
		void draw() override;
	private:
		DisplayPanel& displayPanel;
		unsigned cityIndex{ 0 };
		bool currentlyOwned{ false };
		// GUIButton dashboardButton{ sf::Vector2f(game_button_width, game_button_height), "Dashboard", font };
		sf::RectangleShape dashboardButton{ sf::Vector2f(game_button_width, game_button_height) };
		sf::Text dashboard{ "Dashboard", font };
		sf::RectangleShape cityMapButton{ sf::Vector2f(game_button_width, game_button_height) };
		sf::Text cityMap{ "City Map", font };
		sf::RectangleShape cityUpgradeButton{ sf::Vector2f(game_button_width, game_button_height) };
		sf::Text cityUpgrade{ "City Upgrades", font };
		sf::RectangleShape worldMapButton{ sf::Vector2f(game_button_width, game_button_height) };
		sf::Text worldMap{ "World Map", font };
	};
}