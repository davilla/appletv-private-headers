/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityImportOperation.h"

@class NSManagedObjectModel, NSPersistentStore, NSString, PFUbiquityLocation;

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
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x3637e3f9; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSManagedObjectModel *model;	// G=0x3637e3c9; @synthesize=_model
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x3637e3b9; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSPersistentStore *store;	// G=0x3637e3a9; @synthesize=_store
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x3637e3e9; @synthesize=_storeName
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x3637e3d9; @synthesize=_ubiquityRootLocation
- (id)initWithStore:(id)store andLocalPeerID:(id)anId;	// 0x3637e409
- (void)dealloc;	// 0x3637e59d
- (id)description;	// 0x3637e67d
// declared property getter: - (id)localPeerID;	// 0x3637e3f9
// declared property getter: - (id)model;	// 0x3637e3c9
// declared property getter: - (id)modelVersionHash;	// 0x3637e3b9
// declared property getter: - (id)store;	// 0x3637e3a9
// declared property getter: - (id)storeName;	// 0x3637e3e9
// declared property getter: - (id)ubiquityRootLocation;	// 0x3637e3d9
@end

