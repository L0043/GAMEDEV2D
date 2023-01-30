#include "Game.h"


namespace GameDev2D
{
	Game::Game()
	{

	}

	Game::~Game()
	{

	}

	void Game::OnUpdate(float delta)
	{
		m_ship.OnUpdate(delta);
	}

	void Game::OnRender(BatchRenderer& batchRenderer)
	{
		batchRenderer.BeginScene();

		//Render your Sprites and SpriteFonts here
		m_ship.OnRender(batchRenderer);

		batchRenderer.EndScene();
	}

	void Game::OnKeyEvent(KeyCode keyCode, KeyState keyState)
	{
		m_ship.OnKeyEvent(keyCode, keyState);
	}

	void Game::OnMouseButtonEvent(MouseButton button, MouseButtonState state, float mouseX, float mouseY)
	{
		
	}

	void Game::OnMouseMovedEvent(float mouseX, float mouseY)
	{

	}
}