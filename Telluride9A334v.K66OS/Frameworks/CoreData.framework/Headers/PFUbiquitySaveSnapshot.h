/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSMutableDictionary, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquitySaveSnapshot : NSObject {
@private
	NSDate *_transactionDate;	// 4 = 0x4
	NSString *_modelVersionHash;	// 8 = 0x8
	NSString *_localPeerID;	// 12 = 0xc
	NSMutableDictionary *_storeNameToStoreSaveSnapshots;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x31f75149; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x31f75159; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSArray *storeNames;	// G=0x31f754e5; 
@property(retain, nonatomic) NSDate *transacationDate;	// G=0x31f75169; S=0x31f755b1; @synthesize=_transactionDate
- (id)initWithSaveNotification:(id)saveNotification withLocalPeerID:(id)localPeerID;	// 0x31f752d5
- (id)initWithTransactionLog:(id)transactionLog;	// 0x31f75179
- (void)dealloc;	// 0x31f75505
- (id)description;	// 0x31f755d9
// declared property getter: - (id)localPeerID;	// 0x31f75149
// declared property getter: - (id)modelVersionHash;	// 0x31f75159
// declared property setter: - (void)setTransacationDate:(id)date;	// 0x31f755b1
// declared property getter: - (id)storeNames;	// 0x31f754e5
- (id)storeSaveSnapshotForStore:(id)store;	// 0x31f7540d
- (id)storeSaveSnapshotForStoreName:(id)storeName;	// 0x31f753e9
// declared property getter: - (id)transacationDate;	// 0x31f75169
@end

