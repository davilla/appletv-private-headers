/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <UIWindow.h> // Unknown library


@interface UIPDFAutoRotatingWindow : UIWindow {
	int _interfaceOrientation;	// 124 = 0x7c
}
+ (id)sharedPopoverHostingWindow;	// 0x30bdf509
- (id)initWithFrame:(CGRect)frame;	// 0x30bdf2c1
- (void)_didRemoveSubview:(id)subview;	// 0x30bdf1ed
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30bdf1b5
- (void)updateForOrientation:(int)orientation;	// 0x30bdf27d
@end

