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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32eaa291
- (Class)classForCoder;	// 0x32e59729
- (id)copyWithZone:(NSZone *)zone;	// 0x32e31871
- (unsigned)count;	// 0x32e20ebd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32e31811
- (void)finalize;	// 0x32eabb8d
- (unsigned)hash;	// 0x32eabb75
- (BOOL)isEqual:(id)equal;	// 0x32e579d9
- (id)keyEnumerator;	// 0x32e56875
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32e2bd8d
- (id)objectForKey:(id)key;	// 0x32e1b601
- (oneway void)release;	// 0x32e180c5
- (void)removeAllObjects;	// 0x32e1ef05
- (void)removeObjectForKey:(id)key;	// 0x32e46f7d
- (id)retain;	// 0x32e17e61
- (unsigned)retainCount;	// 0x32eabb81
- (void)setObject:(id)object forKey:(id)key;	// 0x32e20919
- (void)setObservationInfo:(void *)info;	// 0x32eabbc9
@end

