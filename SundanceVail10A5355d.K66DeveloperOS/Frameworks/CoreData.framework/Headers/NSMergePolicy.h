/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"


@interface NSMergePolicy : NSObject {
	unsigned _type;	// 4 = 0x4
	void *_reserved2;	// 8 = 0x8
	void *_reserved3;	// 12 = 0xc
}
@property(readonly, assign) unsigned mergeType;	// G=0x33505c79; @synthesize=_type
@property(readonly, assign) unsigned type;	// G=0x3350440d; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x335043f9
+ (void)load;	// 0x334a11dd
- (id)initWithCoder:(id)coder;	// 0x335044d9
- (id)initWithMergeType:(unsigned)mergeType;	// 0x334a12ed
- (id)initWithType:(unsigned)type;	// 0x335043fd
- (void)_mergeChangesObjectUpdatesTrumpForObject:(id)object withRecord:(id)record;	// 0x3350571d
- (void)_mergeChangesStoreUpdatesTrumpForObject:(id)object withRecord:(id)record;	// 0x33504761
- (void)_mergeDeletionWithStoreChangesForObject:(id)object withRecord:(id)record;	// 0x33504b21
- (id)copyWithZone:(NSZone *)zone;	// 0x3350441d
- (void)dealloc;	// 0x3350443d
- (void)encodeWithCoder:(id)coder;	// 0x33504571
- (void)mergeToManyRelationshipForSourceObject:(id)sourceObject withOldSnapshot:(id)oldSnapshot newSnapshot:(id)snapshot andAncestor:(id)ancestor andLegacyPath:(BOOL)path;	// 0x33505c75
// declared property getter: - (unsigned)mergeType;	// 0x33505c79
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3350442d
- (BOOL)resolveConflict:(id)conflict;	// 0x335045a1
- (BOOL)resolveConflicts:(id)conflicts error:(id *)error;	// 0x33505b49
// converted property getter: - (unsigned)type;	// 0x3350440d
@end

