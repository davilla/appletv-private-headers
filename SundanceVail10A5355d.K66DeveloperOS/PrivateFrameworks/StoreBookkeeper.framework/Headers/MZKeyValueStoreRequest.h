/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class NSString, MZKeyValueStoreSerializer, MZKeyValueStoreTransaction;
@protocol MZKeyValueStoreOperationDelegate;

@interface MZKeyValueStoreRequest : NSObject {
	NSString *_domain;	// 4 = 0x4
	MZKeyValueStoreTransaction *_transaction;	// 8 = 0x8
	NSString *_DSID;	// 12 = 0xc
	id<MZKeyValueStoreOperationDelegate> _delegate;	// 16 = 0x10
	BOOL _shouldAuthenticate;	// 20 = 0x14
	MZKeyValueStoreSerializer *_serializer;	// 24 = 0x18
}
@property(copy, nonatomic) NSString *DSID;	// G=0x34234c01; S=0x34234c15; @synthesize=_DSID
@property(assign, nonatomic) id<MZKeyValueStoreOperationDelegate> delegate;	// G=0x34234c25; S=0x34234c35; @synthesize=_delegate
@property(copy, nonatomic) NSString *domain;	// G=0x34234bbd; S=0x34234bd1; @synthesize=_domain
@property(retain, nonatomic) MZKeyValueStoreSerializer *serializer;	// G=0x34234b4d; S=0x34234c65; @synthesize=_serializer
@property(assign, nonatomic) BOOL shouldAuthenticate;	// G=0x34234c45; S=0x34234c55; @synthesize=_shouldAuthenticate
@property(retain, nonatomic) MZKeyValueStoreTransaction *transaction;	// G=0x34234be1; S=0x34234bf1; @synthesize=_transaction
- (id)initWithTransaction:(id)transaction;	// 0x3423449d
// declared property getter: - (id)DSID;	// 0x34234c01
- (void)dealloc;	// 0x342344f1
// declared property getter: - (id)delegate;	// 0x34234c25
// declared property getter: - (id)domain;	// 0x34234bbd
- (void)postData:(id)data;	// 0x342345e5
- (void)scheduleStoreURLOperation:(id)operation data:(id)data;	// 0x34234a79
// declared property getter: - (id)serializer;	// 0x34234b4d
// declared property setter: - (void)setDSID:(id)dsid;	// 0x34234c15
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34234c35
// declared property setter: - (void)setDomain:(id)domain;	// 0x34234bd1
// declared property setter: - (void)setSerializer:(id)serializer;	// 0x34234c65
// declared property setter: - (void)setShouldAuthenticate:(BOOL)authenticate;	// 0x34234c55
// declared property setter: - (void)setTransaction:(id)transaction;	// 0x34234bf1
// declared property getter: - (BOOL)shouldAuthenticate;	// 0x34234c45
- (void)start;	// 0x342345a5
// declared property getter: - (id)transaction;	// 0x34234be1
@end
