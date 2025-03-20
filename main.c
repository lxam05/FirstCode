#include <stdio.h>
#include <string.h>
#include "madeFunctions.h"

enum Quality{Excellent, VeryGood, Good,  Satisfactory, Poor, Unsatisfactory};

#define max 100

int main(void){
    
    //I AM COLOUR BLIND SO HARD TO MAKE OUT DIFFERENCES BETWEEN COLOURS
    
    int houseOrApp, urbOrRural, solarOrGrid, age, energy, water;
    char HA[max];
    char UR[max];
    char SG[max];
    
    int FINAL = 0;
    int houseSolarOrGrid = 1;
    
    //age, water, elec
    int HouseUrban[2][6][4][4] = {
        { // House, Urban, Solar
            { // Age 5-15
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent}
            },
            { // Age 15-30
                {Excellent, Excellent, Excellent, VeryGood},
                {Excellent, Excellent, Excellent, VeryGood},
                {Excellent, Excellent, VeryGood, VeryGood},
                {Excellent, Excellent, VeryGood, VeryGood}
            },
            { // Age 30-40
                {VeryGood, Good, Good, Good},
                {VeryGood, Good, Good, Good},
                {VeryGood, Good, Good, Good},
                {VeryGood, Good, Good, Good}
            },
            { // Age 40-50
                {Good, Poor, Poor, Poor},
                {Satisfactory, Poor, Poor, Poor},
                {Satisfactory, Poor, Poor, Poor},
                {Satisfactory, Poor, Poor, Poor}
            },
            { // Age 50-60
                {Poor, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Poor, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Poor, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Poor, Unsatisfactory, Unsatisfactory, Unsatisfactory}
            },
            { // Age >60
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory}
            }
        },
        { // House, Urban, Grid
            { // Age 5-15
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent}
            },
            { // Age 15-30
                {Excellent, VeryGood, VeryGood, VeryGood},
                {Excellent, VeryGood, VeryGood, VeryGood},
                {Excellent, VeryGood, VeryGood, VeryGood},
                {Excellent, VeryGood, VeryGood, VeryGood}
            },
            { // Age 30-40
                {VeryGood, Good, Satisfactory, Satisfactory},
                {Good, Good, Satisfactory, Satisfactory},
                {Good, Good, Satisfactory, Satisfactory},
                {VeryGood, Good, Satisfactory, Satisfactory}
            },
            { // Age 40-50
                {Satisfactory, Poor, Poor, Unsatisfactory},
                {Satisfactory, Poor, Poor, Unsatisfactory},
                {Satisfactory, Poor, Unsatisfactory, Unsatisfactory},
                {Satisfactory, Poor, Unsatisfactory, Unsatisfactory}
            },
            { // Age 50-60
                {Poor, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Poor, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Poor, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Poor, Unsatisfactory, Unsatisfactory, Unsatisfactory}
            },
            { // Age >60
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory}
            }
        }
    };

    int HouseRural[2][6][4][4] = {
        { // House, Rural, Solar
            { // Age 5-15
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent}
            },
            { // Age 15-30
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent}
            },
            { // Age 30-40
                {VeryGood, VeryGood, VeryGood, VeryGood},
                {VeryGood, VeryGood, VeryGood, Good},
                {VeryGood, VeryGood, VeryGood, Good},
                {VeryGood, VeryGood, VeryGood, Good}
            },
            { // Age 40-50
                {Good, Satisfactory, Satisfactory, Satisfactory},
                {Good, Satisfactory, Satisfactory, Satisfactory},
                {Good, Satisfactory, Satisfactory, Satisfactory},
                {Good, Satisfactory, Satisfactory, Satisfactory}
            },
            { // Age 50-60
                {Satisfactory, Poor, Poor, Poor},
                {Satisfactory, Poor, Poor, Poor},
                {Satisfactory, Poor, Poor, Poor},
                {Satisfactory, Poor, Poor, Poor}
            },
            { // Age >60
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory}
            }
        },
        { // House, Rural, Grid
            { // Age 5-15
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent}
            },
            { // Age 15-30
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, VeryGood},
                {Excellent, Excellent, VeryGood, VeryGood},
                {Excellent, Excellent, VeryGood, VeryGood}
            },
            { // Age 30-40
                {VeryGood, Good, Good, Good},
                {VeryGood, Good, Good, Good},
                {VeryGood, Good, Good, Good},
                {VeryGood, Good, Good, Good}
            },
            { // Age 40-50
                {Good, Poor, Poor, Poor},
                {Satisfactory, Poor, Poor, Poor},
                {Satisfactory, Poor, Poor, Poor},
                {Satisfactory, Poor, Poor, Poor}
            },
            { // Age 50-60
                {Poor, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Poor, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Poor, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Poor, Unsatisfactory, Unsatisfactory, Unsatisfactory}
            },
            { // Age >60
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory}
            }
        }
    };

    int AppUrban[2][5][4][4] = {
        { // App Urban Solar
            { // Age 5-30
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent}
            },
            { // Age 30-40
                {VeryGood, VeryGood, VeryGood, Good},
                {VeryGood, VeryGood, VeryGood, Good},
                {VeryGood, VeryGood, VeryGood, Good},
                {VeryGood, VeryGood, VeryGood, Good},
            },
            { // Age 40-50
                {Good, Good, Good, Poor},
                {Good, Good, Good, Poor},
                {Good, Good, Good, Poor},
                {Good, Good, Good, Poor},
            },
            { // Age 50-60
                {Poor, Poor, Poor, Unsatisfactory},
                {Poor, Poor, Poor, Unsatisfactory},
                {Poor, Poor, Poor, Unsatisfactory},
                {Poor, Poor, Poor, Unsatisfactory},
            },
            { // Age >= 60
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
            },
        },
        { // App Urban Grid
            { // Age 5-30
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent}
            },
            { // Age 30-40
                {Good, Good, Good, Satisfactory},
                {Good, Good, Good, Satisfactory},
                {Good, Good, Good, Satisfactory},
                {Good, Good, Good, Satisfactory}

            },
            { // Age 40-50
                {Satisfactory, Satisfactory, Satisfactory, Poor},
                {Satisfactory, Satisfactory, Satisfactory, Poor},
                {Satisfactory, Satisfactory, Satisfactory, Poor},
                {Satisfactory, Satisfactory, Satisfactory, Poor}
            },
            { // Age 50 - 60
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory}
            },
            { // Age >= 60
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory}
            },
        }
    };
    
    int AppRural[2][5][4][4] = {
        { // App Rural Solar
            { // Age 5-30
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent}
            },
            { // Age 30-40
                {VeryGood, VeryGood, VeryGood, VeryGood},
                {VeryGood, VeryGood, VeryGood, VeryGood},
                {VeryGood, VeryGood, VeryGood, VeryGood},
                {VeryGood, VeryGood, VeryGood, VeryGood}
            },
            { // Age 40-50
                {VeryGood, VeryGood, VeryGood, Good},
                {VeryGood, VeryGood, VeryGood, Good},
                {VeryGood, VeryGood, VeryGood, Good},
                {VeryGood, VeryGood, VeryGood, Good}
            },
            { // Age 50-60
                {Satisfactory, Satisfactory, Satisfactory, Poor},
                {Satisfactory, Satisfactory, Satisfactory, Poor},
                {Satisfactory, Satisfactory, Satisfactory, Poor},
                {Satisfactory, Satisfactory, Satisfactory, Poor}
            },
            { // Age >= 60
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
            },
        },
        { // App Urban Grid
            { // Age 5-30
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent},
                {Excellent, Excellent, Excellent, Excellent}
            },
            { // Age 30-40
                {VeryGood, VeryGood, VeryGood, Good},
                {VeryGood, VeryGood, VeryGood, Good},
                {VeryGood, VeryGood, VeryGood, Good},
                {VeryGood, VeryGood, VeryGood, Good}

            },
            { // Age 40-50
                {Good, Good, Good, Poor},
                {Good, Good, Good, Poor},
                {Good, Good, Good, Poor},
                {Good, Good, Good, Poor}
            },
            { // Age 50-60
                {Poor, Poor, Poor, Unsatisfactory},
                {Poor, Poor, Poor, Unsatisfactory},
                {Poor, Poor, Poor, Unsatisfactory},
                {Poor, Poor, Poor, Unsatisfactory}
            },
            { // Age >= 60
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory},
                {Unsatisfactory, Unsatisfactory, Unsatisfactory, Unsatisfactory}
            },
        }
    };

    houseOrApp = HouseOrAppartment(HA);
    
    urbOrRural = UrbanOrRural(UR);
    
    solarOrGrid = SolarOrGrid(SG);
    
    age = ageOfHouse(houseOrApp);
    
    water = waterusage();
    
    energy = energyusage();
    

    if ((houseOrApp) && (urbOrRural)) {
        
        if (energy) {
            
            houseSolarOrGrid = 0;
        }
        
        FINAL = HouseUrban[houseSolarOrGrid - 1][age - 1][water - 1][energy - 1];
        
    }
    
    else if ((houseOrApp) && (!urbOrRural)) {
        
        FINAL = HouseRural[houseSolarOrGrid - 1][age - 1][water - 1][energy - 1];
        
    }
    
    else if ((!houseOrApp) && (urbOrRural)) {
        
        FINAL = AppUrban[houseSolarOrGrid - 1][age - 1][water - 1][energy - 1];
        
    }
    
    else if ((!houseOrApp) && (!urbOrRural)) {
        
        FINAL = AppRural[houseSolarOrGrid - 1][age - 1][water - 1][energy - 1];
        
    }
    
    printQuality(FINAL);
    
}
