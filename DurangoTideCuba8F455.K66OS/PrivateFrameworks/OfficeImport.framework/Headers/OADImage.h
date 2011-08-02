/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADGraphic.h"

@class OADShapeGeometry, OADMovie, OADOle;

__attribute__((visibility("hidden")))
@interface OADImage : OADGraphic {
@private
	OADShapeGeometry *mGeometry;	// 28 = 0x1c
	OADOle *mOle;	// 32 = 0x20
	OADMovie *mMovie;	// 36 = 0x24
}
@property(retain) id geometry;	// G=0x32cd639d; S=0x32c5e2e5; converted property
@property(retain) id movie;	// G=0x32b83095; S=0x32c9b12d; converted property
@property(retain) id ole;	// G=0x32c5ef1d; S=0x32c2675d; converted property
- (id)init;	// 0x32b97fd1
- (id)initWithBlipRef:(id)blipRef;	// 0x32cd65c9
- (id)createImageFill;	// 0x32cd6479
- (void)createPictureFramePresetGeometry;	// 0x32cd63ad
- (void)dealloc;	// 0x32b1339d
// converted property getter: - (id)geometry;	// 0x32cd639d
- (id)imageProperties;	// 0x32b830a5
// converted property getter: - (id)movie;	// 0x32b83095
// converted property getter: - (id)ole;	// 0x32c5ef1d
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x32c5e2e5
// converted property setter: - (void)setMovie:(id)movie;	// 0x32c9b12d
// converted property setter: - (void)setOle:(id)ole;	// 0x32c2675d
- (void)setParentTextListStyle:(id)style;	// 0x32b98b69
@end

