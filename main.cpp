#include "State.h"

#include <iostream>
#include <set>

int main() {
    std::set<State> states;
    states.insert(State("Illinois", "Springfield"));
    states.insert(State("Wisconsin", "Madison"));
    states.insert(State("California", "Sacramento"));
    states.insert(State("New York", "Albany"));
    states.insert(State("Alaska", "Juneau"));
    std::cout << "State Name: Capital City" << std::endl;
    for (auto &state: states) {
        std::cout << state << std::endl;
    }
    return 0;
}
