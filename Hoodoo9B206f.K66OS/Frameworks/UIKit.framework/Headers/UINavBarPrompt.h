/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UINavigationBar;

__attribute__((visibility("hidden")))
@interface UINavBarPrompt : UIView {
@private
	NSString *_prompt;	// 48 = 0x30
	UINavigationBar *_navBar;	// 52 = 0x34
}
@property(retain) NSString *prompt;	// G=0x35484ea5; S=0x354d6ba1; converted property
- (id)initWithPrompt:(id)prompt navBar:(id)bar;	// 0x35484e05
- (void)clearWeakReference:(id)reference;	// 0x354d6b3d
- (void)dealloc;	// 0x354d6b55
- (void)drawRect:(CGRect)rect;	// 0x354850b1
// converted property getter: - (id)prompt;	// 0x35484ea5
- (CGRect)promptBounds;	// 0x354d6bf9
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x354d6ba1
@end
