#include <LuniLib.h>

// Device Drivers

//#include <DDMeta/DDMeta.h>
//#include <DDHello/DDHello.h>
//#include <DDMCP9808/DDMCP9808.h>
//#include <DDServo/DDServo.h>
#include <DDSignal/DDSignal.h>

//#include <DDStepper/DDStepper.h>

DeviceDriver *selectedDevices[] = {
//  new DDMeta("Meta",1),
//  new DDHello("Hello",1),
//  new DDMCP9808("MCP9808",1,0x18),
//  new DDServo("Servo",2),
  new DDSignal("GPIO",2),

//  new DDStepper("Stepper",6),
  0};
