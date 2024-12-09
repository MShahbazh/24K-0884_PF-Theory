#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct sensor_structures{
    char soil_nutrients[100];
    float pH_levels;
    char pest_activity[100];
};

struct Equipment{
    char name[100];
    char operational_status[100];
    float fuel_levels;
    char activity_schedules[100];
};

struct weather_forecast{
    float temperature;
    float rainfall;
    char wind_patterns[100];
};

struct Crop{
    char crop_type[100];
    char growth_stage[100];
    float expected_yield;
    struct weather_forecast* weather;
};

struct Field{
    float GPS_coordinates;
    char soil_health_metrics[100];
    float moisture_levels;
    struct Crop* crop;
    struct Equipment* equipment;
    struct sensor_structures* sensor;
};

struct Regional_hubs{
    struct Field* field;
    float Yield_predictions;
    char resource_distribution[100];
    char emergency_plans[100];
};

struct central_analytics_server{
    struct Regional_hubs* region;
};

int main(){
    int r,f,c,e,s,i,j,k,loopvar,display,a,b,c;
    bool loop=true,loop1;
    struct central_analytics_server server;
    printf("\nEnter the number of Regional Hubs the server managed: ");
    scanf("%d",&r);
    server.region=(struct Regional_hubs*)malloc(r*sizeof(struct Regional_hubs));
    // number of fields in a hub 
    for(i=0;i<r;i++){
        printf("\n\nREGION %d:\n",i+1);
        printf("Enter the Amount of Yield Predicted from Hub %d: ",i+1);
        scanf("%f",&server.region[i].Yield_predictions);
        // resource and emergency plans ( need more addition)
        printf("Enter the Resource Distribution: ");
        scanf("%s",server.region[i].resource_distribution);
        printf("Enter the Emergency Plans: ");
        scanf("%s",server.region[i].emergency_plans);
        // fields for a region
        printf("Enter the Number of fields in Regional Hub number %d: ",i+1);
        scanf("%d",&f);
        server.region[i].field=(struct Field*)malloc(f*sizeof(struct Field));
        for(j=0;j<f;j++){
        printf("\nREGION %d > FIELD %d:\n",i+1,j+1);
        // need more addition 
        printf("Enter the GPS Coordinates: ");
        scanf("%f",&server.region[i].field[j].GPS_coordinates);
        printf("Enter the Soil Health Metrics: ");
        scanf("%s",server.region[i].field[j].soil_health_metrics);
        printf("Enter the Moisture Level: ");
        scanf("%f",&server.region[i].field[j].moisture_levels);
        //    CROPS
            printf("Enter the number of crops being grown in the Field %d: ",j+1);
            scanf("%d",&c);
            server.region[i].field[j].crop=(struct Crop*)malloc(c*sizeof(struct Crop));
            for(k=0;k<c;k++){
                printf("\nREGION %d > FIELD %d > CROP %d:\n",i+1,j+1,k+1);
                printf("Enter the Crop Type of Crop %d: ",k+1);
                scanf("%s",server.region[i].field[j].crop[k].crop_type);
                printf("Enter the Crop Growth Stage of Crop %d: ",k+1);
                scanf("%s",server.region[i].field[j].crop[k].growth_stage);
                printf("WEATHER STATUS FOR THE CROP %d:\n",k+1);
                server.region[i].field[j].crop[k].weather = (struct weather_forecast*)malloc(sizeof(struct weather_forecast));
                printf("Enter the Temperature of crop %d: ",k+1);
                scanf("%f",&server.region[i].field[j].crop[k].weather->temperature);
                printf("Enter the Rainfall for crop %d: ",k+1);
                scanf("%f",&server.region[i].field[j].crop[k].weather->rainfall);
                printf("Enter the Wind Patterns for Crop %d: ",k+1);
                scanf("%d",server.region[i].field[j].crop[k].weather->wind_patterns);
            }
            //EQUIPMENT 
            printf("Enter the Number of equipments being used on the field no %d: ",j+1);
            scanf("%d",&e);
            server.region[i].field[j].equipment=(struct Equipment*)malloc(e*sizeof(struct Equipment));
            // equipment details 
            for(k=0;k<e;k++){
                printf("\nREGION %d > FIELD %d > EQUIPMENT %d:\n",i+1,j+1,k+1);
                printf("Enter the Name of Equipment: ");
                scanf("%s",server.region[i].field[j].equipment[k].name);
                printf("Vehicle Operational Status: ");
                scanf("%s",server.region[i].field[j].equipment[k].operational_status);
                printf("Fuel Levels of the vehicle: ");
                scanf("%f",&server.region[i].field[j].equipment[k].fuel_levels);
                // needs more addition
                printf("Enter the Activity Schedules: ");
                scanf("%s",server.region[i].field[j].equipment[k].activity_schedules);
            }
            // SENSOR DATA 
            printf("Enter the Number of Data for the sensors: ");
            scanf("%d",&s);
            server.region[i].field[j].sensor=(struct sensor_structures*)malloc(s*sizeof(struct sensor_structures));
            for(k=0;k<s;k++){
                 printf("\nREGION %d > FIELD %d > SENSOR %d:\n",i+1,j+1,k+1);
                printf("Enter the Soil Nutrient of Sensor %d: ",k+1);
                scanf("%s",server.region[i].field[j].sensor[k].soil_nutrients);
                printf("Enter the pH Levels of the sensor %d: ",k+1);
                scanf("%f",&server.region[i].field[j].sensor[k].pH_levels);
                // (need more addition)
                printf("Pest Activity of sensor %d: ",k+1);
                scanf("%s",server.region[i].field[j].sensor[k].pest_activity);
            }
        }
        
    }
    
    
    



    return 0;
}