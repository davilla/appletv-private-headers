/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseMediaCollection.h"

@class BRMediaCollectionType, NSArray, NSString;

@interface BRPhotoMediaCollection : BRBaseMediaCollection {
@private
	NSString *_collectionName;	// 8 = 0x8
	NSString *_keyAssetID;	// 12 = 0xc
	NSString *_description;	// 16 = 0x10
	NSArray *_mediaAssets;	// 20 = 0x14
	NSString *_collectionID;	// 24 = 0x18
	BRMediaCollectionType *_collectionType;	// 28 = 0x1c
	double _date;	// 32 = 0x20
	BOOL _dateCalculated;	// 40 = 0x28
}
@property(retain) NSString *collectionID;	// G=0x33a5eddd; S=0x33a5eea9; converted property
@property(retain) NSString *collectionName;	// G=0x33a5e7cd; S=0x33a5e899; converted property
@property(retain) BRMediaCollectionType *collectionType;	// G=0x33a5f151; S=0x33a5f161; converted property
@property(retain) id date;	// G=0x33a5f171; S=0x33a5f1dd; converted property
@property(retain) NSString *description;	// G=0x33a5ec41; S=0x33a5ed0d; converted property
@property(retain) NSString *keyAssetID;	// G=0x33a5e9a9; S=0x33a5ea75; converted property
@property(retain) NSArray *mediaAssets;	// G=0x33a5ef79; S=0x33a5f045; converted property
+ (id)collectionWithCollectionInfo:(id)collectionInfo;	// 0x33a5e5cd
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x33a5e609
- (void)_calculateMostRecentDate;	// 0x33a5f229
- (id)archivableCollectionInfo;	// 0x33a5f225
// converted property getter: - (id)collectionID;	// 0x33a5eddd
// converted property getter: - (id)collectionName;	// 0x33a5e7cd
// converted property getter: - (id)collectionType;	// 0x33a5f151
// converted property getter: - (id)date;	// 0x33a5f171
- (void)dealloc;	// 0x33a5e635
// converted property getter: - (id)description;	// 0x33a5ec41
- (unsigned)hash;	// 0x33a5e6d1
- (BOOL)isEqual:(id)equal;	// 0x33a5e711
- (BOOL)isLibrary;	// 0x33a5f221
- (id)keyAsset;	// 0x33a5eb45
// converted property getter: - (id)keyAssetID;	// 0x33a5e9a9
// converted property getter: - (id)mediaAssets;	// 0x33a5ef79
- (id)photoAssets;	// 0x33a5f141
- (id)playbackOptions;	// 0x33a5e9a5
// converted property setter: - (void)setCollectionID:(id)anId;	// 0x33a5eea9
// converted property setter: - (void)setCollectionName:(id)name;	// 0x33a5e899
// converted property setter: - (void)setCollectionType:(id)type;	// 0x33a5f161
// converted property setter: - (void)setDate:(id)date;	// 0x33a5f1dd
// converted property setter: - (void)setDescription:(id)description;	// 0x33a5ed0d
// converted property setter: - (void)setKeyAssetID:(id)anId;	// 0x33a5ea75
// converted property setter: - (void)setMediaAssets:(id)assets;	// 0x33a5f045
- (id)title;	// 0x33a5e7bd
@end

