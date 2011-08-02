/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class NSArray, VSRecognitionAction;
@protocol VSRecognitionResultHandler;

@interface VSRecognitionResultHandlingRequest : NSObject {
	id<VSRecognitionResultHandler> _handler;	// 4 = 0x4
	NSArray *_results;	// 8 = 0x8
	VSRecognitionAction *_action;	// 12 = 0xc
}
@property(retain) id nextAction;	// G=0x33f3d2ed; S=0x33f3d31d; converted property
@property(readonly, retain) NSArray *results;	// G=0x33f3d389; converted property
- (id)initWithHandler:(id)handler results:(id)results;	// 0x33f3d425
- (void)dealloc;	// 0x33f3d3b9
- (id)handler;	// 0x33f3d359
// converted property getter: - (id)nextAction;	// 0x33f3d2ed
// converted property getter: - (id)results;	// 0x33f3d389
// converted property setter: - (void)setNextAction:(id)action;	// 0x33f3d31d
@end

