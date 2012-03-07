/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, OADColorMap, OCPPackagePart, OADColorScheme, OAXClient, OADBlipCollection, OAXTableStyleCache, OADFontScheme, OAVState, OADStyleMatrix;

__attribute__((visibility("hidden")))
@interface OAXDrawingState : NSObject {
@private
	OAXClient *mClient;	// 4 = 0x4
	OCPPackagePart *mPackagePart;	// 8 = 0x8
	OADStyleMatrix *mStyleMatrix;	// 12 = 0xc
	OAXTableStyleCache *mTableStyleCache;	// 16 = 0x10
	NSMutableDictionary *mShapeIdMap;	// 20 = 0x14
	id mDocumentState;	// 24 = 0x18
	OADBlipCollection *mTgtBlipCollection;	// 28 = 0x1c
	NSMutableDictionary *mSrcURLToTgtBlipIndexMap;	// 32 = 0x20
	NSMutableArray *mTgtBulletBlips;	// 36 = 0x24
	NSMutableDictionary *mSrcURLToTgtBulletBlipIndexMap;	// 40 = 0x28
	OAVState *mOavState;	// 44 = 0x2c
	OADColorScheme *mColorScheme;	// 48 = 0x30
	OADColorMap *mColorMap;	// 52 = 0x34
	OADFontScheme *mFontScheme;	// 56 = 0x38
}
@property(retain) id colorMap;	// G=0x356c0c11; S=0x3568e37d; converted property
@property(retain) id colorScheme;	// G=0x356c0c01; S=0x3566b001; converted property
@property(retain) id documentState;	// G=0x356a8195; S=0x3568bca1; converted property
@property(retain) id fontScheme;	// G=0x356c0c21; S=0x3568e33d; converted property
@property(retain) id oavState;	// G=0x35676ca9; S=0x35682469; converted property
@property(retain) id packagePart;	// G=0x35675501; S=0x356684a9; converted property
@property(retain) id styleMatrix;	// G=0x3568e635; S=0x3566aec9; converted property
@property(retain) id tableStyleCache;	// G=0x35690465; S=0x3568e2c1; converted property
@property(retain) id targetBlipCollection;	// G=0x35677791; S=0x35667bb5; converted property
- (id)init;	// 0x3578ac2d
- (id)initWithClient:(id)client;	// 0x35667ab5
- (id)blipRefForURL:(id)url;	// 0x35675a9d
- (id)blipRefWithURL:(id)url blipArray:(id)array blipURLtoIndexMap:(id)map;	// 0x35675b81
- (id)bulletBlipRefForURL:(id)url;	// 0x356b25d5
- (void)clearDrawableForShapeIdMap;	// 0x35693239
- (id)client;	// 0x35676be5
// converted property getter: - (id)colorMap;	// 0x356c0c11
// converted property getter: - (id)colorScheme;	// 0x356c0c01
- (void)dealloc;	// 0x35681401
// converted property getter: - (id)documentState;	// 0x356a8195
- (id)drawableForShapeId:(unsigned long)shapeId;	// 0x356a826d
// converted property getter: - (id)fontScheme;	// 0x356c0c21
// converted property getter: - (id)oavState;	// 0x35676ca9
// converted property getter: - (id)packagePart;	// 0x35675501
// converted property setter: - (void)setColorMap:(id)map;	// 0x3568e37d
// converted property setter: - (void)setColorScheme:(id)scheme;	// 0x3566b001
// converted property setter: - (void)setDocumentState:(id)state;	// 0x3568bca1
- (void)setDrawable:(id)drawable forShapeId:(unsigned long)shapeId;	// 0x35674d35
// converted property setter: - (void)setFontScheme:(id)scheme;	// 0x3568e33d
// converted property setter: - (void)setOavState:(id)state;	// 0x35682469
// converted property setter: - (void)setPackagePart:(id)part;	// 0x356684a9
// converted property setter: - (void)setStyleMatrix:(id)matrix;	// 0x3566aec9
// converted property setter: - (void)setTableStyleCache:(id)cache;	// 0x3568e2c1
// converted property setter: - (void)setTargetBlipCollection:(id)collection;	// 0x35667bb5
- (void)setTargetBulletBlipArray:(id)array;	// 0x3568bdd5
// converted property getter: - (id)styleMatrix;	// 0x3568e635
// converted property getter: - (id)tableStyleCache;	// 0x35690465
// converted property getter: - (id)targetBlipCollection;	// 0x35677791
@end
