/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSManagedObjectContext, NSPersistentStore, NSString, PFUbiquityLocation, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface _PFUbiquityStack : NSObject {
@private
	NSManagedObjectContext *_metadataMOC;	// 4 = 0x4
	NSPersistentStoreCoordinator *_metadataPSC;	// 8 = 0x8
	NSPersistentStore *_metadataStore;	// 12 = 0xc
	NSMutableDictionary *_peerRangeCache;	// 16 = 0x10
	NSMutableDictionary *_objectHistoryCache;	// 20 = 0x14
	NSString *_localPeerID;	// 24 = 0x18
	PFUbiquityLocation *_ubiquityRootURL;	// 28 = 0x1c
	PFUbiquityLocation *_metadataStoreFileLocation;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x32378001; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSManagedObjectContext *metadataMOC;	// G=0x32378021; @synthesize=_metadataMOC
@property(readonly, assign, nonatomic) NSPersistentStoreCoordinator *metadataPSC;	// G=0x32378011; @synthesize=_metadataPSC
@property(readonly, assign, nonatomic) PFUbiquityLocation *metadataStoreFileLocation;	// G=0x32377fe1; @synthesize=_metadataStoreFileLocation
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootURL;	// G=0x32377ff1; @synthesize=_ubiquityRootURL
+ (id)defaultUbiquityLocationForBundleIdentifier:(id)bundleIdentifier createIfMissing:(BOOL)missing;	// 0x323785b1
+ (id)defaultUbiquityLocationForPeerID:(id)peerID andBundleIdentifier:(id)identifier createIfMissing:(BOOL)missing;	// 0x32378689
+ (id)defaultUbiquityRootLocation;	// 0x32378479
+ (id)getUbiquityModel;	// 0x32378751
+ (void)initialize;	// 0x323787b9
+ (int)integerFromPrimaryKeyString:(id)primaryKeyString;	// 0x3237876d
+ (unsigned)peerRangeStartForPrimaryKey:(unsigned)primaryKey;	// 0x32377fd9
+ (BOOL)shouldRecoverStackMetadataForStore:(id)store withLocalPeerID:(id)localPeerID;	// 0x32378145
- (id)init;	// 0x32377fd5
- (id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x3237c8f9
- (id)addPersistentStoreDescribedByMetadata:(id)metadata toPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x323798d5
- (id)addPersistentStoreWithName:(id)name toPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x32379871
- (id)allPeers;	// 0x32379fa1
- (void)cachePeerRanges;	// 0x3237bb95
- (void)cacheTransactionHistoryWithPeerState:(id)peerState andTransactionDate:(id)date forStoreName:(id)storeName andImportingPeerID:(id)anId;	// 0x32378841
- (id)cachedTransactionEntryHistoryForLocalIDString:(id)localIDString;	// 0x3237881d
- (id)createGlobalIdentifierForManagedObjectID:(id)managedObjectID withPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x32379c65
- (id)createLocalIDURIForLocalPeerGlobalID:(id)localPeerGlobalID withPeerRangeCache:(id)peerRangeCache andStoreMetadata:(id)metadata importContext:(id)context;	// 0x3237bab9
- (id)createMapOfGlobalObjectIDsToLocalIDURIs:(id)localIDURIs forStoreSaveSnapshot:(id)storeSaveSnapshot withPersistentStoreCoordinator:(id)persistentStoreCoordinator andImportContext:(id)context;	// 0x3237b1d1
- (void)createNewPeerRangesForFakeManagedObjects:(id)fakeManagedObjects withPeerEntityNameRangeStartSetDictionary:(id)peerEntityNameRangeStartSetDictionary andStoreNameToFetchedMetadata:(id)fetchedMetadata;	// 0x3237a2f9
- (void)dealloc;	// 0x32378031
- (id)description;	// 0x3237c48d
- (id)importStateForStoreName:(id)storeName andPeerID:(id)anId;	// 0x32379b71
- (id)importStatesMatchingStoreName:(id)name;	// 0x32379abd
- (BOOL)initializeMetadataStoreWithError:(id *)error;	// 0x3237c531
// declared property getter: - (id)localPeerID;	// 0x32378001
- (unsigned)localPrimaryKeyForPeerID:(id)peerID inStoreNamed:(id)storeNamed andPrimaryKey:(unsigned)key forEntityNamed:(id)entityNamed;	// 0x32379fdd
// declared property getter: - (id)metadataMOC;	// 0x32378021
// declared property getter: - (id)metadataPSC;	// 0x32378011
// declared property getter: - (id)metadataStoreFileLocation;	// 0x32377fe1
- (id)newCoordinatorForPersistentStoreName:(id)persistentStoreName;	// 0x323799f9
- (id)peerForPeerID:(id)peerID createIfMissing:(BOOL)missing;	// 0x32379f51
- (BOOL)purgeAndInitializeMetadataStoreFileWithError:(id *)error;	// 0x3237c2c1
- (BOOL)purgeMetadataForStoreMetadata:(id)storeMetadata withError:(id *)error;	// 0x3237bf71
- (BOOL)shouldProcessTransactionLogAtLocation:(id)location error:(id *)error;	// 0x3237940d
// declared property getter: - (id)ubiquityRootURL;	// 0x32377ff1
@end
