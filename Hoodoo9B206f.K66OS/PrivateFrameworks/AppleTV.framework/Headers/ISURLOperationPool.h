/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ISOperationQueue;

__attribute__((visibility("hidden")))
@interface ISURLOperationPool : NSObject {
@private
	ISOperationQueue *_operationQueue;	// 4 = 0x4
}
@property(retain, nonatomic) ISOperationQueue *operationQueue;	// G=0x3682ea01; S=0x3682ea11; @synthesize=_operationQueue
- (id)init;	// 0x3682e609
- (id)_poolOperationForOperation:(id)operation flags:(int)flags;	// 0x3682e859
- (void)addOperation:(id)operation withFlags:(int)flags;	// 0x3682e6c1
- (void)cancelOperation:(id)operation;	// 0x3682e76d
- (void)dealloc;	// 0x3682e675
// declared property getter: - (id)operationQueue;	// 0x3682ea01
// declared property setter: - (void)setOperationQueue:(id)queue;	// 0x3682ea11
@end
