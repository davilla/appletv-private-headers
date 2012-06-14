/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADGraphic.h"

@class OADMovie, OADShapeGeometry, OADOle;

__attribute__((visibility("hidden")))
@interface OADImage : OADGraphic {
@private
	OADShapeGeometry *mGeometry;	// 28 = 0x1c
	OADOle *mOle;	// 32 = 0x20
	OADMovie *mMovie;	// 36 = 0x24
}
@property(retain) id geometry;	// G=0x31250fb5; S=0x310ef465; converted property
@property(retain) id movie;	// G=0x3107ccc9; S=0x311cec5d; converted property
@property(retain) id ole;	// G=0x310f0391; S=0x3114cef5; converted property
- (id)init;	// 0x31024cb5
- (id)initWithBlipRef:(id)blipRef;	// 0x31250ee1
- (id)createImageFill;	// 0x31250fc5
- (void)createPictureFramePresetGeometry;	// 0x31251139
- (void)dealloc;	// 0x3108c5b5
// converted property getter: - (id)geometry;	// 0x31250fb5
- (id)imageProperties;	// 0x31069c69
// converted property getter: - (id)movie;	// 0x3107ccc9
// converted property getter: - (id)ole;	// 0x310f0391
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x310ef465
// converted property setter: - (void)setMovie:(id)movie;	// 0x311cec5d
// converted property setter: - (void)setOle:(id)ole;	// 0x3114cef5
- (void)setParentTextListStyle:(id)style;	// 0x3106ef5d
@end
