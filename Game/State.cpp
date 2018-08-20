
#include "State.h"

State::State() : state(MAIN_MENU)
{

}

State::~State()
{

}

GameState State::getState()
{
    return state;
}
