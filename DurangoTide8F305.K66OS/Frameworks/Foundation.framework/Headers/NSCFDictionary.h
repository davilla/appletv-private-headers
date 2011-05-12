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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3278932d
- (Class)classForCoder;	// 0x3278955d
- (id)copyWithZone:(NSZone *)zone;	// 0x32789bd5
- (unsigned)count;	// 0x327895ad
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x327895cd
- (void)finalize;	// 0x32789521
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x32789805
- (unsigned)hash;	// 0x327894ed
- (BOOL)isEqual:(id)equal;	// 0x327894a1
- (id)keyEnumerator;	// 0x327895dd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32789595
- (id)objectForKey:(id)key;	// 0x327895b9
- (oneway void)release;	// 0x32789509
- (void)removeAllObjects;	// 0x32789829
- (void)removeObjectForKey:(id)key;	// 0x32789751
- (id)retain;	// 0x327894f9
- (unsigned)retainCount;	// 0x32789515
- (void)setObject:(id)object forKey:(id)key;	// 0x3278962d
- (void)setObservationInfo:(void *)info;	// 0x32789891
@end

