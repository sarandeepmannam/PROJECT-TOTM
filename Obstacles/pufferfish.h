#ifndef PUFFERFISH_H
#define PUFFERFISH_H

#include "../define.h"
#include "Obstacle.h"
#include "../asset_holder.h"

class pufferfish : public Obstacle
{

private:
	float BASE_SIZE= PLAYER_BASE_SIZE;

	sf::Vector2f FishPosition;

	sf::Vector2f FishPosition1;

	sf::Vector2f FishPosition2;

	sf::Vector2f FishSize;

	sf::RectangleShape Fish;

	void Fish1();

	////////////////////////////////////////////////////////////
	/// \brief function used for animation
	///
	/// \param dt deltatime value in float
	/// \param expanding tells if fish is expanding or not
	///
	////////////////////////////////////////////////////////////
	void Anim(float dt,bool is_expanding);

	////////////////////////////////////////////////////////////
	/// \brief timer for update cycle
	///
	////////////////////////////////////////////////////////////
	float timer;

	////////////////////////////////////////////////////////////
	/// \brief timer for animation
	///
	////////////////////////////////////////////////////////////
	float timer_anim;

	////////////////////////////////////////////////////////////
	/// \brief controls animation direction
	///
	////////////////////////////////////////////////////////////
	int anim_dir;

	////////////////////////////////////////////////////////////
	/// \brief asset holder from which textures and files used
	///
	////////////////////////////////////////////////////////////
	asset_holder& m_assets;

	////////////////////////////////////////////////////////////
	/// \brief Sprite used to show pufferish
	///
	////////////////////////////////////////////////////////////
	sf::Sprite pufferfish_sprite;

	////////////////////////////////////////////////////////////
	/// \brief used to settexturerect for animations
	///
	////////////////////////////////////////////////////////////
	sf::IntRect display_frames[4];

public:
	////////////////////////////////////////////////////////////
	/// \brief constructor
	///
	////////////////////////////////////////////////////////////
	pufferfish(sf::Vector2u Fishposition, asset_holder* assets);

	////////////////////////////////////////////////////////////
	/// \brief destructor
	///
	////////////////////////////////////////////////////////////
	virtual ~pufferfish();

	////////////////////////////////////////////////////////////
	/// \brief Generic render method
	///
	/// \param window pointer to renderwindow where pufferfish
	/// is to be rendered
	///
	////////////////////////////////////////////////////////////
	void render(sf::RenderTarget* window);

	////////////////////////////////////////////////////////////
	/// \brief Generic update method
	///
	/// \param dt delta time value in terms of a float
	///
	////////////////////////////////////////////////////////////
	void update(float dt);

	////////////////////////////////////////////////////////////
	/// \brief Checks if player collided with it or not
	///
	/// \param shape sf::floatrect of the player object
	/// 
	////////////////////////////////////////////////////////////
	const bool isCollide(const sf::FloatRect &shape);

	///////////////////////////////////////////////////
	///	
	///	\brief read the details of pufferfish from the file
	///	
	///	\param fin std::ifstream& file stream
	///	\param data Data& file stream \file Data.h
	///	\param size size_t& file no of inputs to be taken
	///	
	///	
	///////////////////////////////////////////////////
	static void read(std::ifstream &fin, Data &data, size_t &size);
};

////////////////////////////////////////////////////////////
/// 
/// \class pufferfish
///
/// \brief pufferfish a obstacle which grow in size regularly 
///			this obstacle is i n silent position for some time
///
/// 
////////////////////////////////////////////////////////////
#endif