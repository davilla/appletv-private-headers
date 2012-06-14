/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDictionary.h"


@interface NSMutableDictionary : NSDictionary {
}
+ (id)dictionaryWithCapacity:(unsigned)capacity;	// 0x319e54a5
- (id)initWithCapacity:(unsigned)capacity;	// 0x31a5baf9
- (id)initWithObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x31a5bb1d
- (void)_mutate;	// 0x319dd205
- (void)addEntriesFromDictionary:(id)dictionary;	// 0x319dd0a5
- (void)addObject:(id)object forKey:(id)key;	// 0x31a5a335
- (void)addObjects:(id)objects forKeys:(id)keys;	// 0x31a5a72d
- (void)addObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x31a5a449
- (void)invert;	// 0x31a5a941
- (void)removeAllObjects;	// 0x31a5aa4d
- (void)removeEntriesInDictionary:(id)dictionary;	// 0x31a5ac01
- (void)removeKeysForObject:(id)object;	// 0x31a5ad5d
- (void)removeObjectForKey:(id)key;	// 0x31a5a311
- (void)removeObjectsForKeys:(id)keys;	// 0x319f7da9
- (void)replaceObject:(id)object forKey:(id)key;	// 0x31a5aecd
- (void)replaceObjects:(id)objects forKeys:(id)keys;	// 0x31a5b2a9
- (void)replaceObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x31a5afe1
- (void)setDictionary:(id)dictionary;	// 0x319f2f91
- (void)setEntriesFromDictionary:(id)dictionary;	// 0x31a5b4bd
- (void)setObject:(id)object forKey:(id)key;	// 0x31a5a2ed
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x31a5b8e5
- (void)setObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x31a5b61d
@end
