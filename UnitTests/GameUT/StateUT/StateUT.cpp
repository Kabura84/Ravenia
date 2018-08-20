#define CATCH_CONFIG_MAIN

#include "catch.h"
#include "State.h"

TEST_CASE( "State is MAIN_MENU at the beginning", "[GameState]" ) {
    State state;

    REQUIRE( state.getState() == GameState::MAIN_MENU );
}
