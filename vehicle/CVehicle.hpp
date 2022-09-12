#pragma once

#include "../draw_handlers/CVehicleDrawHandler.hpp"
#include "../entities/CPhysical.hpp"

#include "CHandlingData.hpp"
#include "CVehicleModelInfo.hpp"

#include <cstdint>

#pragma pack(push, 1)
class CVehicle : public rage::CPhysical
{
public:
    char pad_0x0000[0x20]; //0x0000
    CVehicleModelInfo* m_model_info; //0x0020 
    char pad_0x0028[0x20]; //0x0028
    CVehicleDrawHandler* m_draw_handler; //0x0048 
    char pad_0x0050[0x40]; //0x0050
    rage::fvector3 m_seat_pos; //0x0090
    char pad_0x009C[0x74]; //0x009C
    rage::fvector3 N00001966; //0x0110 
    char pad_0x011C[0x4]; //0x011C
    rage::fvector3 N00001968; //0x0120 
    char pad_0x012C[0x14]; //0x012C
    rage::fvector3 N0000196C; //0x0140 
    char pad_0x014C[0x14]; //0x014C
    rage::fvector3 N00001970; //0x0160 
    char pad_0x016C[0x1A4]; //0x016C
    uint32_t dword310;
    uint32_t dword314;
    uint8_t m_boost_state; // 0x318
    char gap319[2];
    uint8_t m_boost_allow_recharge; // 0x31B
    uint16_t word31C;
    char gap31E[2];
    float m_boost; // 0x320
    float m_rocket_recharge_speed; // 0x324
    uint32_t dword328;
    uint8_t byte32C;
    char gap32D[3];
    uint8_t byte330;
    char gap331[3];
    uint64_t qword334;
    uint32_t dword33C;
    uint8_t byte340;
    char gap341[3];
    uint32_t dword344;
    uint8_t byte348;
    char gap349[3];
    uint64_t qword34C;
    uint64_t qword354;
    uint64_t qword35C;
    uint64_t qword364;
    uint32_t dword36C;
    uint32_t dword370;
    uint8_t byte374;
    uint16_t word375;
    uint8_t byte377;
    uint64_t qword378;
    uint64_t qword380;
    uint64_t qword388;
    uint32_t dword390;
    uint32_t dword394;
    uint8_t byte398;
    char gap399[3];
    uint64_t qword39C;
    uint64_t qword3A4;
    char gap3AC[4];
    float m_jump_boost_charge; // 0x3B0
    uint8_t byte3B4;
    char gap3B5[3];
    uint64_t qword3B8;
    uint32_t dword3C0;
    uint32_t dword3C4;
    char gap3C8[8];
    uint16_t oword3D0;
    char gap3D2[30];
    uint16_t oword3F0;
    char gap3F2[14];
    uint32_t dword400;
    uint64_t qword404;
    char gap40C[4];
    uint32_t dword410;
    uint64_t qword414;
    char gap41C[4];
    uint64_t qword420;
    uint32_t dword428;
    uint32_t dword42C;
    char gap430[1032];
    uint64_t qword838;
    float m_body_health; // 0x840
    float m_petrol_tank_health; // 0x844
    char gap848[12];
    float float854;
    char gap858[176];
    float m_engine_health; // 0x908
    char gap90C[44];
    CHandlingData* m_handling_data; // 0x938
    char gap940[2];
    uint8_t m_is_drivable; //0x0942
    uint8_t m_tyres_can_burst; //0x0943
    uint8_t m_deform_god; //0x0944
    char gap945[6];
    uint8_t byte94B;
    char gap94C;
    uint8_t byte94D;
    char gap94E;
    uint8_t byte94F;
    char gap950[3];
    uint8_t byte953;
    uint8_t byte954;
    char gap955;
    uint8_t byte956;
    uint8_t byte957;
    char gap958[2];
    uint8_t byte95A;
    char gap95B[9];
    uint64_t qword964;
    char gap96C[4];
    uint64_t qword970;
    uint64_t qword978;
    char gap980[8];
    uint64_t qword988;
    uint16_t word990;
    uint32_t dword992;
    uint16_t word996;
    uint64_t qword998;
    uint64_t qword9A0;
    uint32_t dword9A8;
    uint64_t qword9AC;
    uint64_t qword9B4;
    uint64_t qword9BC;
    uint16_t word9C4;
    uint8_t byte9C6;
    char gap9C7;
    uint32_t dword9C8;
    uint8_t byte9CC;
    char gap9CD;
    uint16_t word9CE;
    uint16_t word9D0;
    char gap9D2[2];
    uint32_t dword9D4;
    char gap9D8[8];
    uint32_t dword9E0;
    uint64_t qword9E4;
    uint32_t dword9EC;
    uint32_t dword9F0;
    char gap9F4[4];
    float m_dirt_level; // 0x9F8
    uint32_t dword9FC;
    uint64_t qwordA00;
    uint64_t qwordA08;
    uint32_t dwordA10;
    uint32_t dwordA14;
    uint8_t byteA18;
    uint16_t wordA19;
    uint8_t byteA1B;
    uint32_t dwordA1C;
    uint64_t qwordA20;
    uint32_t dwordA28;
    uint32_t dwordA2C;
    uint64_t qwordA30;
    uint64_t qwordA38;
    uint64_t qwordA40;
    uint64_t qwordA48;
    uint8_t byteA50;
    char gapA51[7];
    uint64_t qwordA58;
    uint64_t qwordA60;
    uint32_t dwordA68;
    uint32_t dwordA6C;
    uint32_t dwordA70;
    uint32_t dwordA74;
    uint32_t dwordA78;
    uint32_t dwordA7C;
    uint64_t qwordA80;
    uint8_t byteA88;
    char gapA89;
    uint16_t wordA8A;
    uint64_t qwordA8C;
    uint64_t qwordA94;
    uint64_t qwordA9C;
    uint64_t qwordAA4;
    uint32_t dwordAAC;
    uint16_t wordAB0;
    uint16_t wordAB2;
    uint8_t byteAB4;
    uint16_t wordAB5;
    uint16_t wordAB7;
    char gapAB9[2];
    char gapABB[3]; // start of some kind of flag, default value 0x1000000i64
    uint8_t m_is_targetable; // 0xABE
    char gapABF[4]; // end of some kind of flag
    uint32_t dwordAC3;
    uint32_t dwordAC7;
    uint16_t wordACB;
    uint8_t byteACD;
    uint8_t byteACE;
    char gapACF;
    uint64_t qwordAD0;
    uint64_t qwordAD8;
    uint8_t byteAE0;
    char gapAE1[3];
    uint32_t dwordAE4;
    uint32_t dwordAE8;
    uint32_t dwordAEC;
    uint32_t dwordAF0;
    char gapAF4[4];
    uint32_t dwordAF8;
    char gapAFC[20];
    uint32_t dwordB10;
    uint32_t dwordB14;
    char gapB18[24];
    uint32_t dwordB30;
    uint64_t qwordB34;
    char gapB3C[4];
    uint32_t dwordB40;
    uint64_t qwordB44;
    char gapB4C[4];
    uint16_t owordB50;
    char gapB52[14];
    uint16_t owordB60;
    char gapB62[14];
    uint32_t dwordB70;
    uint32_t dwordB74;
    uint64_t qwordB78;
    uint32_t dwordB80;
    uint32_t dwordB84;
    uint32_t dwordB88;
    uint32_t dwordB8C;
    uint32_t dwordB90;
    uint32_t dwordB94;
    uint32_t dwordB98;
    uint32_t dwordB9C;
    uint32_t dwordBA0;
    uint64_t qwordBA4;
    char gapBAC[4];
    uint32_t dwordBB0;
    uint64_t qwordBB4;
    char gapBBC[20];
    uint64_t qwordBD0;
    char gapBD8[16];
    uint32_t dwordBE8;
    char gapBEC[4];
    uint64_t qwordBF0;
    uint32_t dwordBF8;
    uint64_t qwordBFC;
    uint16_t wordC04;
    uint8_t byteC06;
    char gapC07;
    uint64_t qwordC08;
    uint32_t dwordC10;
    uint32_t dwordC14;
    uint16_t wordC18;
    char gapC1A[2];
    uint64_t qwordC1C;
    uint64_t qwordC24;
    uint64_t qwordC2C;
    uint64_t qwordC34;
    char gapC3C[4];
    uint64_t qwordC40;
    uint64_t qwordC48;
    uint32_t dwordC50;
    char gapC54[4];
    uint32_t dwordC58;
    float m_gravity; // 0xC5C - might be start of some sub-class
    char gapC60[8];
    class CPed* m_driver; //0x0C68
    class CPed* m_passengers[15]; //0x0C70
    class CPed* m_last_driver; //0x0CE8
    char gapCF0[1424]; // end of sub-class
    uint32_t dword1280;
    char gap1284[4];
    uint32_t dword1288;
    char gap128C[12];
    uint16_t word1298;
    uint8_t byte129A;
    char gap129B;
    uint64_t qword129C;
    uint64_t qword12A4;
    uint64_t qword12AC;
    uint64_t qword12B4;
    char gap12BC[4];
    uint64_t qword12C0;
    uint64_t qword12C8;
    uint16_t word12D0;
    char gap12D2[14];
    uint32_t dword12E0;
    uint32_t dword12E4;
    uint64_t qword12E8;
    uint32_t dword12F0;
    char gap12F4[4];
    uint64_t qword12F8;
    char gap1300[56];
    uint64_t qword1338;
    uint64_t qword1340;
    uint32_t dword1348;
    uint32_t dword134C;
    uint32_t dword1350;
    uint64_t qword1354;
    uint32_t dword135C;
    uint32_t dword1360;
    uint32_t dword1364;
    uint32_t dword1368;
    char gap136C[4];
    float float1370;
    float float1374;
    char gap1378[8];
    uint64_t qword1380;
    uint64_t qword1388;
    uint32_t dword1390;
    uint64_t qword1394;
    uint16_t word139C;
    uint16_t word139E;
    uint8_t byte13A0;
    uint16_t word13A1;
    char gap13A3[2];
    uint8_t byte13A5;
    uint16_t word13A6;
    uint8_t byte13A8;
    char gap13A9[3];
    uint32_t dword13AC;
    uint8_t byte13B0;
    char gap13B1[3];
    uint64_t qword13B4;
    uint32_t dword13BC;
    uint32_t dword13C0;
    uint32_t dword13C4;
    uint32_t dword13C8;
    uint8_t byte13CC;
    char gap13CD[3];
    uint64_t qword13D0;
    uint8_t byte13D8;
    char gap13D9[3];
    uint32_t dword13DC;
    char gap13E0[8];
    uint32_t dword13E8;
    char gap13EC[116];
    uint32_t dword1460;
    uint16_t word1464;
    uint8_t byte1466;
    char gap1467;
    uint64_t qword1468;
};
static_assert(sizeof(CVehicle) == 0x1470);
#pragma pack(pop)
