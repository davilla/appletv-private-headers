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
@property(retain, nonatomic) NSNumber *DSID;	// G=0x34856891; S=0x34856839; 
@property(retain, nonatomic) NSString *XID;	// G=0x34856aa1; S=0x34856a49; 
@property(retain, nonatomic) NSNumber *adamID;	// G=0x3485680d; S=0x348567b5; 
@property(retain, nonatomic) NSString *appleID;	// G=0x34856b25; S=0x34856acd; 
@property(readonly, assign) NSDictionary *assetDictionary;	// G=0x34856f65; @synthesize=_assetDictionary
@property(retain, nonatomic) NSNumber *collectionID;	// G=0x34856915; S=0x348568bd; 
@property(retain, nonatomic) NSString *dimensions;	// G=0x34856db9; S=0x34856d61; 
@property(readonly, assign) NSDictionary *downloadDictionary;	// G=0x34856f55; @synthesize=_downloadDictionary
@property(retain, nonatomic) NSNumber *drmFree;	// G=0x34856e3d; S=0x34856de5; 
@property(retain, nonatomic) NSString *flavor;	// G=0x34856d35; S=0x34856cdd; 
@property(retain, nonatomic) NSNumber *matchStatus;	// G=0x34856c2d; S=0x34856bd5; 
@property(retain, nonatomic) NSNumber *redownloadStatus;	// G=0x34856cb1; S=0x34856c59; 
@property(retain, nonatomic) NSNumber *sagaID;	// G=0x34856ba9; S=0x34856b51; 
@property(retain, nonatomic) NSString *storefrontID;	// G=0x34856a1d; S=0x348569c5; 
@property(retain, nonatomic) NSNumber *versionID;	// G=0x34856999; S=0x34856941; 
- (id)init;	// 0x34856e69
// declared property getter: - (id)DSID;	// 0x34856891
// declared property getter: - (id)XID;	// 0x34856aa1
// declared property getter: - (id)adamID;	// 0x3485680d
// declared property getter: - (id)appleID;	// 0x34856b25
// declared property getter: - (id)assetDictionary;	// 0x34856f65
// declared property getter: - (id)collectionID;	// 0x34856915
- (void)dealloc;	// 0x34856ef5
// declared property getter: - (id)dimensions;	// 0x34856db9
// declared property getter: - (id)downloadDictionary;	// 0x34856f55
// declared property getter: - (id)drmFree;	// 0x34856e3d
// declared property getter: - (id)flavor;	// 0x34856d35
// declared property getter: - (id)matchStatus;	// 0x34856c2d
// declared property getter: - (id)redownloadStatus;	// 0x34856cb1
// declared property getter: - (id)sagaID;	// 0x34856ba9
// declared property setter: - (void)setAdamID:(id)anId;	// 0x348567b5
// declared property setter: - (void)setAppleID:(id)anId;	// 0x34856acd
// declared property setter: - (void)setCollectionID:(id)anId;	// 0x348568bd
// declared property setter: - (void)setDSID:(id)dsid;	// 0x34856839
// declared property setter: - (void)setDimensions:(id)dimensions;	// 0x34856d61
// declared property setter: - (void)setDrmFree:(id)free;	// 0x34856de5
// declared property setter: - (void)setFlavor:(id)flavor;	// 0x34856cdd
// declared property setter: - (void)setMatchStatus:(id)status;	// 0x34856bd5
// declared property setter: - (void)setRedownloadStatus:(id)status;	// 0x34856c59
// declared property setter: - (void)setSagaID:(id)anId;	// 0x34856b51
// declared property setter: - (void)setStorefrontID:(id)anId;	// 0x348569c5
// declared property setter: - (void)setVersionID:(id)anId;	// 0x34856941
// declared property setter: - (void)setXID:(id)xid;	// 0x34856a49
// declared property getter: - (id)storefrontID;	// 0x34856a1d
// declared property getter: - (id)versionID;	// 0x34856999
@end

