/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface ATVAutounbinder : NSObject {
@private
	NSMapTable *_bindingsByObject;	// 4 = 0x4
	BOOL _assertOnRetainEnabled;	// 8 = 0x8
}
- (id)init;	// 0x303dfde9
- (void)_assertIllegalRetain;	// 0x303e016d
- (void)_enableAssertOnRetain;	// 0x303e0159
- (void)addBinding:(id)binding fromObject:(id)object;	// 0x303dfe5d
- (void)dealloc;	// 0x303dff85
- (void)removeBinding:(id)binding fromObject:(id)object;	// 0x303dff09
- (id)retain;	// 0x303e0109
@end

