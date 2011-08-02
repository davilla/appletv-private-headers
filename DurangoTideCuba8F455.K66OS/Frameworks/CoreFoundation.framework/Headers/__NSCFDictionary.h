/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableDictionary.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFDictionary : NSMutableDictionary {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x342bc291
- (Class)classForCoder;	// 0x3426b729
- (id)copyWithZone:(NSZone *)zone;	// 0x34243871
- (unsigned)count;	// 0x34232ebd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x34243811
- (void)finalize;	// 0x342bdb8d
- (unsigned)hash;	// 0x342bdb75
- (BOOL)isEqual:(id)equal;	// 0x342699d9
- (id)keyEnumerator;	// 0x34268875
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3423dd8d
- (id)objectForKey:(id)key;	// 0x3422d601
- (oneway void)release;	// 0x3422a0c5
- (void)removeAllObjects;	// 0x34230f05
- (void)removeObjectForKey:(id)key;	// 0x34258f7d
- (id)retain;	// 0x34229e61
- (unsigned)retainCount;	// 0x342bdb81
- (void)setObject:(id)object forKey:(id)key;	// 0x34232919
- (void)setObservationInfo:(void *)info;	// 0x342bdbc9
@end

