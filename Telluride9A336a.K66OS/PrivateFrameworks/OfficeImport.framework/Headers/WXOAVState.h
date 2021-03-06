/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVState.h"

@class NSMutableDictionary, WDParagraph, WXState;

__attribute__((visibility("hidden")))
@interface WXOAVState : OAVState {
@private
	WXState *mWxState;	// 28 = 0x1c
	WDParagraph *mParagraph;	// 32 = 0x20
	NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;	// 36 = 0x24
}
@property(retain) id currentParagraph;	// G=0x34e04795; S=0x34d18301; converted property
- (id)initWithWXState:(id)wxstate;	// 0x34d04855
// converted property getter: - (id)currentParagraph;	// 0x34e04795
- (void)dealloc;	// 0x34d1e32d
- (id)nextVmlShapeIdToTextBoxMap;	// 0x34d1dd2d
// converted property setter: - (void)setCurrentParagraph:(id)paragraph;	// 0x34d18301
- (id)wxState;	// 0x34d1cf75
@end

