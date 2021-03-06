/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMapTable.h"


__attribute__((visibility("hidden")))
@interface NSClassicMapTable : NSMapTable {
@private
	struct {
		/*function-pointer*/ void *hash;
		/*function-pointer*/ void *isEqual;
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
		void *notAKeyMarker;
	} _keyCallBacks;	// 4 = 0x4
	struct {
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
	} _valueCallBacks;	// 28 = 0x1c
	CFBasicHashRef _ht;	// 40 = 0x28
}
- (id)init;	// 0x3108e4ed
- (id)allKeys;	// 0x3108e9d9
- (id)allValues;	// 0x3108ec61
- (id)copy;	// 0x3108e57d
- (unsigned)count;	// 0x310328e1
- (void)dealloc;	// 0x3108e4f1
- (id)description;	// 0x3108e7d9
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x3108e74d
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x3108eeed
- (BOOL)isEqual:(id)equal;	// 0x3108e545
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x3108e655
- (id)objectForKey:(id)key;	// 0x31031b8d
- (void)removeAllItems;	// 0x3108e531
- (void)removeObjectForKey:(id)key;	// 0x31032259
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x3108e691
- (void)setObject:(id)object forKey:(id)key;	// 0x31031bb5
@end

