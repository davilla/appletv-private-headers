/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDictionary.h"


@interface NSMutableDictionary : NSDictionary {
}
+ (id)dictionaryWithCapacity:(unsigned)capacity;	// 0x3271b4a5
- (id)initWithCapacity:(unsigned)capacity;	// 0x32791af9
- (id)initWithObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x32791b1d
- (void)_mutate;	// 0x32713205
- (void)addEntriesFromDictionary:(id)dictionary;	// 0x327130a5
- (void)addObject:(id)object forKey:(id)key;	// 0x32790335
- (void)addObjects:(id)objects forKeys:(id)keys;	// 0x3279072d
- (void)addObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x32790449
- (void)invert;	// 0x32790941
- (void)removeAllObjects;	// 0x32790a4d
- (void)removeEntriesInDictionary:(id)dictionary;	// 0x32790c01
- (void)removeKeysForObject:(id)object;	// 0x32790d5d
- (void)removeObjectForKey:(id)key;	// 0x32790311
- (void)removeObjectsForKeys:(id)keys;	// 0x3272dda9
- (void)replaceObject:(id)object forKey:(id)key;	// 0x32790ecd
- (void)replaceObjects:(id)objects forKeys:(id)keys;	// 0x327912a9
- (void)replaceObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x32790fe1
- (void)setDictionary:(id)dictionary;	// 0x32728f91
- (void)setEntriesFromDictionary:(id)dictionary;	// 0x327914bd
- (void)setObject:(id)object forKey:(id)key;	// 0x327902ed
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x327918e5
- (void)setObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x3279161d
@end
