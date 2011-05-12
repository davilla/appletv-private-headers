/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class NSString, UITableCell;

__attribute__((visibility("hidden")))
@interface UIRemoveControlTextButton : UIControl {
@private
	UITableCell *_tableCell;	// 68 = 0x44
	NSString *_label;	// 72 = 0x48
}
- (id)initWithRemoveControl:(id)removeControl withTarget:(id)target withLabel:(id)label;	// 0x3210476d
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x32103979
- (void)_controlMouseDown:(GSEventRef)down;	// 0x32102a49
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x32102a45
- (void)_controlMouseUp:(GSEventRef)up;	// 0x32102a4d
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x32102a51
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x32102a59
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x32102a55
- (id)_scriptingInfo;	// 0x32103c61
- (float)buttonWidth;	// 0x32103ff9
- (void)dealloc;	// 0x32103ced
- (void)drawRect:(CGRect)rect;	// 0x32105309
- (void)sizeToFit;	// 0x32103991
@end

