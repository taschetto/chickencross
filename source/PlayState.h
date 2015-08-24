/*
 *  PlayState.h
 *  Normal "play" state
 *
 *  Created by Marcelo Cohen on 08/13.
 *  Copyright 2013 PUCRS. All rights reserved.
 *
 */

#pragma once

#include "GameState.h"
#include "Sprite.h"
#include "InputManager.h"

class PlayState : public cgf::GameState
{
public:
  void init();
  void cleanup();

  void pause();
  void resume();

  void handleEvents(cgf::Game* game);
  void update(cgf::Game* game);
  void draw(cgf::Game* game);

  // Implement Singleton Pattern
  static PlayState* instance()
  {
      return &m_PlayState;
  }

protected:
  PlayState() {}

private:
  static PlayState m_PlayState;

  int x, y;
  int dirx, diry;
  cgf::Sprite playSprite1;
  cgf::Sprite playSprite2;
  cgf::Sprite playSprite3;
  cgf::Sprite player;
  sf::RenderWindow* screen;
  cgf::InputManager* im;
};