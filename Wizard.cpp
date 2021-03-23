#include "Player.cpp"
class Wizard : public Player {
public:
    Wizard() : Player() {}
    bool canUse(Item * item) override {
        return this->level >= item->getLevel() && this->strength >= item->getWeight();
    }
};