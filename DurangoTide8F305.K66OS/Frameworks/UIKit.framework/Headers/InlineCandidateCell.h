/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIFont, NSString;

__attribute__((visibility("hidden")))
@interface InlineCandidateCell : UIView {
@private
	NSString *_candidate;	// 44 = 0x2c
	unsigned _index;	// 48 = 0x30
	UIFont *_font;	// 52 = 0x34
	CGSize _stringImageSize;	// 56 = 0x38
	BOOL _highlighted;	// 64 = 0x40
	id _target;	// 68 = 0x44
	SEL _action;	// 72 = 0x48
	BOOL _lastItem;	// 76 = 0x4c
	BOOL _dontDrawRightEdge;	// 77 = 0x4d
}
@property(readonly, assign) unsigned index;	// G=0x3218dc95; converted property
@property(readonly, assign) CGSize stringImageSize;	// G=0x3218dc7d; converted property
- (id)initWithCandidate:(id)candidate andIndex:(unsigned)index withFontSize:(float)fontSize target:(id)target action:(SEL)action;	// 0x3218dd39
- (void)dealloc;	// 0x3218dcf1
- (void)dontDrawRightEdge:(BOOL)edge;	// 0x3218dca5
- (void)drawRect:(CGRect)rect;	// 0x3218de61
- (BOOL)ignoresMouseEvents;	// 0x3218dcc5
// converted property getter: - (unsigned)index;	// 0x3218dc95
- (void)setHighlighted:(BOOL)highlighted;	// 0x3218dcc9
- (void)setLastItem:(BOOL)item;	// 0x3218dcb5
// converted property getter: - (CGSize)stringImageSize;	// 0x3218dc7d
@end

