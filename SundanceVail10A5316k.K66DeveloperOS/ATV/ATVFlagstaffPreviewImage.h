/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRReady.h"
#import "BRControl.h"

@class NSString, BRAsyncImageControl, ATVFlagstaffPreviewImageOverLay, BRImage, BRReflectionControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreviewImage : BRControl <BRReady> {
	BRAsyncImageControl *_imageControl;	// 80 = 0x50
	BRAsyncImageControl *_logoImageControl;	// 84 = 0x54
	BRReflectionControl *_reflectionControl;	// 88 = 0x58
	ATVFlagstaffPreviewImageOverLay *_overLayControl;	// 92 = 0x5c
	BOOL _isReady;	// 96 = 0x60
}
@property(retain, nonatomic) BRImage *image;	// G=0x1701b1; S=0x1700a1; 
@property(retain, nonatomic) id<BRImageProxy> imageProxy;	// G=0x170335; S=0x1701d1; 
@property(readonly, assign) BOOL isReady;	// G=0x170091; converted property
@property(retain, nonatomic) BRImage *logoImage;	// G=0x1703e1; S=0x170355; 
@property(retain, nonatomic) id<BRImageProxy> logoImageProxy;	// G=0x17048d; S=0x170401; 
@property(copy, nonatomic) NSString *text1;	// G=0x1704cd; S=0x1704ad; 
@property(copy, nonatomic) NSString *text2;	// G=0x17050d; S=0x1704ed; 
@property(copy, nonatomic) NSString *text3;	// G=0x17054d; S=0x17052d; 
- (id)init;	// 0x16fea9
- (void)_imageReady:(id)ready;	// 0x1706b1
- (void)dealloc;	// 0x16ff89
- (void)getReady;	// 0x170041
// declared property getter: - (id)image;	// 0x1701b1
// declared property getter: - (id)imageProxy;	// 0x170335
// converted property getter: - (BOOL)isReady;	// 0x170091
- (void)layoutSubcontrols;	// 0x17056d
// declared property getter: - (id)logoImage;	// 0x1703e1
// declared property getter: - (id)logoImageProxy;	// 0x17048d
// declared property setter: - (void)setImage:(id)image;	// 0x1700a1
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x1701d1
// declared property setter: - (void)setLogoImage:(id)image;	// 0x170355
// declared property setter: - (void)setLogoImageProxy:(id)proxy;	// 0x170401
// declared property setter: - (void)setText1:(id)a1;	// 0x1704ad
// declared property setter: - (void)setText2:(id)a2;	// 0x1704ed
// declared property setter: - (void)setText3:(id)a3;	// 0x17052d
// declared property getter: - (id)text1;	// 0x1704cd
// declared property getter: - (id)text2;	// 0x17050d
// declared property getter: - (id)text3;	// 0x17054d
@end

