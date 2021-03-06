/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaCollection.h"

@class BRMediaCollectionType, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface BRPhotoMediaCollection : BRBaseMediaCollection {
	NSString *_collectionName;	// 8 = 0x8
	NSString *_keyAssetID;	// 12 = 0xc
	NSString *_description;	// 16 = 0x10
	NSArray *_mediaAssets;	// 20 = 0x14
	NSString *_collectionID;	// 24 = 0x18
	BRMediaCollectionType *_collectionType;	// 28 = 0x1c
	double _date;	// 32 = 0x20
	BOOL _dateCalculated;	// 40 = 0x28
}
@property(retain) NSString *collectionID;	// G=0x27b655; S=0x27b731; converted property
@property(retain) NSString *collectionName;	// G=0x27afa9; S=0x27b085; converted property
@property(retain) BRMediaCollectionType *collectionType;	// G=0x27ba11; S=0x27ba21; converted property
@property(retain) id date;	// G=0x27ba31; S=0x27ba9d; converted property
@property(retain) NSString *description;	// G=0x27b491; S=0x27b56d; converted property
@property(retain) NSString *keyAssetID;	// G=0x27b1a9; S=0x27b285; converted property
@property(retain) NSArray *mediaAssets;	// G=0x27b819; S=0x27b8f5; converted property
+ (id)collectionWithCollectionInfo:(id)collectionInfo;	// 0x27ada1
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x27addd
- (void)_calculateMostRecentDate;	// 0x27bae9
- (id)archivableCollectionInfo;	// 0x27bae5
// converted property getter: - (id)collectionID;	// 0x27b655
// converted property getter: - (id)collectionName;	// 0x27afa9
// converted property getter: - (id)collectionType;	// 0x27ba11
// converted property getter: - (id)date;	// 0x27ba31
- (void)dealloc;	// 0x27ae09
// converted property getter: - (id)description;	// 0x27b491
- (unsigned)hash;	// 0x27aea9
- (BOOL)isEqual:(id)equal;	// 0x27aee9
- (BOOL)isLibrary;	// 0x27bae1
- (id)keyAsset;	// 0x27b36d
// converted property getter: - (id)keyAssetID;	// 0x27b1a9
// converted property getter: - (id)mediaAssets;	// 0x27b819
- (id)photoAssets;	// 0x27ba01
- (id)playbackOptions;	// 0x27b1a5
// converted property setter: - (void)setCollectionID:(id)anId;	// 0x27b731
// converted property setter: - (void)setCollectionName:(id)name;	// 0x27b085
// converted property setter: - (void)setCollectionType:(id)type;	// 0x27ba21
// converted property setter: - (void)setDate:(id)date;	// 0x27ba9d
// converted property setter: - (void)setDescription:(id)description;	// 0x27b56d
// converted property setter: - (void)setKeyAssetID:(id)anId;	// 0x27b285
// converted property setter: - (void)setMediaAssets:(id)assets;	// 0x27b8f5
- (id)title;	// 0x27af99
@end

