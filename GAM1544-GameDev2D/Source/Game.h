#pragma once

#include <GameDev2D.h>
#include "Ship.h"
namespace GameDev2D
{
	class Game
	{
	public:
		Game();
		~Game();

		//Write game logic in the Update method
		void OnUpdate(float delta);

		//Render game objects in the Draw method
		void OnRender(BatchRenderer& batchRenderer);

		//Input event methods
		void OnKeyEvent(KeyCode keyCode, KeyState keyState);
		void OnMouseButtonEvent(MouseButton button, MouseButtonState state, float mouseX, float mouseY);
		void OnMouseMovedEvent(float mouseX, float mouseY);

	private:
		//Member variables GO HERE 
		Ship m_ship;
	};
}
