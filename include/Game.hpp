#ifndef GAME_H
#define GAME_H
#include <MoleBox\Game.hpp>
#include <MoleBox\Content\Content.hpp

#include <Player.hpp>

class Game : public MB::Game
{
public:
	Game(std::string windowName);
	~Game(void);
	virtual void Draw(void);
	virtual void Update(sf::Time elapsed, MB::Types::EventList *events);
	virtual void Run(int argc,char **argv);
};

#endif