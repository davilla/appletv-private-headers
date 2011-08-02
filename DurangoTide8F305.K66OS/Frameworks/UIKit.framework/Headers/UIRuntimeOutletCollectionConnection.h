/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIRuntimeConnection.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {
@private
	NSString *runtimeCollectionClassName;	// 16 = 0x10
}
@property(copy) NSString *runtimeCollectionClassName;	// G=0x3224213d; S=0x32242155; @synthesize
- (id)initWithCoder:(id)coder;	// 0x32241e69
- (void)connect;	// 0x32241db9
- (void)connectForSimulator;	// 0x32242089
- (void)dealloc;	// 0x32241dcd
- (id)description;	// 0x32241d29
- (void)encodeWithCoder:(id)coder;	// 0x32241e15
- (void)performConnect;	// 0x32241ecd
// declared property getter: - (id)runtimeCollectionClassName;	// 0x3224213d
// declared property setter: - (void)setRuntimeCollectionClassName:(id)name;	// 0x32242155
@end
