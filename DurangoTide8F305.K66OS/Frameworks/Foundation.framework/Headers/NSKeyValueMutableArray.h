/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableArray.h> // Unknown library
#import "NSKeyValueProxyCaching.h"

@class NSString, NSObject;

__attribute__((visibility("hidden")))
@interface NSKeyValueMutableArray : NSMutableArray <NSKeyValueProxyCaching> {
@private
	NSObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x3279fdc1
+ (id)_proxyShare;	// 0x3279fe41
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x3279fd3d
- (XXStruct_OzJQfB)_proxyLocator;	// 0x3279ef19
- (void)_proxyNonGCFinalize;	// 0x3279fced
- (void)dealloc;	// 0x3279fdd9
- (void)setArray:(id)array;	// 0x3279fcc1
@end

