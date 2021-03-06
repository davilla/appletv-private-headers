/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"


@interface NSMergePolicy : NSObject {
@private
	unsigned _type;	// 4 = 0x4
	void *_reserved2;	// 8 = 0x8
	void *_reserved3;	// 12 = 0xc
}
@property(readonly, assign) unsigned mergeType;	// G=0x322edb8d; @synthesize=_type
@property(readonly, assign) unsigned type;	// G=0x322ef5a1; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x322edb85
+ (void)load;	// 0x32284141
- (id)initWithCoder:(id)coder;	// 0x322ef44d
- (id)initWithMergeType:(unsigned)mergeType;	// 0x32284241
- (id)initWithType:(unsigned)type;	// 0x322ef5b1
- (void)_mergeChangesObjectUpdatesTrumpForObject:(id)object withRecord:(id)record;	// 0x322edcb5
- (void)_mergeChangesStoreUpdatesTrumpForObject:(id)object withRecord:(id)record;	// 0x322eee7d
- (void)_mergeDeletionWithStoreChangesForObject:(id)object withRecord:(id)record;	// 0x322ee0ed
- (id)copyWithZone:(NSZone *)zone;	// 0x322ef591
- (void)dealloc;	// 0x322ef4e5
- (void)encodeWithCoder:(id)coder;	// 0x322ef41d
- (void)mergeToManyRelationshipForSourceObject:(id)sourceObject withOldSnapshot:(id)oldSnapshot newSnapshot:(id)snapshot andAncestor:(id)ancestor andLegacyPath:(BOOL)path;	// 0x322edb89
// declared property getter: - (unsigned)mergeType;	// 0x322edb8d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x322ef581
- (BOOL)resolveConflict:(id)conflict;	// 0x322ef24d
- (BOOL)resolveConflicts:(id)conflicts error:(id *)error;	// 0x322edb9d
// converted property getter: - (unsigned)type;	// 0x322ef5a1
@end

