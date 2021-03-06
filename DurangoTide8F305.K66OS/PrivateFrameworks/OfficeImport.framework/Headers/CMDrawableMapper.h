/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class CMDrawableStyle, NSData, OADDrawable, NSString, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMDrawableMapper : CMMapper {
@private
	OADDrawable *mDrawable;	// 8 = 0x8
	CMDrawableStyle *mStyle;	// 12 = 0xc
	NSData *mImageBinaryData;	// 16 = 0x10
	NSString *mName;	// 20 = 0x14
	NSString *mExtension;	// 24 = 0x18
	int mResourceType;	// 28 = 0x1c
	NSString *mSourcePath;	// 32 = 0x20
	CGRect mBox;	// 36 = 0x24
	float mRotation;	// 52 = 0x34
	BOOL mIsSupported;	// 56 = 0x38
	BOOL mIsCropped;	// 57 = 0x39
	CGRect mUncroppedBox;	// 60 = 0x3c
	OADOrientedBounds *mOrientedBounds;	// 76 = 0x4c
}
@property(assign) float rotation;	// G=0x3457bdd1; S=0x3457bde1; converted property
- (id)initWithOadDrawable:(id)oadDrawable parent:(id)parent;	// 0x343cc525
- (id)initWithParent:(id)parent;	// 0x34543201
- (id)blipAtIndex:(unsigned)index;	// 0x344c0899
- (CGRect)box;	// 0x344c091d
- (void)calculateUncroppedBox:(id)box;	// 0x344d8111
- (id)convertMetafileToPdf;	// 0x34467b15
- (void)dealloc;	// 0x343cc4dd
- (BOOL)isCropped;	// 0x344d82e1
- (void)mapBounds;	// 0x3457bdf9
- (void)mapDrawingContext:(id)context at:(id)at relative:(BOOL)relative withState:(id)state;	// 0x3457be01
- (void)mapImageBinaryData;	// 0x3457bdf5
- (void)mapShapeGraphicsAt:(id)at withState:(id)state;	// 0x344c0eb5
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x3457bdfd
// converted property getter: - (float)rotation;	// 0x3457bdd1
- (id)saveResourceAndReturnPath:(id)path withType:(int)type;	// 0x34461dc1
- (void)setBoundingBox;	// 0x3457bdf1
// converted property setter: - (void)setRotation:(float)rotation;	// 0x3457bde1
- (void)setWithOadImage:(id)oadImage;	// 0x34467919
- (CGRect)shapeTextBoxRect;	// 0x345005bd
- (CGRect)uncroppedBox;	// 0x34535115
@end

