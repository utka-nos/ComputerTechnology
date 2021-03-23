#include "Player.cpp"
class Knight : public Player {
public:
    Knight() : Player() {};
    bool canUse(Item * item) override {
        if(item->isMagical()) return false;
        else if(this->level >= item->getLevel() && this->strength >= item->getWeight()) return true;
        return false;
    }
};