/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVRCPatternMatcherDelegate.h"
#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSArray, NSString;

@interface ATVRemoteSet : NSObject <ATVRCPatternMatcherDelegate> {
@private
	NSArray *_remoteSet;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	BOOL _custom;	// 12 = 0xc
}
@property(assign) BOOL custom;	// G=0x3399a9d9; S=0x3399a9e9; converted property
@property(retain) NSString *name;	// G=0x3399a989; S=0x3399a999; converted property
- (id)init;	// 0x3399a2ad
- (id)initWithDictionary:(id)dictionary;	// 0x3399a345
- (id)_initPatternMatcherArray;	// 0x3399ab69
- (void)_releasePatternMatchers;	// 0x3399ac79
- (void)_setupTargetEventForMatcher:(id)matcher index:(int)index;	// 0x3399acdd
- (void)_setupTargetRemoteEvents;	// 0x3399ac31
- (void)applyLearnedButtonsToSet:(id)set buttons:(NSRange)buttons;	// 0x3399aab1
// converted property getter: - (BOOL)custom;	// 0x3399a9d9
- (void)dealloc;	// 0x3399a5b5
- (id)encodeToDictionary;	// 0x3399a75d
- (int)findIdenticalButtonPattern:(id)pattern;	// 0x3399ab15
- (id)getPatternMatcher:(int)matcher;	// 0x3399a6c5
- (id)getPatternSet:(int)set;	// 0x3399a69d
- (BOOL)hasExtendedSet;	// 0x3399a905
- (BOOL)isEqual:(id)equal;	// 0x3399a9f9
- (void)matcherButtonDown:(id)down;	// 0x3399a6e5
- (void)matcherButtonRelease:(id)release;	// 0x3399a759
// converted property getter: - (id)name;	// 0x3399a989
- (int)processEvent:(id)event;	// 0x3399a615
- (void)resetMatchers;	// 0x3399a949
// converted property setter: - (void)setCustom:(BOOL)custom;	// 0x3399a9e9
// converted property setter: - (void)setName:(id)name;	// 0x3399a999
- (void)setPairingInfo:(unsigned long)info pairingMask:(unsigned long)mask payloadMask:(unsigned long)mask3;	// 0x3399aa5d
@end

