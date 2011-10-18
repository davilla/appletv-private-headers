/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {
@private
	NSManagedObjectID *_objectID;	// 4 = 0x4
	unsigned long long _versionNumber;	// 8 = 0x8
	id _propertyCache;	// 16 = 0x10
	void *_reserved1;	// 20 = 0x14
}
@property(readonly, retain) NSManagedObjectID *objectID;	// G=0x331c5959; converted property
+ (void)initialize;	// 0x331c5a0d
- (id)initWithObjectID:(id)objectID withValues:(id)values version:(unsigned long long)version;	// 0x331c5ce9
- (id)_snapshot_;	// 0x331c5981
- (unsigned)_versionNumber;	// 0x331c5985
- (void)dealloc;	// 0x331c5995
- (const id *)knownKeyValuesPointer;	// 0x331c5ad5
// converted property getter: - (id)objectID;	// 0x331c5959
- (void)updateWithValues:(id)values version:(unsigned long long)version;	// 0x331c5af5
- (id)valueForPropertyDescription:(id)propertyDescription;	// 0x331c5a29
- (unsigned long long)version;	// 0x331c5969
@end

