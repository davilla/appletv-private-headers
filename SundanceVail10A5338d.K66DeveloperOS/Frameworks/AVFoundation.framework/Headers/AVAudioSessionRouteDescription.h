/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSArray;

@interface AVAudioSessionRouteDescription : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) NSArray *inputs;	// G=0x31736709; 
@property(readonly, assign) NSArray *outputs;	// G=0x31736741; 
+ (id)privateCreateWithCFDictionaryRef:(CFDictionaryRef)cfdictionaryRef;	// 0x317367ed
- (id)init;	// 0x317365cd
- (void)dealloc;	// 0x31736619
- (id)description;	// 0x31736779
// declared property getter: - (id)inputs;	// 0x31736709
// declared property getter: - (id)outputs;	// 0x31736741
- (RouteDescriptionImpl *)privateGetImplementation;	// 0x317367dd
@end

