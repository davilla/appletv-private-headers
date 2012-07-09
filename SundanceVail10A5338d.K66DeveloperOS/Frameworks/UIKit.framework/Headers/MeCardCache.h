/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface MeCardCache : NSObject {
	void *_me;	// 4 = 0x4
}
+ (void)_provideMeCardIfAvailableToBlock:(id)block otherwiseCompleteWithBlock:(id)block2;	// 0x30ea8eed
+ (void)provideMeCardIfAvailableToBlock:(id)block;	// 0x30ea8f7d
+ (void)provideMeCardToBlock:(id)block;	// 0x30ea8f69
+ (id)sharedCache;	// 0x30ea8ea5
- (id)init;	// 0x30ea8f91
- (void)_addressBookChanged:(id)changed;	// 0x30ea91e5
- (void)_requestMeCardWithBlock:(id)block;	// 0x30ea9089
- (void *)copyMeRecord;	// 0x30ea92d9
- (void)dealloc;	// 0x30ea9019
- (void)setMeRecord:(void *)record;	// 0x30ea91f9
@end
