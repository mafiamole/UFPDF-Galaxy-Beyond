#include <Game.hpp>

Game::Game(std::string windowName) : MB::Game(windowName)
{
	
}

Game::~Game(void)
{
	MB::Game::~Game();
}

void Game::Update(sf::Time elapsed, MB::Types::EventList *events)
{
	MB::Game::Update(elapsed,events);
}

void Game::Draw()
{

}

void Game::Run(int argc,char **argv)
{
  MB::Game::Run(argc,argv);
}