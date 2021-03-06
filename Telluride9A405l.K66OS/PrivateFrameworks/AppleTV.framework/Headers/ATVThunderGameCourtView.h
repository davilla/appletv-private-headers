/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray, NSDictionary, BRImageControl, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVThunderGameCourtView : BRControl {
@private
	NSDictionary *_data;	// 48 = 0x30
	BRAsyncImageControl *_court;	// 52 = 0x34
	BRControl *_courtContainer;	// 56 = 0x38
	BRImageControl *_courtGlass;	// 60 = 0x3c
	NSMutableArray *_homePlayerCards;	// 64 = 0x40
	NSMutableArray *_awayPlayerCards;	// 68 = 0x44
}
- (id)initWithDictionary:(id)dictionary;	// 0x35d5b6b5
- (id)accessibilityLabel;	// 0x35d5c1ed
- (void)dealloc;	// 0x35d5bcc5
- (void)layoutSubcontrols;	// 0x35d5bda5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35d5bd75
@end

