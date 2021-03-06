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
+ (void)_provideMeCardIfAvailableToBlock:(id)block otherwiseCompleteWithBlock:(id)block2;	// 0x33c8e26d
+ (void)provideMeCardIfAvailableToBlock:(id)block;	// 0x33c8e2fd
+ (void)provideMeCardToBlock:(id)block;	// 0x33c8e2e9
+ (id)sharedCache;	// 0x33c8e225
- (id)init;	// 0x33c8e311
- (void)_addressBookChanged:(id)changed;	// 0x33c8e565
- (void)_requestMeCardWithBlock:(id)block;	// 0x33c8e409
- (void *)copyMeRecord;	// 0x33c8e659
- (void)dealloc;	// 0x33c8e399
- (void)setMeRecord:(void *)record;	// 0x33c8e579
@end

