/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyStoreMapping.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
@private
	NSString *_destinationEntityExternalName;	// 12 = 0xc
	NSArray *_foreignKeys;	// 16 = 0x10
	NSArray *_joins;	// 20 = 0x14
	unsigned _joinSemantic;	// 24 = 0x18
}
@property(retain) NSString *destinationEntityExternalName;	// G=0x362d2c01; S=0x362d2c61; converted property
@property(retain) NSArray *foreignKeys;	// G=0x362d2c11; S=0x362d2ca9; converted property
@property(assign) unsigned joinSemantic;	// G=0x362d2c31; S=0x362d2c41; converted property
@property(retain) NSArray *joins;	// G=0x362d2c21; S=0x362d2cf1; converted property
- (id)columnDefinitions;	// 0x362d2f39
- (id)constraintDefinitions;	// 0x362d2da1
- (void)dealloc;	// 0x362d2d39
// converted property getter: - (id)destinationEntityExternalName;	// 0x362d2c01
// converted property getter: - (id)foreignKeys;	// 0x362d2c11
- (BOOL)isEqual:(id)equal;	// 0x362d3049
// converted property getter: - (unsigned)joinSemantic;	// 0x362d2c31
// converted property getter: - (id)joins;	// 0x362d2c21
- (id)relationship;	// 0x362d2c51
// converted property setter: - (void)setDestinationEntityExternalName:(id)name;	// 0x362d2c61
// converted property setter: - (void)setForeignKeys:(id)keys;	// 0x362d2ca9
// converted property setter: - (void)setJoinSemantic:(unsigned)semantic;	// 0x362d2c41
// converted property setter: - (void)setJoins:(id)joins;	// 0x362d2cf1
@end

