/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSManagedObjectID.h"

@class NSEntityDescription;

__attribute__((visibility("hidden")))
@interface NSTemporaryObjectID : NSManagedObjectID {
@private
	int _cd_rc;	// 4 = 0x4
	int _counter;	// 8 = 0x8
	NSEntityDescription *_entity;	// 12 = 0xc
}
@property(readonly, retain) NSEntityDescription *entity;	// G=0x36311611; converted property
+ (id)initWithEntity:(id)entity;	// 0x363117d1
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x363117b1
+ (void)_release_1;	// 0x363118ad
+ (id)_retain_1;	// 0x363118e9
+ (void)_storeDeallocated;	// 0x36311bfd
+ (BOOL)accessInstanceVariablesDirectly;	// 0x36311535
+ (id)alloc;	// 0x36311531
+ (id)allocWithZone:(NSZone *)zone;	// 0x3631152d
+ (unsigned)allocateBatch:(id *)batch forEntity:(id)entity count:(unsigned)count;	// 0x36311821
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x36311529
+ (Class)classForStore:(id)store;	// 0x36311909
+ (void)initialize;	// 0x36256a39
+ (void)release;	// 0x36311549
+ (id)retain;	// 0x36311545
+ (void)setObjectStoreIdentifier:(id)identifier;	// 0x36311bb5
+ (int)version;	// 0x36311539
- (id)initWithEntity:(id)entity;	// 0x36311795
- (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x36311e3d
- (id)URIRepresentation;	// 0x36311c51
- (BOOL)_isPersistentStoreAlive;	// 0x36311625
- (id)_referenceData;	// 0x36311645
- (id)_retainedURIString;	// 0x36311c9d
- (void)_setPersistentStore:(id)store;	// 0x36311e01
- (id)_storeIdentifier;	// 0x36311d95
- (void)dealloc;	// 0x36311ec5
// converted property getter: - (id)entity;	// 0x36311611
- (void)finalize;	// 0x36311e5d
- (unsigned)hash;	// 0x36311561
- (BOOL)isEqual:(id)equal;	// 0x363115c1
- (BOOL)isTemporaryID;	// 0x36311621
- (id)persistentStore;	// 0x363115f5
- (void)release;	// 0x36311f35
- (id)retain;	// 0x36311f6d
- (unsigned)retainCount;	// 0x3631154d
@end

