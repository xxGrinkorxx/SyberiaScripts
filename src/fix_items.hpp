class Paper : Inventory_Base {
    canBeSplit = 1;
    varQuantityInit = 1.0;
    varQuantityMin = 0.0;
    varQuantityMax = 10.0;
    varQuantityDestroyOnMin = 1;
};

class BurlapStrip : Inventory_Base {
    canBeSplit = 1;
    varQuantityInit = 1.0;
    varQuantityMin = 0.0;
    varQuantityMax = 10.0;
};

class Matchbox : Inventory_Base {
    stackedUnit = "units";
    canBeSplit = 0;
    quantityBar = 0;
    varQuantityInit = 36.0;
    varQuantityMin = 0.0;
    varQuantityMax = 36.0;
};

class PersonalRadio : Transmitter_Base {
    weight = 500;
    range = 50000;
    
    class EnergyManager {
        energyUsagePerSecond = 0.001;
    };
};