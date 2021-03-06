/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableDictionary.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFDictionary : NSMutableDictionary {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3104b32d
- (Class)classForCoder;	// 0x3104b55d
- (id)copyWithZone:(NSZone *)zone;	// 0x3104bbd5
- (unsigned)count;	// 0x3104b5ad
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3104b5cd
- (void)finalize;	// 0x3104b521
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x3104b805
- (unsigned)hash;	// 0x3104b4ed
- (BOOL)isEqual:(id)equal;	// 0x3104b4a1
- (id)keyEnumerator;	// 0x3104b5dd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3104b595
- (id)objectForKey:(id)key;	// 0x3104b5b9
- (oneway void)release;	// 0x3104b509
- (void)removeAllObjects;	// 0x3104b829
- (void)removeObjectForKey:(id)key;	// 0x3104b751
- (id)retain;	// 0x3104b4f9
- (unsigned)retainCount;	// 0x3104b515
- (void)setObject:(id)object forKey:(id)key;	// 0x3104b62d
- (void)setObservationInfo:(void *)info;	// 0x3104b891
@end

