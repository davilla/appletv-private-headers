/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class MSAsset, NSString, NSArray, NSData;

@interface MSAssetCollection : NSObject <NSCoding> {
@private
	NSString *_assetCollectionID;	// 4 = 0x4
	MSAsset *_masterAsset;	// 8 = 0x8
	NSArray *_derivedAssets;	// 12 = 0xc
	NSString *_fileName;	// 16 = 0x10
	BOOL _wasDeleted;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *assetCollectionID;	// G=0x304cb3e5; S=0x304cb3f5; @synthesize=_assetCollectionID
@property(retain, nonatomic) NSArray *derivedAssets;	// G=0x304caf31; S=0x304caf41; 
@property(retain, nonatomic) NSString *fileName;	// G=0x304cb44d; S=0x304cb45d; @synthesize=_fileName
@property(retain, nonatomic) MSAsset *masterAsset;	// G=0x304cb419; S=0x304cb429; @synthesize=_masterAsset
@property(readonly, assign, nonatomic) NSData *masterAssetHash;	// G=0x304caf09; 
@property(assign, nonatomic) BOOL wasDeleted;	// G=0x304cb481; S=0x304cb491; @synthesize=_wasDeleted
+ (id)collectionWithMasterAsset:(id)masterAsset fileName:(id)name;	// 0x304cad61
+ (id)collectionWithMasterAsset:(id)masterAsset fileName:(id)name derivedAssets:(id)assets;	// 0x304cada9
- (id)initWithCoder:(id)coder;	// 0x304cb2c9
- (id)initWithMasterAsset:(id)masterAsset fileName:(id)name derivedAssets:(id)assets;	// 0x304cadf1
// declared property getter: - (id)assetCollectionID;	// 0x304cb3e5
- (void)dealloc;	// 0x304cae81
// declared property getter: - (id)derivedAssets;	// 0x304caf31
- (id)description;	// 0x304cb039
- (void)encodeWithCoder:(id)coder;	// 0x304cb1dd
// declared property getter: - (id)fileName;	// 0x304cb44d
- (BOOL)isEqual:(id)equal;	// 0x304cb13d
// declared property getter: - (id)masterAsset;	// 0x304cb419
// declared property getter: - (id)masterAssetHash;	// 0x304caf09
// declared property setter: - (void)setAssetCollectionID:(id)anId;	// 0x304cb3f5
// declared property setter: - (void)setDerivedAssets:(id)assets;	// 0x304caf41
// declared property setter: - (void)setFileName:(id)name;	// 0x304cb45d
// declared property setter: - (void)setMasterAsset:(id)asset;	// 0x304cb429
// declared property setter: - (void)setWasDeleted:(BOOL)deleted;	// 0x304cb491
// declared property getter: - (BOOL)wasDeleted;	// 0x304cb481
@end

