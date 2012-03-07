/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class EKObject, NSString;

__attribute__((visibility("hidden")))
@interface EKObjectRelation : NSObject {
@private
	EKObject *_owner;	// 4 = 0x4
	NSString *_relationName;	// 8 = 0x8
	BOOL _dirty;	// 12 = 0xc
	BOOL _loaded;	// 13 = 0xd
	NSString *_inverseName;	// 16 = 0x10
}
@property(readonly, assign, getter=isDirty) BOOL dirty;	// G=0x30fdb029; converted property
@property(readonly, assign, nonatomic) NSString *inverseName;	// G=0x30fe4739; @synthesize=_inverseName
@property(readonly, assign, nonatomic) EKObject *owner;	// G=0x30fe5ae1; @synthesize=_owner
@property(readonly, assign, nonatomic) NSString *relationName;	// G=0x30fe5a41; @synthesize=_relationName
- (id)initWithOwner:(id)owner relationName:(id)name inverseRelationName:(id)name3;	// 0x30fda2b5
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x31043f09
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x31043f0d
- (id)committedValue;	// 0x31043ee1
- (void)dealloc;	// 0x30fec38d
- (void)didCommit;	// 0x30feb9ad
// declared property getter: - (id)inverseName;	// 0x30fe4739
// converted property getter: - (BOOL)isDirty;	// 0x30fdb029
- (BOOL)isWeak;	// 0x31043e81
// declared property getter: - (id)owner;	// 0x30fe5ae1
- (void)refresh;	// 0x31043ed9
- (void)relatedObjectDidChange;	// 0x30fe5b15
// declared property getter: - (id)relationName;	// 0x30fe5a41
- (void)reset;	// 0x31043eb9
- (void)rollback;	// 0x30fe3a75
- (void)updatePersistentObject;	// 0x31043eb5
- (BOOL)validate:(id *)validate;	// 0x31043edd
@end
