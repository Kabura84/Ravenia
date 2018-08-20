
#ifndef RAVENIA_CLIENT_STATE_H
#define RAVENIA_CLIENT_STATE_H

enum GameState
{
    MAIN_MENU,
    LOGIN
};

class State {
public:
    State();
    ~State();

    GameState getState();

private:
    GameState state;
};


#endif //RAVENIA_CLIENT_STATE_H
