//
//  UIDevice+HardwareModel.h
//
//  Created by Heiko Dreyer on 11.05.11.
//  Copyright 2011 boxedfolder.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum __UIHardwareModel
{
	UIHardwareModelSimulator = 1,
    
	UIHardwareModeliPhone1G = 2,
	UIHardwareModeliPhone3G = 3,
	UIHardwareModeliPhone3GS = 4,
	UIHardwareModeliPhone4 = 5,
	UIHardwareModeliPhone4Verizon = 6,
    
	UIHardwareModeliPodTouch1G = 7,
	UIHardwareModeliPodTouch2G = 8,
	UIHardwareModeliPodTouch3G = 9,
	UIHardwareModeliPodTouch4G = 10,
    
	UIHardwareModeliPad = 11,
	UIHardwareModeliPad2Wifi = 12,
	UIHardwareModeliPad2GSM = 13,
	UIHardwareModeliPad2CDMA = 14,
    
    UIHardwareModeliPhone4S = 15,
    
	UIHardwareModeliPad3Wifi = 16,
	UIHardwareModeliPad3GSM = 17,
	UIHardwareModeliPad3CDMA = 18,
    
	UIHardwareModeliPhone5 = 19,
    UIHardwareModeliPhone5Global = 20,
    
	UIHardwareModeliPodTouch5G = 21,
    
	UIHardwareModeliPadMiniWifi = 22,
	UIHardwareModeliPadMiniGSM = 23,
	UIHardwareModeliPadMiniCDMA = 24,
	UIHardwareModeliPad4Wifi = 25,
    UIHardwareModeliPad4GSM = 26,
    UIHardwareModeliPad4CDMA = 27,
    
	UIHardwareModeliPhone5c = 28,
    UIHardwareModeliPhone5cGlobal = 29,
    
	UIHardwareModeliPhone5s = 30,
    UIHardwareModeliPhone5sGlobal = 31,
    
    UIHardwareModeliPadMiniRetinaWifi = 32,
    UIHardwareModeliPadMiniRetinaGlobal = 33,
    UIHardwareModeliPadMiniRetinaRev = 34,
    
    UIHardwareModeliPhone6 = 35,
    UIHardwareModeliPhone6Plus = 36,
    
    UIHardwareModeliPadMini3Wifi = 37,
    UIHardwareModeliPadMini3A1600 = 38,
    UIHardwareModeliPadMini3A1601 = 39,
    
    UIHardwareModeliPadAirWifi = 40,
    UIHardwareModeliPadAirGlobal = 41,
    UIHardwareModeliPadAirRev = 42,
    
    UIHardwareModeliPadAir2Wifi = 43,
    UIHardwareModeliPadAir2Global = 44
    
} UIHardwareModel;

@interface UIDevice (HardwareModel) 

/**
 *	Returns hardware name of device instance
 */
- (NSString *)hardwareName;

/**
 *	Returns hardware id of device instance
 */
-(UIHardwareModel)hardwareModel;

@end
