/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import <NSObject.h> // Unknown library
#import "SkankKit-Structs.h"

@class NSTimer;

@interface SKTelephonyController : NSObject {
	NSTimer *_hackTimer;	// 4 = 0x4
	CTServerConnectionRef _serverCon;	// 8 = 0x8
	BOOL _commCenterActive;	// 12 = 0xc
	int _stream;	// 16 = 0x10
}
@property(assign) CTCallRef activeCall;	// G=0x33125971; S=0x331259d1; converted property
@property(readonly, assign, getter=isCommCenterActive) BOOL commCenterActive;	// G=0x33126365; converted property
@property(assign) BOOL dataStatus;	// G=0x33126255; S=0x33126279; converted property
+ (id)sharedInstance;	// 0x331251f9
- (id)init;	// 0x331252c9
- (id)activeBands;	// 0x331261bd
// converted property getter: - (CTCallRef)activeCall;	// 0x33125971
- (double)activeCallDuration;	// 0x33125a21
- (void)answerIncomingCall;	// 0x33125c4d
- (BOOL)autoSelectsNetwork;	// 0x331262d9
- (id)basebandVersion;	// 0x331263b5
- (void)callIsIncoming:(CTCallRef)incoming;	// 0x33125aa5
- (void)closeBasebandStream;	// 0x33126699
- (int)countCurrentCalls;	// 0x331259fd
- (CFArrayRef)currentCalls;	// 0x331259f5
// converted property getter: - (BOOL)dataStatus;	// 0x33126255
- (void)dealloc;	// 0x331257f1
- (BOOL)dialNumber:(id)number;	// 0x33125f21
- (void)enableCommCenter:(BOOL)center;	// 0x33126315
- (void)enableMux:(BOOL)mux;	// 0x33126375
- (void)hangupActiveCall;	// 0x33126051
- (void)hangupCall:(CTCallRef)call;	// 0x33125fa9
- (void)ignoreIncomingCall;	// 0x33125d25
- (id)imei;	// 0x33126401
- (CTCallRef)incomingCall;	// 0x33125a69
- (BOOL)isCallConnected;	// 0x331259d5
// converted property getter: - (BOOL)isCommCenterActive;	// 0x33126365
- (void)mainThreadAnswerIncomingCall;	// 0x33125bb9
- (void)mainThreadIgnoreIncomingCall;	// 0x33125ca5
- (id)myPhoneNumber;	// 0x33125955
- (id)networkName;	// 0x331262b9
- (void)openBasebandStream;	// 0x331265b5
- (void)pulseRTS;	// 0x331264ad
- (id)readATResponse;	// 0x33126791
- (void)registerTelephonyNotification:(CFStringRef)notification withCallback:(/*function-pointer*/ void *)callback;	// 0x3312592d
- (void)requestNetworkList;	// 0x3312630d
- (void)resetModem;	// 0x33126485
- (void)routeAudioToCall;	// 0x33126081
- (void)sendATCommand:(id)command;	// 0x331266d1
- (void)sendUSSDResponse:(id)response;	// 0x331268c5
- (CTServerConnectionRef)serverConnection;	// 0x3312591d
- (void)setActiveBands:(CFArrayRef)bands;	// 0x33126221
// converted property setter: - (void)setActiveCall:(CTCallRef)call;	// 0x331259d1
- (void)setAutoSelectNetwork;	// 0x33126301
- (void)setBasebandSpeed:(int)speed;	// 0x33126505
// converted property setter: - (void)setDataStatus:(BOOL)status;	// 0x33126279
- (void)setManuallySelectNetwork:(id)network;	// 0x33126305
- (void)setMasterVolume:(float)volume;	// 0x331260e9
- (void)setSpeechVolume:(float)volume;	// 0x33126121
- (int)signalStrength;	// 0x33126311
- (id)supportedBands;	// 0x33126159
- (void)updateWithCall:(CTCallRef)call;	// 0x33125d8d
@end

