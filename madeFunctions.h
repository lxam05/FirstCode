int HouseOrAppartment(char *house){
    
    int h;
    
    printf("Are you in a house or appartment? ");
    scanf("%s", house);
    if(strcmp(house, "house") == 0){
        h = 1;
    }else{
        h = 0;
    }
    return h;
}

int UrbanOrRural(char *urban){
    
    int u;
    
    printf("Is is urban or rural? ");
    scanf("%s", urban);
    if(strcmp(urban, "urban") == 0){
        u = 1;
    }else{
        u = 0;
    }
    return u;
}

int SolarOrGrid(char *solar){
    
    int s;
    
    printf("Is it solar or grid powered? ");
    scanf("%s", solar);
    if(strcmp(solar, "solar") == 0){
        s = 1;
    }else{
        s = 0;
    }
    return s;
}

int waterusage(){
    
    int w;
    
    do {
        printf("How much water do you use a day? (gallons/day)\n<50 = 1\n50-100 = 2\n100-150 = 3\n>=150 = 4");
        printf("\n");
        scanf("%d", &w);
    } while ((w <= 1) && (w >= 4));
    
    return w;
}

int energyusage(){
    
    int e;
    do {
        printf("How much energy do you use a year? (KwH per year)\n<4000 = 1\n4000-9000 = 2\n9000-12000 = 3\n>=12000 = 4");
        printf("\n");
        scanf("%d", &e);
    } while ((e <= 1)&& (e >= 4));
    
    return e;
}

int ageOfHouse(int houseOrAppINT){

    int a = 0;
    if(houseOrAppINT) {
        
        do {
            printf("How old is your house? (in years)\n5-15 = 1\n15-30 = 2\n30-40 = 3\n40-50 = 4\n50-60 = 5\n>=60 = 6");
            printf("\n");
            scanf("%d", &a);
        } while ((a <= 1) && (a >= 6));
    }
    else if(!houseOrAppINT) {
        
        do {
            printf("How old is your house? (in years)\n5-30 = 1\n30-40 = 2\n40-50 = 3\n50-60 = 4\n>=60 = 5");
            printf("\n");
            scanf("%d", &a);
        } while ((a <= 1) && (a >= 5));
    }
    return a;
}

void printQuality(int num) {
    if (num < 0 || num > 5) {
        printf("Invalid quality number.\n");
        return;
    }
    
    const char *qualityNames[] = {"Excellent", "VeryGood", "Good", "Satisfactory", "Poor", "Unsatisfactory"};
    printf("%s\n", qualityNames[num]);
}
