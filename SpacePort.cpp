class SpacePort
{
private:
    int sizeOfPort = 0;
    //true - свободный
    bool docks[1024];

public:
    // Создать космодром, в котором size штук доков.
    // Доки нумеруются от 0 до size-1.
    // В момент создания все доки свободны.
    SpacePort(unsigned int size) {
        sizeOfPort = size;
        for (int i = 0; i < size; ++i) {
            docks[i] = true;
        }
    }
    // Запросить посадку в док с номером dockNumber.
    // Если такого дока нет - вернуть false (запрет посадки).
    // Если док есть, но занят - вернуть false (запрет посадки).
    // Если док есть и свободен - вернуть true (разрешение посадки) и док
    //становится занят.
    bool requestLanding(unsigned int dockNumber) {
        if (dockNumber >= sizeOfPort || dockNumber < 0) return false;
        if (docks[dockNumber]) {
            docks[dockNumber] = false;
            return true;
        }
        return false;
    }
    // Запросить взлёт из дока с номером dockNumber.
    // Если такого дока нет - вернуть false (запрет взлёта).
    // Если док есть, но там пусто - вернуть false (запрет взлёта).
    // Если док есть и в нём кто-то стоит - вернуть true (разрешение взлёта) и
    //док становится свободен.
    bool requestTakeoff(unsigned int dockNumber) {
        if (dockNumber >= sizeOfPort || dockNumber < 0) return false;
        if (!docks[dockNumber]) {
            docks[dockNumber] = true;
            return true;
        }
        return false;
    }
};
