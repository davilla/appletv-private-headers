/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityImportOperation.h"

@class NSString, PFUbiquityLocation, NSManagedObjectModel, NSPersistentStore;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {
@private
	NSString *_localPeerID;	// 24 = 0x18
	NSString *_storeName;	// 28 = 0x1c
	NSString *_modelVersionHash;	// 32 = 0x20
	NSManagedObjectModel *_model;	// 36 = 0x24
	PFUbiquityLocation *_ubiquityRootLocation;	// 40 = 0x28
	NSPersistentStore *_store;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x32e4ee2d; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSManagedObjectModel *model;	// G=0x32e4ee5d; @synthesize=_model
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x32e4ee6d; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSPersistentStore *store;	// G=0x32e4ee7d; @synthesize=_store
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x32e4ee3d; @synthesize=_storeName
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x32e4ee4d; @synthesize=_ubiquityRootLocation
- (id)initWithStore:(id)store andLocalPeerID:(id)anId;	// 0x32e4e9a9
- (id)initWithStoreName:(id)storeName localPeerID:(id)anId modelVersionHash:(id)hash andRootLocation:(id)location;	// 0x32e4eb69
- (void)dealloc;	// 0x32e4ec6d
- (id)description;	// 0x32e4ed71
// declared property getter: - (id)localPeerID;	// 0x32e4ee2d
// declared property getter: - (id)model;	// 0x32e4ee5d
// declared property getter: - (id)modelVersionHash;	// 0x32e4ee6d
// declared property getter: - (id)store;	// 0x32e4ee7d
// declared property getter: - (id)storeName;	// 0x32e4ee3d
- (void)storeWillBeRemoved:(id)store;	// 0x32e4ec29
// declared property getter: - (id)ubiquityRootLocation;	// 0x32e4ee4d
@end

