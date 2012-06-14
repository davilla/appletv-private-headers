/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSString;

@interface UIWebElementAction : NSObject {
	NSString *_title;	// 4 = 0x4
	id _actionHandler;	// 8 = 0x8
	int _type;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) int type;	// G=0x302be005; @synthesize=_type
+ (id)customElementActionWithTitle:(id)title actionHandler:(id)handler;	// 0x302bd949
+ (id)standardElementActionWithType:(int)type;	// 0x302bdf59
+ (id)standardElementActionWithType:(int)type customTitle:(id)title;	// 0x302bd9dd
- (id)initWithTitle:(id)title actionHandler:(id)handler type:(int)type;	// 0x302bd85d
- (void)_runActionWithElement:(id)element targetURL:(id)url documentView:(id)view interactionLocation:(CGPoint)location;	// 0x302bdf7d
- (id)_title;	// 0x302bdf6d
- (void)dealloc;	// 0x302bd8e5
// declared property getter: - (int)type;	// 0x302be005
@end
