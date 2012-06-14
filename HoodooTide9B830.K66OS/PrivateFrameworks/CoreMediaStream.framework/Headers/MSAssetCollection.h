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
@property(retain, nonatomic) NSString *assetCollectionID;	// G=0x30e573e5; S=0x30e573f5; @synthesize=_assetCollectionID
@property(retain, nonatomic) NSArray *derivedAssets;	// G=0x30e56f31; S=0x30e56f41; 
@property(retain, nonatomic) NSString *fileName;	// G=0x30e5744d; S=0x30e5745d; @synthesize=_fileName
@property(retain, nonatomic) MSAsset *masterAsset;	// G=0x30e57419; S=0x30e57429; @synthesize=_masterAsset
@property(readonly, assign, nonatomic) NSData *masterAssetHash;	// G=0x30e56f09; 
@property(assign, nonatomic) BOOL wasDeleted;	// G=0x30e57481; S=0x30e57491; @synthesize=_wasDeleted
+ (id)collectionWithMasterAsset:(id)masterAsset fileName:(id)name;	// 0x30e56d61
+ (id)collectionWithMasterAsset:(id)masterAsset fileName:(id)name derivedAssets:(id)assets;	// 0x30e56da9
- (id)initWithCoder:(id)coder;	// 0x30e572c9
- (id)initWithMasterAsset:(id)masterAsset fileName:(id)name derivedAssets:(id)assets;	// 0x30e56df1
// declared property getter: - (id)assetCollectionID;	// 0x30e573e5
- (void)dealloc;	// 0x30e56e81
// declared property getter: - (id)derivedAssets;	// 0x30e56f31
- (id)description;	// 0x30e57039
- (void)encodeWithCoder:(id)coder;	// 0x30e571dd
// declared property getter: - (id)fileName;	// 0x30e5744d
- (BOOL)isEqual:(id)equal;	// 0x30e5713d
// declared property getter: - (id)masterAsset;	// 0x30e57419
// declared property getter: - (id)masterAssetHash;	// 0x30e56f09
// declared property setter: - (void)setAssetCollectionID:(id)anId;	// 0x30e573f5
// declared property setter: - (void)setDerivedAssets:(id)assets;	// 0x30e56f41
// declared property setter: - (void)setFileName:(id)name;	// 0x30e5745d
// declared property setter: - (void)setMasterAsset:(id)asset;	// 0x30e57429
// declared property setter: - (void)setWasDeleted:(BOOL)deleted;	// 0x30e57491
// declared property getter: - (BOOL)wasDeleted;	// 0x30e57481
@end
