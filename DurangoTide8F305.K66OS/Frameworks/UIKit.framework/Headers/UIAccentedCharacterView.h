/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage, NSArray;

@interface UIAccentedCharacterView : UIView {
	NSArray *m_characters;	// 44 = 0x2c
	NSArray *m_caps;	// 48 = 0x30
	unsigned m_count;	// 52 = 0x34
	int m_expansion;	// 56 = 0x38
	int m_orientation;	// 60 = 0x3c
	float m_stringWidth;	// 64 = 0x40
	UIImage *m_tubeImage;	// 68 = 0x44
	CGRect m_tubeRect;	// 72 = 0x48
	UIImage *m_grabberImage;	// 88 = 0x58
	CGRect m_grabberRect;	// 92 = 0x5c
	UIView *m_popupView;	// 108 = 0x6c
	UIView *m_selectedView;	// 112 = 0x70
	unsigned m_selectedIndex;	// 116 = 0x74
	BOOL m_dragged;	// 120 = 0x78
	CGPoint m_dragPoint;	// 124 = 0x7c
}
- (id)initWithFrame:(CGRect)frame variants:(id)variants expansion:(int)expansion orientation:(int)orientation;	// 0x3213ce41
- (void)dealloc;	// 0x3213c545
- (void)drawRect:(CGRect)rect;	// 0x3213c075
- (void)mouseDown:(GSEventRef)down;	// 0x3213c689
- (void)mouseDragged:(GSEventRef)dragged;	// 0x3213c6dd
- (void)mouseUp:(GSEventRef)up;	// 0x3213c1d1
- (unsigned)moveCharactersAndCapsToAltSide:(unsigned)altSide position:(unsigned)position expansion:(int)expansion;	// 0x3213c215
- (void)sendSelectedString;	// 0x3213c485
- (void)setSelectedIndex:(int)index;	// 0x3213c901
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3213c071
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3213c165
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3213c179
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3213c1a5
@end

