/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSHashTable.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSClassicHashTable : NSHashTable {
@private
	struct {
		/*function-pointer*/ void *hash;
		/*function-pointer*/ void *isEqual;
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
	} _callBacks;	// 4 = 0x4
	CFBasicHashRef _ht;	// 24 = 0x18
}
- (id)init;	// 0x32794431
- (void)addObject:(id)object;	// 0x327748f9
- (id)allObjects;	// 0x327959c1
- (id)copy;	// 0x32795f61
- (unsigned)count;	// 0x327959a9
- (void)dealloc;	// 0x32795591
- (id)description;	// 0x32795885
- (void *)getItem:(const void *)item;	// 0x32774855
- (void)getKeys:(const void **)keys count:(unsigned *)count;	// 0x32795791
- (unsigned)hash;	// 0x32794581
- (void)insertItem:(const void *)item;	// 0x327746bd
- (void)insertKnownAbsentItem:(const void *)item;	// 0x327956ad
- (BOOL)isEqual:(id)equal;	// 0x327955e5
- (void)removeAllItems;	// 0x327955cd
- (void)removeItem:(const void *)item;	// 0x32795745
@end

