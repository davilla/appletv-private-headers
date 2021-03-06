/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMapTable.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSConcreteMapTable : NSMapTable {
	NSSlice keys;	// 4 = 0x4
	NSSlice values;	// 68 = 0x44
	unsigned count;	// 132 = 0x84
	unsigned capacity;	// 136 = 0x88
	unsigned keyOptions;	// 140 = 0x8c
	unsigned valueOptions;	// 144 = 0x90
	unsigned mutations;	// 148 = 0x94
	int growLock;	// 152 = 0x98
	bool shouldRehash;	// 156 = 0x9c
}
@property(readonly, assign) unsigned count;	// G=0x3467114d; converted property
- (id)init;	// 0x346c7075
- (id)initWithCoder:(id)coder;	// 0x346c7781
- (id)initWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x3463f561
- (id)initWithKeyPointerFunctions:(id)keyPointerFunctions valuePointerFunctions:(id)functions capacity:(unsigned)capacity;	// 0x346c7571
- (void)_initBlock;	// 0x3463f6cd
- (void)_setBackingStore;	// 0x3463f6f1
- (id)allKeys;	// 0x346c8425
- (id)allValues;	// 0x346c84e5
- (void)assign:(unsigned)assign key:(const void *)key value:(const void *)value isNew:(BOOL)aNew;	// 0x3463f80d
- (void)checkCount:(const char *)count;	// 0x346c7175
- (Class)classForCoder;	// 0x346c7765
- (BOOL)containsKeys:(const void **)keys values:(const void **)values count:(unsigned)count;	// 0x346c7ac9
- (id)copy;	// 0x346c7311
// converted property getter: - (unsigned)count;	// 0x3467114d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x346c8179
- (void)dealloc;	// 0x3463fa09
- (id)description;	// 0x346c8059
- (id)dump;	// 0x346c7bad
- (void)encodeWithCoder:(id)coder;	// 0x346c7829
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x346c7dad
- (void)finalize;	// 0x346c7ff5
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x346711a9
- (void)grow;	// 0x34663251
- (unsigned)hash;	// 0x346c82b9
- (BOOL)isEqual:(id)equal;	// 0x346c82f1
- (id)keyEnumerator;	// 0x346c823d
- (id)keyPointerFunctions;	// 0x346c7a01
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x346c7e51
- (id)objectEnumerator;	// 0x346c8299
- (id)objectForKey:(id)key;	// 0x3463f295
- (void)raiseCountUnderflowException;	// 0x346c7099
- (unsigned)realCount;	// 0x346c70dd
- (void)rehash;	// 0x346c7f3d
- (unsigned)rehashAround:(unsigned)around;	// 0x34660d95
- (void)removeAllItems;	// 0x3465125d
- (void)removeObjectForKey:(id)key;	// 0x3465e9d5
- (void)replaceItem:(const void *)item forExistingKey:(const void *)existingKey;	// 0x346c7ec9
- (void)setItem:(const void *)item forAbsentKey:(const void *)absentKey;	// 0x346c7c69
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x346c7cf5
- (void)setObject:(id)object forKey:(id)key;	// 0x3463f779
- (id)valuePointerFunctions;	// 0x346c7a65
- (void)zeroPairedEntries;	// 0x346c71fd
@end

