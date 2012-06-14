/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSThread.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIStatusBarServerThread : NSThread {
@private
	NSMutableArray *_clientPorts;	// 52 = 0x34
	NSMutableArray *_publishers;	// 56 = 0x38
	XXStruct_vuV5MB _statusBarData;	// 60 = 0x3c
	XXStruct_vuV5MB _composedStatusBarData;	// 2024 = 0x7e8
	XXStruct_qh_S0D _overrides;	// 3988 = 0xf94
	CFDictionaryRef _doubleHeightStatusStrings;	// 5980 = 0x175c
	CFDictionaryRef _glowAnimationStates;	// 5984 = 0x1760
	NSMutableDictionary *_glowAnimationEndTimes;	// 5988 = 0x1764
	BOOL _composedStatusBarDataValid;	// 5992 = 0x1768
}
- (void)_addClient:(unsigned)client;	// 0x303824d5
- (void)_addStatusBarItem:(int)item forPublisher:(id)publisher;	// 0x30383065
- (void)_addStyleOverrides:(int)overrides forPublisher:(id)publisher;	// 0x303829fd
- (void)_broadcastStatusBarDataWithActions:(int)actions;	// 0x30098221
- (void)_broadcastStyleOverrides;	// 0x3038292d
- (id)_doubleHeightStatusStringForStyle:(int)style;	// 0x30382e49
- (double)_glowAnimationEndTimeForStyle:(int)style;	// 0x30382c81
- (BOOL)_glowAnimationStateForStyle:(int)style;	// 0x30382cf1
- (BOOL)_permanentizeStatusBarOverrideData;	// 0x30382ff1
- (void)_postDoubleHeightStatus:(char *)status forStyle:(int)style;	// 0x30382e5d
- (void)_postGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x30382d51
- (void)_postStatusBarData:(XXStruct_vuV5MB *)data actions:(int)actions;	// 0x300981d5
- (void)_postStatusBarOverrideData:(XXStruct_qh_S0D *)data;	// 0x30382f99
- (id)_publisherForPort:(unsigned)port;	// 0x303825e9
- (void)_removeAnimationEndTimesForOverrides:(int)overrides;	// 0x30382be1
- (void)_removeClient:(CFMachPortRef)client;	// 0x303825a1
- (void)_removePublisher:(CFMachPortRef)publisher;	// 0x303827d1
- (void)_removeStatusBarItem:(int)item forPublisher:(id)publisher;	// 0x303830ad
- (void)_removeStyleOverrides:(int)overrides forPublisher:(id)publisher;	// 0x30382b89
- (void)_setAnimationEndTimesForOverrides:(int)overrides;	// 0x30382a59
- (XXStruct_vuV5MB *)_statusBarData;	// 0x300982f9
- (XXStruct_qh_S0D *)_statusBarOverrideData;	// 0x30382851
- (int)_styleOverrides;	// 0x30382865
- (void)main;	// 0x30382221
@end
