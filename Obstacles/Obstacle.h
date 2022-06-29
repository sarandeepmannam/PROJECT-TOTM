#pragma once

#include "../stdafx.h"
#include "../Data.h"

class Obstacle
{

public:
	///////////////////////////////////////////////////
	///	
	///	\brief Enum class dealing with obstacle type
	///	
	///	
	///////////////////////////////////////////////////
	enum class obstacle_type { Gun = 1, Dragon, Pufferfish, Sprite, Spring, Teleporter }Type;

	///////////////////////////////////////////////////
	///	
	///	\brief default constructor
	///	
	///	
	///////////////////////////////////////////////////
	Obstacle() {}

	///////////////////////////////////////////////////
	///	
	///	\brief default destructor
	///	
	///	
	///////////////////////////////////////////////////	
	virtual ~Obstacle() {}

	///////////////////////////////////////////////////
	///	\brief  function updates obstacles
	///	
	/// \param dt time for frame change(as s)-for frame rate independent	
	///
	///////////////////////////////////////////////////
	virtual void update(float dt) = 0;
	
	///////////////////////////////////////////////////
	///	\brief  virtual function Draw everything
	///
	///	\param target sf::RenderTarget* target for drawing things
	///
	///////////////////////////////////////////////////
	virtual void render(sf::RenderTarget *target) = 0;

	///////////////////////////////////////////////////
	///	
	///	\brief check collision between obstacle and shape
	///	
	///	\param shape RectangleShape to which collision is to be checked
	///	
	///	\return true if collide else false
	///	
	///////////////////////////////////////////////////
	virtual const bool isCollide(const sf::FloatRect &shape) = 0;
};

////////////////////////////////////////////////////////////
/// 
/// \class Obstacle
///
/// \brief Base class defining interface for all the obstacle
/// 
////////////////////////////////////////////////////////////