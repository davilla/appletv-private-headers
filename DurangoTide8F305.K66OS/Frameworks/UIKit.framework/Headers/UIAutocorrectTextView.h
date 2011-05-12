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
@interface UIAutocorrectTextView : UIView {
@private
	NSString *m_string;	// 44 = 0x2c
	int m_type;	// 48 = 0x30
	int m_edgeType;	// 52 = 0x34
	UIFont *m_textFont;	// 56 = 0x38
	BOOL m_animating;	// 60 = 0x3c
}
- (id)initWithFrame:(CGRect)frame string:(id)string type:(int)type edgeType:(int)type4;	// 0x320b6439
- (CGRect)_calculateRectForExpandedHitRegion;	// 0x32135935
- (void)dealloc;	// 0x320bb0b1
- (void)drawRect:(CGRect)rect;	// 0x320b6f49
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x32135451
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x32135a69
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32135a35
- (void)setAnimating:(BOOL)animating;	// 0x320ba949
- (void)setEdgeType:(int)type;	// 0x320ba859
@end

