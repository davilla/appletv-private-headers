/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityMetadataQueryMonitor, NSRecursiveLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquitySwitchboard : NSObject {
@private
	PFUbiquityMetadataQueryMonitor *_queryMonitor;	// 4 = 0x4
	NSMutableDictionary *_rootPathToEntry;	// 8 = 0x8
	NSRecursiveLock *_registrationLock;	// 12 = 0xc
}
+ (void)initialize;	// 0x31f6c749
+ (id)sharedSwitchboard;	// 0x31f6c60d
+ (id)ubiquitousExternalReferenceLocationForUUID:(id)uuid inStore:(id)store;	// 0x31f6c711
+ (id)urlForUbiquitousExternalReferenceLocation:(id)ubiquitousExternalReferenceLocation;	// 0x31f6c6e5
- (id)init;	// 0x31f6c61d
- (id)createSetOfCoordinatorsForPersistentStoreName:(id)persistentStoreName andLocalPeerID:(id)anId atUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x31f6c919
- (void)dealloc;	// 0x31f6d28d
- (id)description;	// 0x31f6d221
- (id)entryForUbiquityRootLocation:(id)ubiquityRootLocation andLocalPeerID:(id)anId;	// 0x31f6d0d5
- (void)registerUbiquitizedPersistentStore:(id)store forLocalPeerID:(id)localPeerID;	// 0x31f6cd15
- (void)releaseAllEntriesForRootLocation:(id)rootLocation andPeer:(id)peer;	// 0x31f6c7a1
- (void)unregisterCoordinator:(id)coordinator;	// 0x31f6ca3d
@end
