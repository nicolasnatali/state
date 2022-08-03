#include "State.h"

State::State(std::string name) : name(std::move(name)) {}

State::State(std::string name, std::string capital) : name(std::move(name)), capital(std::move(capital)) {}

const std::string &State::getName() const {
    return name;
}

void State::setName(const std::string &n) {
    State::name = n;
}

const std::string &State::getCapital() const {
    return capital;
}

void State::setCapital(const std::string &c) {
    State::capital = c;
}

bool State::operator==(const State &rhs) const {
    return name == rhs.name &&
           capital == rhs.capital;
}

bool State::operator!=(const State &rhs) const {
    return !(rhs == *this);
}

bool State::operator<(const State &rhs) const {
    if (name < rhs.name)
        return true;
    if (rhs.name < name)
        return false;
    return capital < rhs.capital;
}

bool State::operator>(const State &rhs) const {
    return rhs < *this;
}

bool State::operator<=(const State &rhs) const {
    return !(rhs < *this);
}

bool State::operator>=(const State &rhs) const {
    return !(*this < rhs);
}

std::ostream &operator<<(std::ostream &os, const State &state) {
    os << state.name << ": " << state.capital;
    return os;
}
