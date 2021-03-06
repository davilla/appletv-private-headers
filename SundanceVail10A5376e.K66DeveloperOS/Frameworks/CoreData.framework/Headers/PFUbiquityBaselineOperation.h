/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityImportOperation.h"

@class NSString, PFUbiquityLocation, NSManagedObjectModel, NSPersistentStore;

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {
	NSString *_localPeerID;	// 24 = 0x18
	NSString *_storeName;	// 28 = 0x1c
	NSString *_modelVersionHash;	// 32 = 0x20
	NSManagedObjectModel *_model;	// 36 = 0x24
	PFUbiquityLocation *_ubiquityRootLocation;	// 40 = 0x28
	NSPersistentStore *_store;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x35d23df1; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSManagedObjectModel *model;	// G=0x35d23e21; @synthesize=_model
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x35d23e31; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSPersistentStore *store;	// G=0x35d23e41; @synthesize=_store
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x35d23e01; @synthesize=_storeName
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x35d23e11; @synthesize=_ubiquityRootLocation
- (id)initWithStore:(id)store andLocalPeerID:(id)anId;	// 0x35d2396d
- (id)initWithStoreName:(id)storeName localPeerID:(id)anId modelVersionHash:(id)hash andRootLocation:(id)location;	// 0x35d23b2d
- (void)dealloc;	// 0x35d23c31
- (id)description;	// 0x35d23d35
// declared property getter: - (id)localPeerID;	// 0x35d23df1
// declared property getter: - (id)model;	// 0x35d23e21
// declared property getter: - (id)modelVersionHash;	// 0x35d23e31
// declared property getter: - (id)store;	// 0x35d23e41
// declared property getter: - (id)storeName;	// 0x35d23e01
- (void)storeWillBeRemoved:(id)store;	// 0x35d23bed
// declared property getter: - (id)ubiquityRootLocation;	// 0x35d23e11
@end

