/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityKnowledgeVector, PFUbiquityPeer, PFUbiquityStoreSaveSnapshot, PFUbiquityTransactionLog, NSDictionary, _PFUbiquityStack, NSString, PFUbiquityStoreMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquityImportContext : NSObject {
@private
	_PFUbiquityStack *_stack;	// 4 = 0x4
	PFUbiquityStoreMetadata *_storeMetadata;	// 8 = 0x8
	PFUbiquityPeer *_actingPeer;	// 12 = 0xc
	PFUbiquityKnowledgeVector *_kv;	// 16 = 0x10
	PFUbiquityKnowledgeVector *_currentKnowledgeVector;	// 20 = 0x14
	NSString *_exportingPeerID;	// 24 = 0x18
	PFUbiquityTransactionLog *_transactionLog;	// 28 = 0x1c
	PFUbiquityStoreSaveSnapshot *_storeSaveSnapshot;	// 32 = 0x20
	NSDictionary *_globalIDToLocalIDURICache;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) PFUbiquityPeer *actingPeer;	// G=0x36369661; @synthesize=_actingPeer
@property(retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector;	// G=0x36369641; S=0x36369ab9; @synthesize=_currentKnowledgeVector
@property(retain, nonatomic) NSString *exportingPeerID;	// G=0x36369631; S=0x363698c5; @synthesize=_exportingPeerID
@property(retain, nonatomic) NSDictionary *globalIDToLocalIDURICache;	// G=0x36369601; S=0x36369b31; @synthesize=_globalIDToLocalIDURICache
@property(retain, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x36369651; S=0x36369a91; @synthesize=_kv
@property(readonly, assign, nonatomic) _PFUbiquityStack *stack;	// G=0x36369681; @synthesize=_stack
@property(readonly, assign, nonatomic) PFUbiquityStoreMetadata *storeMetadata;	// G=0x36369671; @synthesize=_storeMetadata
@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot *storeSaveSnapshot;	// G=0x36369611; S=0x36369b09; @synthesize=_storeSaveSnapshot
@property(retain, nonatomic) PFUbiquityTransactionLog *transactionLog;	// G=0x36369621; S=0x36369ae1; @synthesize=_transactionLog
- (id)initWithStack:(id)stack andStoreMetadata:(id)metadata;	// 0x36369761
- (id)initWithStoreName:(id)storeName andUbiquityRootLocation:(id)location withLocalPeerID:(id)localPeerID;	// 0x36369691
// declared property getter: - (id)actingPeer;	// 0x36369661
// declared property getter: - (id)currentKnowledgeVector;	// 0x36369641
- (void)dealloc;	// 0x363699a1
// declared property getter: - (id)exportingPeerID;	// 0x36369631
// declared property getter: - (id)globalIDToLocalIDURICache;	// 0x36369601
// declared property getter: - (id)knowledgeVector;	// 0x36369651
- (void)setActingPeer:(id)peer;	// 0x36369841
// declared property setter: - (void)setCurrentKnowledgeVector:(id)vector;	// 0x36369ab9
// declared property setter: - (void)setExportingPeerID:(id)anId;	// 0x363698c5
// declared property setter: - (void)setGlobalIDToLocalIDURICache:(id)localIDURICache;	// 0x36369b31
// declared property setter: - (void)setKnowledgeVector:(id)vector;	// 0x36369a91
// declared property setter: - (void)setStoreSaveSnapshot:(id)snapshot;	// 0x36369b09
// declared property setter: - (void)setTransactionLog:(id)log;	// 0x36369ae1
// declared property getter: - (id)stack;	// 0x36369681
// declared property getter: - (id)storeMetadata;	// 0x36369671
// declared property getter: - (id)storeSaveSnapshot;	// 0x36369611
// declared property getter: - (id)transactionLog;	// 0x36369621
@end

