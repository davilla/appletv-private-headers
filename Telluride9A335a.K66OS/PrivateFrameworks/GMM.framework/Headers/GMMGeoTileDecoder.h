/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GEOTileDecoder.h"
#import <NSObject.h> // Unknown library
#import "GMM-Structs.h"


@interface GMMGeoTileDecoder : NSObject <GEOTileDecoder> {
	BOOL _runningOnIPad;	// 4 = 0x4
	BOOL _idiomIPad;	// 5 = 0x5
}
- (id)initRunningOnIPad:(BOOL)pad idiomIPad:(BOOL)pad2;	// 0x30b8633d
- (BOOL)canDecodeTile:(const GEOTileKey *)tile quickly:(BOOL *)quickly;	// 0x30b86391
- (id)decodeTile:(id)tile forKey:(const GEOTileKey *)key;	// 0x30b863ad
@end

