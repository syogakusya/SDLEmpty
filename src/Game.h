#pragma once

#include <SDL.h>

struct Vector2
{
  float x;
  float y;
};

class Game
{
public:
  Game();

  bool Initialize();
  void RunLoop();
  void Shutdown();

private:
  void ProcessInput();
  void UpdateGame();
  void GenerateOutput();

  SDL_Window *mWindow;
  bool mIsRunning;
};