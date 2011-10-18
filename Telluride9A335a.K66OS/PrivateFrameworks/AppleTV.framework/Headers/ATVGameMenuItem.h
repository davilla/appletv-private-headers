/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVGameMenuItemContents, BRImage, NSString;
@protocol BRImageProxy;

@interface ATVGameMenuItem : BRControl {
@private
	ATVGameMenuItemContents *_contents;	// 48 = 0x30
}
@property(copy) NSString *detailedText;	// G=0x3413d45d; S=0x3413d47d; 
@property(assign) BOOL dimmed;	// G=0x3413d4dd; S=0x3413d501; 
@property(copy) NSString *imageSeparatorText;	// G=0x3413d3dd; S=0x3413d3fd; 
@property(retain) BRImage *leftImage;	// G=0x3413d31d; S=0x3413d33d; 
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0x3413d2dd; S=0x3413d2fd; 
@property(retain) BRImage *rightImage;	// G=0x3413d35d; S=0x3413d37d; 
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0x3413d39d; S=0x3413d3bd; 
@property(copy) NSString *rightJustifiedText;	// G=0x3413d49d; S=0x3413d4bd; 
@property(copy) NSString *text;	// G=0x3413d41d; S=0x3413d43d; 
+ (CGRect)contentFrameForControl:(id)control;	// 0x3413d615
- (id)init;	// 0x3413cfe1
- (float)accessibilityDelayForScreenContent;	// 0x3413d60d
- (id)accessibilityLabel;	// 0x3413d525
- (id)accessibilityTraits;	// 0x3413d59d
- (void)controlWasFocused;	// 0x3413d139
- (void)controlWasUnfocused;	// 0x3413d189
- (void)dealloc;	// 0x3413d0ed
// declared property getter: - (id)detailedText;	// 0x3413d45d
// declared property getter: - (BOOL)dimmed;	// 0x3413d4dd
- (void)drawInContext:(CGContextRef)context;	// 0x3413d27d
- (CGRect)focusCursorFrame;	// 0x3413d1fd
// declared property getter: - (id)imageSeparatorText;	// 0x3413d3dd
- (BOOL)isAccessibilityElement;	// 0x3413d521
// declared property getter: - (id)leftImage;	// 0x3413d31d
// declared property getter: - (id)leftImageProxy;	// 0x3413d2dd
// declared property getter: - (id)rightImage;	// 0x3413d35d
// declared property getter: - (id)rightImageProxy;	// 0x3413d39d
// declared property getter: - (id)rightJustifiedText;	// 0x3413d49d
// declared property setter: - (void)setDetailedText:(id)text;	// 0x3413d47d
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x3413d501
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x3413d3fd
// declared property setter: - (void)setLeftImage:(id)image;	// 0x3413d33d
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0x3413d2fd
// declared property setter: - (void)setRightImage:(id)image;	// 0x3413d37d
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0x3413d3bd
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x3413d4bd
// declared property setter: - (void)setText:(id)text;	// 0x3413d43d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3413d1d9
// declared property getter: - (id)text;	// 0x3413d41d
@end

