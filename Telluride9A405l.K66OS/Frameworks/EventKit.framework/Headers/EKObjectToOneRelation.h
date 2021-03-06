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
@property(retain) EKObject *relatedObject;	// G=0x331ca329; S=0x331d4519; converted property
@property(readonly, assign, getter=isWeak) BOOL weak;	// G=0x331d8635; converted property
- (id)initWithObject:(id)object relationName:(id)name inverseRelationName:(id)name3 weak:(BOOL)weak;	// 0x331ca259
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x331d5add
- (void)_clear;	// 0x331dc369
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x331dfc15
- (void)_setRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x331d4539
- (void)_unload;	// 0x331d39e9
- (id)committedValue;	// 0x33233f11
- (void)dealloc;	// 0x331dc3d9
- (id)description;	// 0x33234019
- (void)didCommit;	// 0x331db9ad
// converted property getter: - (BOOL)isWeak;	// 0x331d8635
- (void)refresh;	// 0x331dc875
// converted property getter: - (id)relatedObject;	// 0x331ca329
- (void)reset;	// 0x33233f89
- (void)rollback;	// 0x331d3979
// converted property setter: - (void)setRelatedObject:(id)object;	// 0x331d4519
- (void)updatePersistentObject;	// 0x331d7e09
- (BOOL)validate:(id *)validate;	// 0x331d6d09
@end

