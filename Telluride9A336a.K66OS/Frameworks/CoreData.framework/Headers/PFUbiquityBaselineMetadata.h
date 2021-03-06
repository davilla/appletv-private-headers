/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class PFUbiquityKnowledgeVector, NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineMetadata : NSObject <NSCoding> {
@private
	NSString *_storeName;	// 4 = 0x4
	NSString *_authorPeerID;	// 8 = 0x8
	NSString *_modelVersionHash;	// 12 = 0xc
	PFUbiquityKnowledgeVector *_pKV;	// 16 = 0x10
	PFUbiquityKnowledgeVector *_kv;	// 20 = 0x14
	NSDictionary *_peerRanges;	// 24 = 0x18
}
@property(readonly, assign) NSString *authorPeerID;	// G=0x32430595; @synthesize=_authorPeerID
@property(readonly, assign) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x32430565; @synthesize=_kv
@property(readonly, assign) NSString *modelVersionHash;	// G=0x32430585; @synthesize=_modelVersionHash
@property(readonly, assign) NSDictionary *peerRanges;	// G=0x32430555; @synthesize=_peerRanges
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector *previousKnowledgeVector;	// G=0x32430575; @synthesize=_pKV
@property(readonly, assign) NSString *storeName;	// G=0x324305a5; @synthesize=_storeName
- (id)init;	// 0x324305b5
- (id)initWithCoder:(id)coder;	// 0x324307e5
- (id)initWithStoreMetadata:(id)storeMetadata forLocalPeerID:(id)localPeerID;	// 0x32430d89
- (void)_migrateToModelVersionHash:(id)modelVersionHash;	// 0x3243063d
// declared property getter: - (id)authorPeerID;	// 0x32430595
- (void)dealloc;	// 0x32430ca9
- (id)description;	// 0x32430bd9
- (void)encodeWithCoder:(id)coder;	// 0x324306cd
- (BOOL)isEqual:(id)equal;	// 0x32430a39
// declared property getter: - (id)knowledgeVector;	// 0x32430565
// declared property getter: - (id)modelVersionHash;	// 0x32430585
// declared property getter: - (id)peerRanges;	// 0x32430555
// declared property getter: - (id)previousKnowledgeVector;	// 0x32430575
- (void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)currentMetadata;	// 0x3243067d
// declared property getter: - (id)storeName;	// 0x324305a5
@end

