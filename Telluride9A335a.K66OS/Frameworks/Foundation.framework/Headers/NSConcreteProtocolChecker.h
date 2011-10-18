/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSProtocolChecker.h"

@class NSObject, Protocol;

__attribute__((visibility("hidden")))
@interface NSConcreteProtocolChecker : NSProtocolChecker {
@private
	NSObject *_target;	// 4 = 0x4
	Protocol *_protocol;	// 8 = 0x8
}
@property(readonly, retain) Protocol *protocol;	// G=0x32023d2d; converted property
@property(readonly, retain) NSObject *target;	// G=0x320bc321; converted property
- (id)initWithTarget:(id)target protocol:(id)protocol;	// 0x32023ad9
- (void)dealloc;	// 0x3204334d
// converted property getter: - (id)protocol;	// 0x32023d2d
// converted property getter: - (id)target;	// 0x320bc321
@end

