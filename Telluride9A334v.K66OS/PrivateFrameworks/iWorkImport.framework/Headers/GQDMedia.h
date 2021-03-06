/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDNameMappable.h"
#import "GQDGraphic.h"
#import "iWorkImport-Structs.h"

@class GQDFilteredImage, GQDAffineGeometry, GQDPath, GQDImageBinary;

__attribute__((visibility("hidden")))
@interface GQDMedia : GQDGraphic <GQDNameMappable> {
@private
	GQDFilteredImage *mFilteredImage;	// 40 = 0x28
	GQDAffineGeometry *mCropGeometry;	// 44 = 0x2c
	GQDImageBinary *mOriginalImageBinary;	// 48 = 0x30
	GQDPath *mPath;	// 52 = 0x34
}
+ (const StateSpec *)stateForReading;	// 0x32bd2dc9
- (id)cropGeometry;	// 0x32bd2dd5
- (void)dealloc;	// 0x32bd2e2d
- (id)imageBinary;	// 0x32bd2df5
- (id)maskPath;	// 0x32bd2de5
@end

