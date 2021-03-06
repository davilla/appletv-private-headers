/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVGameMenuItemContents, NSString, BRImage;
@protocol BRImageProxy;

@interface ATVGameMenuItem : BRControl {
@private
	ATVGameMenuItemContents *_contents;	// 48 = 0x30
}
@property(copy) NSString *detailedText;	// G=0x32fc7e31; S=0x32fc7e51; 
@property(assign) BOOL dimmed;	// G=0x32fc7eb1; S=0x32fc7ed5; 
@property(copy) NSString *imageSeparatorText;	// G=0x32fc7db1; S=0x32fc7dd1; 
@property(retain) BRImage *leftImage;	// G=0x32fc7cf1; S=0x32fc7d11; 
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0x32fc7cb1; S=0x32fc7cd1; 
@property(retain) BRImage *rightImage;	// G=0x32fc7d31; S=0x32fc7d51; 
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0x32fc7d71; S=0x32fc7d91; 
@property(copy) NSString *rightJustifiedText;	// G=0x32fc7e71; S=0x32fc7e91; 
@property(copy) NSString *text;	// G=0x32fc7df1; S=0x32fc7e11; 
+ (CGRect)contentFrameForControl:(id)control;	// 0x32fc7fe9
- (id)init;	// 0x32fc79b5
- (float)accessibilityDelayForScreenContent;	// 0x32fc7fe1
- (id)accessibilityLabel;	// 0x32fc7ef9
- (id)accessibilityTraits;	// 0x32fc7f71
- (void)controlWasFocused;	// 0x32fc7b0d
- (void)controlWasUnfocused;	// 0x32fc7b5d
- (void)dealloc;	// 0x32fc7ac1
// declared property getter: - (id)detailedText;	// 0x32fc7e31
// declared property getter: - (BOOL)dimmed;	// 0x32fc7eb1
- (void)drawInContext:(CGContextRef)context;	// 0x32fc7c51
- (CGRect)focusCursorFrame;	// 0x32fc7bd1
// declared property getter: - (id)imageSeparatorText;	// 0x32fc7db1
- (BOOL)isAccessibilityElement;	// 0x32fc7ef5
// declared property getter: - (id)leftImage;	// 0x32fc7cf1
// declared property getter: - (id)leftImageProxy;	// 0x32fc7cb1
// declared property getter: - (id)rightImage;	// 0x32fc7d31
// declared property getter: - (id)rightImageProxy;	// 0x32fc7d71
// declared property getter: - (id)rightJustifiedText;	// 0x32fc7e71
// declared property setter: - (void)setDetailedText:(id)text;	// 0x32fc7e51
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x32fc7ed5
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x32fc7dd1
// declared property setter: - (void)setLeftImage:(id)image;	// 0x32fc7d11
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0x32fc7cd1
// declared property setter: - (void)setRightImage:(id)image;	// 0x32fc7d51
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0x32fc7d91
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x32fc7e91
// declared property setter: - (void)setText:(id)text;	// 0x32fc7e11
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32fc7bad
// declared property getter: - (id)text;	// 0x32fc7df1
@end

