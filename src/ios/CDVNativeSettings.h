#import <Cordova/CDV.h>

@interface CDVNativeSettings : CDVPlugin

#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)

- (void)openSettings:(CDVInvokedUrlCommand*)command;

@end