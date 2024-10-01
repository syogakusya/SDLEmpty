#include "Game.h"

Game::Game()
    : mWindow(nullptr), mIsRunning(true)
{
}

bool Game::Initialize()
{
  int sdlResult = SDL_Init(SDL_INIT_VIDEO);
  if (sdlResult != 0)
  {
    SDL_Log("SDLを初期化できません:%s", SDL_GetError());
    return false;
  }
  return true;
}