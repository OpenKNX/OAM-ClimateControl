#include "OpenKNX.h"
#include "Logic.h"
#include "NetworkModule.h"
#include "FileTransferModule.h"
#include "FunctionBlocksModule.h"
#include "ClimateControlModule.h"

#ifdef OKNXHW_REG1_FRONT_AUTO
OpenKNX::Button* buttonSummerWinter = nullptr;
#endif

void setup()
{
#ifdef OKNXHW_REG1_FRONT_AUTO
    pinMode(REG1_FRONT_PIN7, INPUT); 
    bool rgbFront = digitalRead(REG1_FRONT_PIN7);
    if (rgbFront) {
        pinMode(REG1_FRONT_PIN4, INPUT_PULLUP);
        buttonSummerWinter = new OpenKNX::Button("BtnSumSWin");
        buttonSummerWinter->onShortClick([]() {
            openknxClimateControlModule.toogleWinterByButton();
        });
    }
#endif
    openknx.init();
#ifdef ParamNET_NTP
#if defined(KNX_IP_WIFI) || defined(KNX_IP_LAN)
    openknx.addModule(0, openknxNetwork);
#endif
#endif
    openknx.addModule(1, openknxLogic);
    openknx.addModule(2, openknxFunctionBlocksModule);
    openknx.addModule(3, openknxClimateControlModule);
    openknx.addModule(6, openknxFileTransferModule);

    openknx.setup();
}

void loop()
{
#ifdef OKNXHW_REG1_FRONT_AUTO
    if (buttonSummerWinter != nullptr)
    {
        bool state = digitalRead(REG1_FRONT_PIN4);
        buttonSummerWinter->change(!state);
        buttonSummerWinter->loop();
    }   
#endif
    openknx.loop();
}

void setup1()
{
    openknx.setup1();
}

void loop1()
{
    openknx.loop1();
}