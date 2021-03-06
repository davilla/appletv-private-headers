/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MCAction, NSMutableDictionary;

@interface MRAction : NSObject {
	MCAction *mMCAction;	// 4 = 0x4
	id mSender;	// 8 = 0x8
	NSMutableDictionary *mStates;	// 12 = 0xc
	double mTime;	// 16 = 0x10
}
@property(readonly, assign) MCAction *action;	// G=0x332f6349; @synthesize=mMCAction
@property(retain) id sender;	// G=0x332f6359; S=0x332f6371; @synthesize=mSender
@property(retain) NSMutableDictionary *states;	// G=0x332f6399; S=0x332f63b1; @synthesize=mStates
@property(assign) double time;	// G=0x332f63d9; S=0x332f63f1; @synthesize=mTime
- (id)initWithAction:(id)action;	// 0x332f625d
// declared property getter: - (id)action;	// 0x332f6349
- (void)dealloc;	// 0x332f62b5
// declared property getter: - (id)sender;	// 0x332f6359
// declared property setter: - (void)setSender:(id)sender;	// 0x332f6371
// declared property setter: - (void)setStates:(id)states;	// 0x332f63b1
// declared property setter: - (void)setTime:(double)time;	// 0x332f63f1
// declared property getter: - (id)states;	// 0x332f6399
// declared property getter: - (double)time;	// 0x332f63d9
@end

