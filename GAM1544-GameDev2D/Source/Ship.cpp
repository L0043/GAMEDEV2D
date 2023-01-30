#include "Ship.h"
namespace GameDev2D
{
    Ship::Ship() :
    
        m_position(Vector2(GetHalfScreenWidth(), GetHalfScreenHeight())),
        m_radians(0.0f),
        m_AngularVelocity(0.0f),
        m_points{
            Vector2(0.0f, 25.0f),
            Vector2(15.0f, -25.0f),
            Vector2(0.0f, -10.0f),
            Vector2(-15.0f, -25.0f),
            Vector2(0.0f, 25.0f) }
        {
        }
    
    Ship::~Ship()
    {
    }

    void Ship::OnUpdate(float delta)
    {
        m_radians += m_AngularVelocity * delta;
        //if(m_raccelerating)
        //      find the acceleration vector
        // a = Vector2(cos(m_radians), sin(m_radians)) * ACCELERATION_RATE (is a const);

        // multiply acceleration vector by delta
        // to get the change in veolcity this frame
        // a*t this is the change in velocity
        // this last step has to happen in update
        
        // m_velocity += m_acceleration*delta
        // cap the velocity (as per today's slides)
        // apply the velocity to get the displacement
        // displacement = m_velocity * delta
        // and update the position
        // m_position += displacement
        // wrap around if you move off the sides
        //if (m_position.x < 0.0f)
        //      m_position.x = GetScreenWidth();
        // and so on for the other three sides
    }

    void Ship::OnRender(BatchRenderer& batchRenderer)
    {
        batchRenderer.RenderLineStrip(m_points, ColorList::White, LINE_WIDTH, m_position, m_radians);
    }

    void Ship::OnKeyEvent(KeyCode keyCode, KeyState keyState)
    {
        if(keyState == KeyState :: Down)
        {
            if(keyCode == KeyCode::A)
            {
                m_AngularVelocity = ANGULAR_VELOCITY;
            }
            if (keyCode == KeyCode::D)
            {
                m_AngularVelocity = -ANGULAR_VELOCITY;
            }
            if (keyCode == KeyCode::Space)
            {
                // m_accelerating = true;
            }
        }
        if (keyState == KeyState::Up)
        {
            if (keyCode == KeyCode::A)
            {
                m_AngularVelocity = 0.0f;
            }
            if (keyCode == KeyCode::D)
            {
                m_AngularVelocity = 0.0f;
            }
            if(keyCode == KeyCode::Space)
            {
                // m_accelerating = false;
            }
        }
        // acceleration code goes here
        // find the direction vector from m_radians
        // multiply this by the acceleration rate
        // this gives the acceleration vector

    }

    void Ship::OnMouseButtonEvent(MouseButton button, MouseButtonState state, float mouseX, float mouseY)
    {
    }
    void Ship::OnMouseMovedEvent(float mouseX, float mouseY)
    {
    }
}


