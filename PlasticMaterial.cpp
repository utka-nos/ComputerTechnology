
class PlasticMaterial : public Material {

private:
    float sL;
    float eM;

public:
    PlasticMaterial(float elasticModulus, float strainLimit) {
        sL = strainLimit;
        eM = elasticModulus;
    }

    float getStress(float strain) override {
        return (strain >= 0 && strain <= sL) ? eM * strain : eM * sL;
    }

};

