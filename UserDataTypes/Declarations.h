#pragma once

enum Meat
{
    Pastrami,
    Chicken,
    Pork,
    Prawns
};

class Sandwich
{
public:
    Meat meat;
    float weigth;

    void heatSandwich();
 
private:
    bool isHot;

};
