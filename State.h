#ifndef STATE_STATE_H
#define STATE_STATE_H

#include <string>
#include <ostream>
#include <utility>

class State {
public:
    explicit State(std::string name);

    State(std::string name, std::string capital);

    [[nodiscard]] const std::string &getName() const;

    void setName(const std::string &n);

    [[nodiscard]] const std::string &getCapital() const;

    void setCapital(const std::string &c);

    bool operator==(const State &rhs) const;

    bool operator!=(const State &rhs) const;

    bool operator<(const State &rhs) const;

    bool operator>(const State &rhs) const;

    bool operator<=(const State &rhs) const;

    bool operator>=(const State &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const State &state);

private:
    std::string name;
    std::string capital;
};

#endif //STATE_STATE_H
