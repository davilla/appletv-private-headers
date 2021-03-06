/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityToManyConflictDiff : NSObject {
@private
	NSMutableSet *_insertedObjectIDs;	// 4 = 0x4
	NSMutableSet *_deletedObjectIDs;	// 8 = 0x8
	NSString *_relationshipKey;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSMutableSet *deletedObjectIDs;	// G=0x323a0931; @synthesize=_deletedObjectIDs
@property(readonly, assign, nonatomic) NSMutableSet *insertedObjectIDs;	// G=0x323a0941; @synthesize=_insertedObjectIDs
@property(readonly, assign, nonatomic) NSString *relationshipKey;	// G=0x323a0921; @synthesize=_relationshipKey
- (id)init;	// 0x323a0951
- (id)initForRelationshipAtKey:(id)key;	// 0x323a102d
- (void)dealloc;	// 0x323a0f99
// declared property getter: - (id)deletedObjectIDs;	// 0x323a0931
- (id)description;	// 0x323a0f1d
- (void)diffWithLogSnapshot:(id)logSnapshot andPreviousSnapshot:(id)snapshot;	// 0x323a09e5
// declared property getter: - (id)insertedObjectIDs;	// 0x323a0941
- (BOOL)isEqual:(id)equal;	// 0x323a0e55
// declared property getter: - (id)relationshipKey;	// 0x323a0921
@end

