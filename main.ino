#include <Wire.h>
#include <Adafruit_MLX90614.h>

// https://theorycircuit.com/wp-content/uploads/2020/08/mlx90614-arduino-ir-thermometer-1024x524.png

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup()
{
    Serial.begin(9600);
    mlx.begin();
}

void loop()
{
    Serial.print("Ambient = ");
    Serial.print(mlx.readAmbientTempC());
    Serial.print("*C\tObject = ");
    Serial.print(mlx.readObjectTempC());
    Serial.println("*C");
    Serial.print("Ambient = ");
    Serial.print(mlx.readAmbientTempF());
    Serial.print("*F\tObject = ");
    Serial.print(mlx.readObjectTempF());
    Serial.println("*F");

    Serial.println();
    delay(500);
}
