class Train {

    double m;
    double curX = 0;
    double curSpeed = 0;

public:
    // Создать паровоз массой m,
    // стоящий в начале координат
    Train(double m) {
        this -> m = m;
    }
    // Ехать с текущей скоростью в течение времени dt
    void move(double dt) {
        this -> curX += curSpeed * dt;
    }
    // Изменить полный импульс паровоза (p = mv) на dp
    // Изменение может менять знак скорости
    void accelerate(double dp) {
        this -> curSpeed += dp / m;
    }
    // Получить текущую координату паровоза
    double getX() {
        return this -> curX;
    }
};
