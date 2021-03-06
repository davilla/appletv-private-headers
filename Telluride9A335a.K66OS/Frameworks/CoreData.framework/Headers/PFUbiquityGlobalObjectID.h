/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityGlobalObjectID : NSObject {
@private
	NSString *_storeName;	// 4 = 0x4
	NSString *_entityName;	// 8 = 0x8
	NSString *_primaryKey;	// 12 = 0xc
	NSString *_owningPeerID;	// 16 = 0x10
	unsigned _hash;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *entityName;	// G=0x331f1839; @synthesize=_entityName
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x331f1809; @synthesize=_hash
@property(readonly, assign, nonatomic) NSString *owningPeerID;	// G=0x331f1819; @synthesize=_owningPeerID
@property(readonly, assign, nonatomic) NSString *primaryKey;	// G=0x331f1829; @synthesize=_primaryKey
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x331f1849; @synthesize=_storeName
+ (id)stringValueFromArray:(id)array atIndexDescribedByStringNumber:(id)indexDescribedByStringNumber;	// 0x331f18d9
- (id)init;	// 0x331f1859
- (id)initWithCompressedString:(id)compressedString forStoreWithName:(id)name andEntityNames:(id)names primaryKeys:(id)keys peerIDs:(id)ids;	// 0x331f1e15
- (id)initWithStoreName:(id)storeName entityName:(id)name primaryKey:(id)key andPeerID:(id)anId;	// 0x331f2099
- (id)initWithString:(id)string;	// 0x331f1f9d
- (id)copyWithZone:(NSZone *)zone;	// 0x331f1d75
- (id)createCompressedStringWithEntityNameToIndex:(id)index primaryKeyToIndex:(id)index2 peerIDToIndex:(id)index3;	// 0x331f1a39
- (id)createGlobalIDString;	// 0x331f1949
- (void)dealloc;	// 0x331f1cc9
- (id)description;	// 0x331f1c39
// declared property getter: - (id)entityName;	// 0x331f1839
// declared property getter: - (unsigned)hash;	// 0x331f1809
- (BOOL)isEqual:(id)equal;	// 0x331f1b69
// declared property getter: - (id)owningPeerID;	// 0x331f1819
// declared property getter: - (id)primaryKey;	// 0x331f1829
// declared property getter: - (id)storeName;	// 0x331f1849
- (void)updateHash;	// 0x331f1bdd
@end

