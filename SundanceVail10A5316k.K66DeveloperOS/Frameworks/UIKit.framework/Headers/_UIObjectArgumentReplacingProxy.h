/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITargetedProxy.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIObjectArgumentReplacingProxy : _UITargetedProxy {
@private
	int _lock;	// 8 = 0x8
	NSMutableDictionary *_replacementMap;	// 12 = 0xc
}
- (void)dealloc;	// 0x304bd75d
- (void)forwardInvocation:(id)invocation;	// 0x304bd7a9
- (void)replaceObjectArgument:(id)argument with:(id)with;	// 0x304bd605
@end
