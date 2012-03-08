/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GEOTileSetProfile.h"
#import "GeoServices-Structs.h"

@class NSURL, GEOTileSet, NSString;

__attribute__((visibility("hidden")))
@interface GEOVoltaireTileSetProfile : NSObject <GEOTileSetProfile> {
	GEOTileSet *_tileSet;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *baseURLString;	// G=0x32cfd909; 
@property(readonly, assign, nonatomic) NSURL *multiTileURL;	// G=0x32cfd929; 
@property(readonly, assign, nonatomic) unsigned operatingEdition;	// G=0x32cfd991; 
@property(readonly, assign, nonatomic) int scale;	// G=0x32cfd8e9; 
@property(readonly, assign, nonatomic) int size;	// G=0x32cfd8c9; 
@property(readonly, assign, nonatomic) int style;	// G=0x32cfd8a9; 
- (id)initWithTileSet:(id)tileSet;	// 0x32cfd789
- (id)_operatingVersion;	// 0x32cfd971
- (id)attributionInfoForTileKeys:(id)tileKeys;	// 0x32cfdd85
// declared property getter: - (id)baseURLString;	// 0x32cfd909
- (void)dealloc;	// 0x32cfd7e1
- (id)description;	// 0x32cfd82d
- (BOOL)isAvailableForTileKey:(const GEOTileKey *)tileKey;	// 0x32cfd9b9
- (void)loadAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x32cfdd21
- (unsigned)maxZoomLevelForTileKey:(const GEOTileKey *)tileKey;	// 0x32cfdbb1
- (unsigned)minZoomLevelForTileKey:(const GEOTileKey *)tileKey;	// 0x32cfda85
// declared property getter: - (id)multiTileURL;	// 0x32cfd929
- (BOOL)needsAttributionBadge;	// 0x32cfdcd5
// declared property getter: - (unsigned)operatingEdition;	// 0x32cfd991
// declared property getter: - (int)scale;	// 0x32cfd8e9
// declared property getter: - (int)size;	// 0x32cfd8c9
// declared property getter: - (int)style;	// 0x32cfd8a9
@end
