#include "Material.cpp"
class ElasticMaterial : public Material {

private:
    float elasticModulus = 0;

public:
    ElasticMaterial(float elasticModulus) : Material() {
        this -> elasticModulus = elasticModulus;
    }

    float getStress(float strain) override {
        return elasticModulus * strain;
    }

};