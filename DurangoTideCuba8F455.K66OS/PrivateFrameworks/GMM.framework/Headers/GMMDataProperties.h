/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMMapPoint, NSString;

@interface GMMDataProperties : PBCodable {
@private
	NSString *_copyright;	// 4 = 0x4
	int _numZoomLevels;	// 8 = 0x8
	BOOL _hasNumZoomLevels;	// 12 = 0xc
	GMMMapPoint *_latLon;	// 16 = 0x10
	int _imageHeight;	// 20 = 0x14
	int _infoLevel;	// 24 = 0x18
	BOOL _hasInfoLevel;	// 28 = 0x1c
	int _infoValue;	// 32 = 0x20
	BOOL _hasInfoValue;	// 36 = 0x24
	int _tileWidth;	// 40 = 0x28
	BOOL _hasTileWidth;	// 44 = 0x2c
	int _imageWidth;	// 48 = 0x30
	BOOL _disabled;	// 52 = 0x34
	BOOL _hasDisabled;	// 53 = 0x35
	int _tileHeight;	// 56 = 0x38
	BOOL _hasTileHeight;	// 60 = 0x3c
	NSString *_panoId;	// 64 = 0x40
	NSString *_text;	// 68 = 0x44
	NSString *_streetRange;	// 72 = 0x48
	int _maxZoomLevel;	// 76 = 0x4c
	int _radius;	// 80 = 0x50
	int _imageSource;	// 84 = 0x54
	BOOL _hasImageSource;	// 88 = 0x58
	int _scene;	// 92 = 0x5c
	BOOL _hasScene;	// 96 = 0x60
}
@property(retain, nonatomic) NSString *copyright;	// G=0x34432e21; S=0x34433dcd; @synthesize=_copyright
@property(assign, nonatomic) BOOL disabled;	// G=0x34432d41; S=0x34432bc9; @synthesize=_disabled
@property(readonly, assign, nonatomic) BOOL hasCopyright;	// G=0x34432b45; 
@property(readonly, assign, nonatomic) BOOL hasDisabled;	// G=0x34432d31; @synthesize=_hasDisabled
@property(readonly, assign, nonatomic) BOOL hasImageSource;	// G=0x34432c81; @synthesize=_hasImageSource
@property(readonly, assign, nonatomic) BOOL hasInfoLevel;	// G=0x34432db1; @synthesize=_hasInfoLevel
@property(readonly, assign, nonatomic) BOOL hasInfoValue;	// G=0x34432d91; @synthesize=_hasInfoValue
@property(readonly, assign, nonatomic) BOOL hasNumZoomLevels;	// G=0x34432e01; @synthesize=_hasNumZoomLevels
@property(readonly, assign, nonatomic) BOOL hasScene;	// G=0x34432c61; @synthesize=_hasScene
@property(readonly, assign, nonatomic) BOOL hasStreetRange;	// G=0x34432c15; 
@property(readonly, assign, nonatomic) BOOL hasText;	// G=0x34432c01; 
@property(readonly, assign, nonatomic) BOOL hasTileHeight;	// G=0x34432d11; @synthesize=_hasTileHeight
@property(readonly, assign, nonatomic) BOOL hasTileWidth;	// G=0x34432d71; @synthesize=_hasTileWidth
@property(assign, nonatomic) int imageHeight;	// G=0x34432dd1; S=0x34432de1; @synthesize=_imageHeight
@property(assign, nonatomic) int imageSource;	// G=0x34432c91; S=0x34432c29; @synthesize=_imageSource
@property(assign, nonatomic) int imageWidth;	// G=0x34432d51; S=0x34432d61; @synthesize=_imageWidth
@property(assign, nonatomic) int infoLevel;	// G=0x34432dc1; S=0x34432b75; @synthesize=_infoLevel
@property(assign, nonatomic) int infoValue;	// G=0x34432da1; S=0x34432b91; @synthesize=_infoValue
@property(retain, nonatomic) GMMMapPoint *latLon;	// G=0x34432df1; S=0x34433df5; @synthesize=_latLon
@property(assign, nonatomic) int maxZoomLevel;	// G=0x34432cc1; S=0x34432cd1; @synthesize=_maxZoomLevel
@property(assign, nonatomic) int numZoomLevels;	// G=0x34432e11; S=0x34432b59; @synthesize=_numZoomLevels
@property(retain, nonatomic) NSString *panoId;	// G=0x34432d01; S=0x34433e1d; @synthesize=_panoId
@property(assign, nonatomic) int radius;	// G=0x34432ca1; S=0x34432cb1; @synthesize=_radius
@property(assign, nonatomic) int scene;	// G=0x34432c71; S=0x34432c45; @synthesize=_scene
@property(retain, nonatomic) NSString *streetRange;	// G=0x34432ce1; S=0x34433e6d; @synthesize=_streetRange
@property(retain, nonatomic) NSString *text;	// G=0x34432cf1; S=0x34433e45; @synthesize=_text
@property(assign, nonatomic) int tileHeight;	// G=0x34432d21; S=0x34432be5; @synthesize=_tileHeight
@property(assign, nonatomic) int tileWidth;	// G=0x34432d81; S=0x34432bad; @synthesize=_tileWidth
- (id)init;	// 0x34433d0d
// declared property getter: - (id)copyright;	// 0x34432e21
- (void)dealloc;	// 0x34433c7d
- (id)description;	// 0x34433181
- (id)dictionaryRepresentation;	// 0x34432e31
// declared property getter: - (BOOL)disabled;	// 0x34432d41
// declared property getter: - (BOOL)hasCopyright;	// 0x34432b45
// declared property getter: - (BOOL)hasDisabled;	// 0x34432d31
// declared property getter: - (BOOL)hasImageSource;	// 0x34432c81
// declared property getter: - (BOOL)hasInfoLevel;	// 0x34432db1
// declared property getter: - (BOOL)hasInfoValue;	// 0x34432d91
// declared property getter: - (BOOL)hasNumZoomLevels;	// 0x34432e01
// declared property getter: - (BOOL)hasScene;	// 0x34432c61
// declared property getter: - (BOOL)hasStreetRange;	// 0x34432c15
// declared property getter: - (BOOL)hasText;	// 0x34432c01
// declared property getter: - (BOOL)hasTileHeight;	// 0x34432d11
// declared property getter: - (BOOL)hasTileWidth;	// 0x34432d71
// declared property getter: - (int)imageHeight;	// 0x34432dd1
// declared property getter: - (int)imageSource;	// 0x34432c91
// declared property getter: - (int)imageWidth;	// 0x34432d51
// declared property getter: - (int)infoLevel;	// 0x34432dc1
// declared property getter: - (int)infoValue;	// 0x34432da1
// declared property getter: - (id)latLon;	// 0x34432df1
// declared property getter: - (int)maxZoomLevel;	// 0x34432cc1
// declared property getter: - (int)numZoomLevels;	// 0x34432e11
// declared property getter: - (id)panoId;	// 0x34432d01
// declared property getter: - (int)radius;	// 0x34432ca1
- (BOOL)readFrom:(id)from;	// 0x34433885
// declared property getter: - (int)scene;	// 0x34432c71
// declared property setter: - (void)setCopyright:(id)copyright;	// 0x34433dcd
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x34432bc9
// declared property setter: - (void)setImageHeight:(int)height;	// 0x34432de1
// declared property setter: - (void)setImageSource:(int)source;	// 0x34432c29
// declared property setter: - (void)setImageWidth:(int)width;	// 0x34432d61
// declared property setter: - (void)setInfoLevel:(int)level;	// 0x34432b75
// declared property setter: - (void)setInfoValue:(int)value;	// 0x34432b91
// declared property setter: - (void)setLatLon:(id)lon;	// 0x34433df5
// declared property setter: - (void)setMaxZoomLevel:(int)level;	// 0x34432cd1
// declared property setter: - (void)setNumZoomLevels:(int)levels;	// 0x34432b59
// declared property setter: - (void)setPanoId:(id)anId;	// 0x34433e1d
// declared property setter: - (void)setRadius:(int)radius;	// 0x34432cb1
// declared property setter: - (void)setScene:(int)scene;	// 0x34432c45
// declared property setter: - (void)setStreetRange:(id)range;	// 0x34433e6d
// declared property setter: - (void)setText:(id)text;	// 0x34433e45
// declared property setter: - (void)setTileHeight:(int)height;	// 0x34432be5
// declared property setter: - (void)setTileWidth:(int)width;	// 0x34432bad
// declared property getter: - (id)streetRange;	// 0x34432ce1
// declared property getter: - (id)text;	// 0x34432cf1
// declared property getter: - (int)tileHeight;	// 0x34432d21
// declared property getter: - (int)tileWidth;	// 0x34432d81
- (void)writeTo:(id)to;	// 0x34433555
@end

