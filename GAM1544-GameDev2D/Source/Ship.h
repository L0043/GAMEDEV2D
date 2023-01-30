#pragma once
#include <GameDev2D.h>
#include "Constants.h"
#include <vector>
namespace GameDev2D {
	class Ship
	{
	public:
		Ship();
		~Ship();

		//Write game logic in the Update method
		void OnUpdate(float delta);

		//Render game objects in the Draw method
		void OnRender(BatchRenderer& batchRenderer);

		//Input event methods
		void OnKeyEvent(KeyCode keyCode, KeyState keyState);
		void OnMouseButtonEvent(MouseButton button, MouseButtonState state, float mouseX, float mouseY);
		void OnMouseMovedEvent(float mouseX, float mouseY);
	private:
		Vector2 m_position;
		float m_radians;
		std::vector<Vector2> m_points;
		float m_AngularVelocity;
	};
}

