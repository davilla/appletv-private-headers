/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObjectRelation.h"

@class EKObject;

__attribute__((visibility("hidden")))
@interface EKObjectToOneRelation : EKObjectRelation {
@private
	EKObject *_relatedObject;	// 20 = 0x14
	BOOL _weak;	// 24 = 0x18
}
@property(retain) EKObject *relatedObject;	// G=0x30bfe339; S=0x30c08635; converted property
@property(readonly, assign, getter=isWeak) BOOL weak;	// G=0x30c0c7bd; converted property
- (id)initWithObject:(id)object relationName:(id)name inverseRelationName:(id)name3 weak:(BOOL)weak;	// 0x30bfe269
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x30c09c1d
- (void)_clear;	// 0x30c108b5
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x30c1412d
- (void)_setRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x30c08655
- (void)_unload;	// 0x30c07a85
- (id)committedValue;	// 0x30c68cf9
- (void)dealloc;	// 0x30c10925
- (id)description;	// 0x30c68e01
- (void)didCommit;	// 0x30c0fef9
// converted property getter: - (BOOL)isWeak;	// 0x30c0c7bd
- (void)refresh;	// 0x30c10d8d
// converted property getter: - (id)relatedObject;	// 0x30bfe339
- (void)reset;	// 0x30c68d71
- (void)rollback;	// 0x30c07a15
// converted property setter: - (void)setRelatedObject:(id)object;	// 0x30c08635
- (void)updatePersistentObject;	// 0x30c0bf91
- (BOOL)validate:(id *)validate;	// 0x30c0ae91
@end
