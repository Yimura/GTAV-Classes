#pragma once

/*              Uses
  
    car.taxi
    car.interiorlight
    car.fatinteriorlight
    car.redinteriorlight
    car.platelight
    car.dashlight
    car.doorlight
*/
class CVFXCar
{
public:
    float intensity; //0x0000
    float radius; //0x0004
    float falloffExp; //0x0008
    float innerConeAngle; //0x000C
    float outerConeAngle; //0x0010
    float coronaHDR; //0x0014
    float coronaSize; //0x0018
    float shadowBlur; //0x001C
    float capsuleLength; //0x0020
    char pad_0024[12]; //0x0024
    float red; //0x0030
    float green; //0x0034
    float blue; //0x0038
    float useSun; //0x003C
    float useDynamicShadows; //0x0040
}; //Size: 0x0044

class CVFXTrain
{
  public:
    float red;              // 0x0000
    char pad_0004[10400]; // 0x0004
    float green;          // 0x28A4
    char pad_28A8[44];      // 0x28A8
    float blue;              // 0x28D4
    char pad_28D8[108];      // 0x28D8
    float intensity;      // 0x2944
    float falloffmax;      // 0x2948
    char pad_294C[120];      // 0x294C
    float fadingDistance; // 0x29C4
    float fadeLength;      // 0x29C8
    char pad_29CC[13952]; // 0x29CC
}; // Size: 0x604C

class CVFXPedLight
{
public:
    float intensity; //0x0000
    float radius; //0x0004
    float falloffExp; //0x0008
    float innerConeAngle; //0x000C
    float outerConeAngle; //0x0010
    float coronaHDR; //0x0014
    float coronaSize; //0x0018
    float shadowBlur; //0x001C
    float capsuleLength; //0x0020
    char pad_0024[12]; //0x0024
    float red; //0x0030
    float green; //0x0034
    float blue; //0x0038
    float useSun; //0x003C
    float useDynamicShadows; //0x0040
}; //Size: 0x0044

class CVFXTraficLightNear
{
public:
    float intensity; //0x0000
    float radius; //0x0004
    float falloffExp; //0x0008
    float innerConeAngle; //0x000C
    float outerConeAngle; //0x0010
    float coronaHDR; //0x0014
    float coronaSize; //0x0018
    float shadowBlur; //0x001C
    float capsuleLength; //0x0020
    char pad_0024[12]; //0x0024
    float red; //0x0030
    float green; //0x0034
    float blue; //0x0038
    float useSun; //0x003C
    float useDynamicShadows; //0x0040
}; //Size: 0x0044

class CVFXTrafficLightColor
{
public:
    float red; //0x0000
    float green; //0x0004
    float blue; //0x0008
}; //Size: 0x000C

// Credit: At0ms/Andy