/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library


@interface NSCache : NSObject {
@private
	id _delegate;	// 4 = 0x4
	void *_private[5];	// 8 = 0x8
	void *_reserved;	// 28 = 0x1c
}
@property(assign) unsigned countLimit;	// G=0x37154935; S=0x370b2ba9; converted property
@property(assign) id delegate;	// G=0x37154861; S=0x370bc031; converted property
@property(assign) BOOL evictsObjectsWithDiscardedContent;	// G=0x370bad09; S=0x37154949; converted property
@property(retain) id name;	// G=0x3715481d; S=0x370b2b11; converted property
@property(assign) unsigned totalCostLimit;	// G=0x37154921; S=0x370bc0a5; converted property
- (id)init;	// 0x370b2a29
- (id)allObjects;	// 0x37154965
// converted property getter: - (unsigned)countLimit;	// 0x37154935
- (void)dealloc;	// 0x3715470d
// converted property getter: - (id)delegate;	// 0x37154861
// converted property getter: - (BOOL)evictsObjectsWithDiscardedContent;	// 0x370bad09
- (void)finalize;	// 0x37154795
// converted property getter: - (id)name;	// 0x3715481d
- (id)objectForKey:(id)key;	// 0x370bac35
- (void)removeAllObjects;	// 0x370bf8e9
- (void)removeObjectForKey:(id)key;	// 0x371548f5
// converted property setter: - (void)setCountLimit:(unsigned)limit;	// 0x370b2ba9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x370bc031
// converted property setter: - (void)setEvictsObjectsWithDiscardedContent:(BOOL)discardedContent;	// 0x37154949
// converted property setter: - (void)setName:(id)name;	// 0x370b2b11
- (void)setObject:(id)object forKey:(id)key;	// 0x370bc645
- (void)setObject:(id)object forKey:(id)key cost:(unsigned)cost;	// 0x370bad21
// converted property setter: - (void)setTotalCostLimit:(unsigned)limit;	// 0x370bc0a5
// converted property getter: - (unsigned)totalCostLimit;	// 0x37154921
@end

