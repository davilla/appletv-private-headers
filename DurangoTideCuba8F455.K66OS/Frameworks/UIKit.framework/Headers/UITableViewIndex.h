/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIColor, UIFont, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UITableViewIndex : UIControl {
@private
	NSArray *_titles;	// 68 = 0x44
	UIFont *_font;	// 72 = 0x48
	int _selectedSection;	// 76 = 0x4c
	BOOL _pastTop;	// 80 = 0x50
	BOOL _pastBottom;	// 81 = 0x51
	CGSize _cachedSize;	// 84 = 0x54
	CGSize _cachedSizeToFit;	// 92 = 0x5c
	UIColor *_indexColor;	// 100 = 0x64
	UIColor *_indexBackgroundColor;	// 104 = 0x68
}
@property(retain, nonatomic) UIFont *font;	// G=0x300efe31; S=0x3027a231; 
@property(retain, nonatomic) UIColor *indexBackgroundColor;	// G=0x3027a1b9; S=0x300efac9; 
@property(retain, nonatomic) UIColor *indexColor;	// G=0x3027a1e9; S=0x300efa7d; 
@property(readonly, assign, nonatomic) BOOL pastBottom;	// G=0x3027a019; @synthesize=_pastBottom
@property(readonly, assign, nonatomic) BOOL pastTop;	// G=0x3027a029; @synthesize=_pastTop
@property(readonly, assign, nonatomic) int selectedSection;	// G=0x30170275; @synthesize=_selectedSection
@property(readonly, assign, nonatomic) NSString *selectedSectionTitle;	// G=0x30170285; 
@property(retain, nonatomic) NSArray *titles;	// G=0x3027a009; S=0x300efb49; 
- (id)initWithFrame:(CGRect)frame;	// 0x300ef941
- (id)_createTouchesWithMouseEvent:(GSEventRef)mouseEvent phase:(int)phase;	// 0x3027a38d
- (id)_displayTitles;	// 0x300f5731
- (void)_selectSectionForTouch:(id)touch withEvent:(id)event;	// 0x3016fdd9
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3016fdb1
- (void)cancelTrackingWithEvent:(id)event;	// 0x3027a27d
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3027a219
- (void)dealloc;	// 0x3027a2e5
- (void)drawRect:(CGRect)rect;	// 0x300f51b1
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x301706c1
// declared property getter: - (id)font;	// 0x300efe31
// declared property getter: - (id)indexBackgroundColor;	// 0x3027a1b9
// declared property getter: - (id)indexColor;	// 0x3027a1e9
- (unsigned)maximumNumberOfTitlesWithoutTruncationForHeight:(float)height;	// 0x3027a365
- (void)mouseDown:(GSEventRef)down;	// 0x3027a139
- (void)mouseDragged:(GSEventRef)dragged;	// 0x3027a0b9
- (void)mouseUp:(GSEventRef)up;	// 0x3027a039
// declared property getter: - (BOOL)pastBottom;	// 0x3027a019
// declared property getter: - (BOOL)pastTop;	// 0x3027a029
// declared property getter: - (int)selectedSection;	// 0x30170275
// declared property getter: - (id)selectedSectionTitle;	// 0x30170285
// declared property setter: - (void)setFont:(id)font;	// 0x3027a231
// declared property setter: - (void)setIndexBackgroundColor:(id)color;	// 0x300efac9
// declared property setter: - (void)setIndexColor:(id)color;	// 0x300efa7d
// declared property setter: - (void)setTitles:(id)titles;	// 0x300efb49
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x300efc1d
// declared property getter: - (id)titles;	// 0x3027a009
@end

