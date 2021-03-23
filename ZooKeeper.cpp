class Animal {

public:
    virtual std::string getType() = 0;
    virtual bool isDangerous() = 0;
};


class ZooKeeper {
private:
    int numberDangerAnimals = 0;

public:
    // Создаём смотрителя зоопарка
    ZooKeeper() {}
    // Смотрителя попросили обработать очередного зверя.
    // Если зверь был опасный, смотритель фиксирует у себя этот факт.
    void handleAnimal(Animal* a) {
        if(a->isDangerous()) numberDangerAnimals++;
    }

    // Возвращает, сколько опасных зверей было обработано на данный момент.
    int getDangerousCount() {
        return numberDangerAnimals;
    }

};