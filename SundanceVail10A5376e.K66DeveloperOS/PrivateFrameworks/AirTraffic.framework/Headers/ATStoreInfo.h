/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber, NSMutableDictionary, NSDictionary;

@interface ATStoreInfo : NSObject {
	NSMutableDictionary *_downloadDictionary;	// 4 = 0x4
	NSMutableDictionary *_assetDictionary;	// 8 = 0x8
}
@property(retain, nonatomic) NSNumber *DSID;	// G=0x3386ef65; S=0x3386ef15; 
@property(retain, nonatomic) NSString *XID;	// G=0x3386f155; S=0x3386f105; 
@property(retain, nonatomic) NSNumber *adamID;	// G=0x3386eee9; S=0x3386ee99; 
@property(retain, nonatomic) NSString *appleID;	// G=0x3386f1d1; S=0x3386f181; 
@property(readonly, assign) NSDictionary *assetDictionary;	// G=0x3386f669; @synthesize=_assetDictionary
@property(retain, nonatomic) NSNumber *collectionID;	// G=0x3386efe1; S=0x3386ef91; 
@property(retain, nonatomic) NSString *dimensions;	// G=0x3386f4b9; S=0x3386f469; 
@property(readonly, assign) NSDictionary *downloadDictionary;	// G=0x3386f655; @synthesize=_downloadDictionary
@property(retain, nonatomic) NSNumber *drmFree;	// G=0x3386f535; S=0x3386f4e5; 
@property(retain, nonatomic) NSString *flavor;	// G=0x3386f43d; S=0x3386f3ed; 
@property(retain, nonatomic) NSNumber *matchStatus;	// G=0x3386f2c9; S=0x3386f279; 
@property(retain, nonatomic) NSString *podcastEpisodeGUID;	// G=0x3386f3c1; S=0x3386f371; 
@property(retain, nonatomic) NSNumber *redownloadStatus;	// G=0x3386f345; S=0x3386f2f5; 
@property(retain, nonatomic) NSNumber *sagaID;	// G=0x3386f24d; S=0x3386f1fd; 
@property(retain, nonatomic) NSString *storefrontID;	// G=0x3386f0d9; S=0x3386f089; 
@property(retain, nonatomic) NSNumber *versionID;	// G=0x3386f05d; S=0x3386f00d; 
- (id)init;	// 0x3386f561
// declared property getter: - (id)DSID;	// 0x3386ef65
// declared property getter: - (id)XID;	// 0x3386f155
// declared property getter: - (id)adamID;	// 0x3386eee9
// declared property getter: - (id)appleID;	// 0x3386f1d1
// declared property getter: - (id)assetDictionary;	// 0x3386f669
// declared property getter: - (id)collectionID;	// 0x3386efe1
- (void)dealloc;	// 0x3386f5f1
// declared property getter: - (id)dimensions;	// 0x3386f4b9
// declared property getter: - (id)downloadDictionary;	// 0x3386f655
// declared property getter: - (id)drmFree;	// 0x3386f535
// declared property getter: - (id)flavor;	// 0x3386f43d
// declared property getter: - (id)matchStatus;	// 0x3386f2c9
// declared property getter: - (id)podcastEpisodeGUID;	// 0x3386f3c1
// declared property getter: - (id)redownloadStatus;	// 0x3386f345
// declared property getter: - (id)sagaID;	// 0x3386f24d
// declared property setter: - (void)setAdamID:(id)anId;	// 0x3386ee99
// declared property setter: - (void)setAppleID:(id)anId;	// 0x3386f181
// declared property setter: - (void)setCollectionID:(id)anId;	// 0x3386ef91
// declared property setter: - (void)setDSID:(id)dsid;	// 0x3386ef15
// declared property setter: - (void)setDimensions:(id)dimensions;	// 0x3386f469
// declared property setter: - (void)setDrmFree:(id)free;	// 0x3386f4e5
// declared property setter: - (void)setFlavor:(id)flavor;	// 0x3386f3ed
// declared property setter: - (void)setMatchStatus:(id)status;	// 0x3386f279
// declared property setter: - (void)setPodcastEpisodeGUID:(id)guid;	// 0x3386f371
// declared property setter: - (void)setRedownloadStatus:(id)status;	// 0x3386f2f5
// declared property setter: - (void)setSagaID:(id)anId;	// 0x3386f1fd
// declared property setter: - (void)setStorefrontID:(id)anId;	// 0x3386f089
// declared property setter: - (void)setVersionID:(id)anId;	// 0x3386f00d
// declared property setter: - (void)setXID:(id)xid;	// 0x3386f105
// declared property getter: - (id)storefrontID;	// 0x3386f0d9
// declared property getter: - (id)versionID;	// 0x3386f05d
@end
