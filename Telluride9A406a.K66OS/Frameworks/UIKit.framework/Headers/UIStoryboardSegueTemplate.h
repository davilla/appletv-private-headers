/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class UIViewController, NSString;

__attribute__((visibility("hidden")))
@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {
@private
	NSString *_identifier;	// 4 = 0x4
	NSString *_segueClassName;	// 8 = 0x8
	UIViewController *_viewController;	// 12 = 0xc
	NSString *_destinationViewControllerIdentifier;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x359e67e1; @synthesize=_identifier
@property(assign, nonatomic) UIViewController *viewController;	// G=0x359e67f1; S=0x359e6801; @synthesize=_viewController
- (id)initWithCoder:(id)coder;	// 0x359e64c1
- (void)dealloc;	// 0x359e644d
- (id)defaultSegueClassName;	// 0x359e661d
- (Class)effectiveSegueClass;	// 0x359e6629
- (void)encodeWithCoder:(id)coder;	// 0x359e658d
// declared property getter: - (id)identifier;	// 0x359e67e1
- (void)perform:(id)perform;	// 0x359e6745
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x359e66bd
// declared property setter: - (void)setViewController:(id)controller;	// 0x359e6801
// declared property getter: - (id)viewController;	// 0x359e67f1
@end

