/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoMediaCollection.h"
#import "AppleTV-Structs.h"

@class NSArray, BRImageManager, BRMediaCollectionType;

@interface BRStreamingPhotoCollection : BRPhotoMediaCollection {
@private
	ATVMediaCollectionRef _collection;	// 44 = 0x2c
	NSArray *_atvItems;	// 48 = 0x30
	ATVDataClientRef _dataClient;	// 52 = 0x34
	NSArray *_assets;	// 56 = 0x38
	BRMediaCollectionType *_type;	// 60 = 0x3c
	BOOL _useForScreenSaver;	// 64 = 0x40
}
@property(readonly, assign) ATVDataClientRef dataClient;	// G=0x341be905; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x341be935; 
@property(assign) BOOL useForScreenSaver;	// G=0x341be925; S=0x341be915; converted property
+ (id)collectionWithATVMediaCollection:(ATVMediaCollectionRef)atvmediaCollection;	// 0x341bddb5
+ (id)collectionWithATVMediaItems:(id)atvmediaItems;	// 0x341bddf1
- (id)initWithATVItems:(id)atvitems dataClient:(ATVDataClientRef)client;	// 0x341bdeb9
- (id)initWithATVMediaCollection:(ATVMediaCollectionRef)atvmediaCollection;	// 0x341bde4d
- (id)initWithStreamingAssets:(id)streamingAssets dataClient:(ATVDataClientRef)client;	// 0x341bdf29
- (ATVMediaCollectionRef)atvCollection;	// 0x341be3fd
- (id)collectionID;	// 0x341be2bd
- (id)collectionName;	// 0x341be69d
- (id)collectionType;	// 0x341be6ad
- (int)count;	// 0x341be37d
// converted property getter: - (ATVDataClientRef)dataClient;	// 0x341be905
- (void)dealloc;	// 0x341bdf9d
- (id)description;	// 0x341be029
- (id)imageProxy;	// 0x341be261
- (BOOL)isLibrary;	// 0x341be855
- (BOOL)isLocal;	// 0x341be80d
- (id)keyAssetID;	// 0x341be811
- (id)mediaAssets;	// 0x341be40d
- (id)mediaTypes;	// 0x341be8c1
- (id)photoAssets;	// 0x341be5e5
// declared property getter: - (id)preferredImageManager;	// 0x341be935
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x341be915
- (id)title;	// 0x341be659
// converted property getter: - (BOOL)useForScreenSaver;	// 0x341be925
@end

