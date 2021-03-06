/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityStoreMetadata, PFUbiquityLocation, NSManagedObjectModel;

__attribute__((visibility("hidden")))
@interface PFUbiquityMigrationManager : NSObject {
@private
	NSManagedObjectModel *_destinationModel;	// 4 = 0x4
	NSManagedObjectModel *_sourceModel;	// 8 = 0x8
	PFUbiquityLocation *_rootLocation;	// 12 = 0xc
	PFUbiquityStoreMetadata *_storeMetadata;	// 16 = 0x10
}
@property(readonly, assign) NSManagedObjectModel *destinationModel;	// G=0x33203ae5; @synthesize=_destinationModel
@property(readonly, assign) PFUbiquityLocation *rootLocation;	// G=0x33203b05; @synthesize=_rootLocation
@property(readonly, assign) NSManagedObjectModel *sourceModel;	// G=0x33203af5; @synthesize=_sourceModel
@property(readonly, assign) PFUbiquityStoreMetadata *storeMetadata;	// G=0x33203ad5; @synthesize=_storeMetadata
- (id)initWithDestinationModel:(id)destinationModel storeMetadata:(id)metadata ubiquityRootLocation:(id)location;	// 0x33203b15
- (void)dealloc;	// 0x3320498d
// declared property getter: - (id)destinationModel;	// 0x33203ae5
- (BOOL)migrateUbiquitousContentForStoreName:(id)storeName peerID:(id)anId error:(id *)error;	// 0x33203c01
// declared property getter: - (id)rootLocation;	// 0x33203b05
// declared property getter: - (id)sourceModel;	// 0x33203af5
// declared property getter: - (id)storeMetadata;	// 0x33203ad5
@end

