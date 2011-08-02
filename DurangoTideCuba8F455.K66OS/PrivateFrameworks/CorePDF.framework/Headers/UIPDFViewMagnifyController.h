/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class UIPDFMagnifiedView, UIPDFPageView, UIWindow;

@interface UIPDFViewMagnifyController : NSObject {
	CGPoint _magnifierPoint;	// 4 = 0x4
	float _loupeRadius;	// 12 = 0xc
	CGSize _magnifierSize;	// 16 = 0x10
	CGPoint _offset;	// 24 = 0x18
	float _magnification;	// 32 = 0x20
	UIPDFMagnifiedView *_magnifiedView;	// 36 = 0x24
	UIWindow *_textEffectsWindow;	// 40 = 0x28
	UIPDFPageView *_pageView;	// 44 = 0x2c
	CGImageRef _image;	// 48 = 0x30
}
@property(assign, nonatomic) float magnification;	// G=0x30bdfb8d; S=0x30bdfb9d; @synthesize=_magnification
@property(retain, nonatomic) UIPDFPageView *pageView;	// G=0x30bdfbad; S=0x30be0021; @synthesize=_pageView
- (id)init;	// 0x30bdfe1d
- (void)hide;	// 0x30bdffd1
// declared property getter: - (float)magnification;	// 0x30bdfb8d
- (void)move;	// 0x30bdfbbd
// declared property getter: - (id)pageView;	// 0x30bdfbad
// declared property setter: - (void)setMagnification:(float)magnification;	// 0x30bdfb9d
// declared property setter: - (void)setPageView:(id)view;	// 0x30be0021
- (void)setPosition:(CGPoint)position loupe:(BOOL)loupe;	// 0x30bdfeb9
- (void)showLoupe;	// 0x30bdfc75
- (void)showMagnifier;	// 0x30be0049
@end

