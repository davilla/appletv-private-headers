/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSOperation.h> // Unknown library

@class NSMutableArray, NSError, NSString, CalDAVPrincipal, NSArray;

@interface DiscoverPrincipalsOperation : NSOperation {
	NSArray *_oldAddresses;	// 12 = 0xc
	NSMutableArray *_newAddresses;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	NSString *_virtualHostKey;	// 24 = 0x18
	NSString *_webServicesRecordGUID;	// 28 = 0x1c
	CalDAVPrincipal *_principal;	// 32 = 0x20
}
@property(retain) NSError *error;	// G=0x340be0e9; S=0x340be1fd; @synthesize=_error
@property(retain) NSArray *newAddresses;	// G=0x340be119; S=0x340be255; @synthesize=_newAddresses
@property(retain) NSArray *oldAddresses;	// G=0x340be101; S=0x340be229; @synthesize=_oldAddresses
@property(retain) CalDAVPrincipal *principal;	// G=0x340be131; S=0x340be281; @synthesize=_principal
@property(retain) NSString *virtualHostKey;	// G=0x340be149; S=0x340be2ad; @synthesize=_virtualHostKey
@property(retain) NSString *webServicesRecordGUID;	// G=0x340be161; S=0x340be2d9; @synthesize=_webServicesRecordGUID
- (id)initWithAddresses:(id)addresses principal:(id)principal virtualHostKey:(id)key webServicesRecordGUID:(id)guid;	// 0x340bddb1
- (void)dealloc;	// 0x340bdd19
// declared property getter: - (id)error;	// 0x340be0e9
- (void)main;	// 0x340bde69
// declared property getter: - (id)newAddresses;	// 0x340be119
// declared property getter: - (id)oldAddresses;	// 0x340be101
// declared property getter: - (id)principal;	// 0x340be131
// declared property setter: - (void)setError:(id)error;	// 0x340be1fd
// declared property setter: - (void)setNewAddresses:(id)addresses;	// 0x340be255
// declared property setter: - (void)setOldAddresses:(id)addresses;	// 0x340be229
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x340be281
// declared property setter: - (void)setVirtualHostKey:(id)key;	// 0x340be2ad
// declared property setter: - (void)setWebServicesRecordGUID:(id)guid;	// 0x340be2d9
// declared property getter: - (id)virtualHostKey;	// 0x340be149
// declared property getter: - (id)webServicesRecordGUID;	// 0x340be161
@end

