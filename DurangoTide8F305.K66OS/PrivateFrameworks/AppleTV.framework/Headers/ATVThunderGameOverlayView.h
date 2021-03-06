/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <BRControl.h> // Unknown library

@class BRTextControl, NSString, BRAsyncImageControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVThunderGameOverlayView : BRControl {
@private
	BRTextControl *_titleText;	// 44 = 0x2c
	BRControl *_divider;	// 48 = 0x30
	BRTextControl *_leftText;	// 52 = 0x34
	BRTextControl *_rightText;	// 56 = 0x38
	BRTextControl *_centerText;	// 60 = 0x3c
	BRAsyncImageControl *_leftImage;	// 64 = 0x40
	BRAsyncImageControl *_rightImage;	// 68 = 0x44
	BRControl *_centerBackgroundImageContainer;	// 72 = 0x48
	BRAsyncImageControl *_centerBackgroundImage;	// 76 = 0x4c
}
@property(retain) id<BRImageProxy> centerBackgroundImageProxy;	// G=0x307b6129; S=0x307b6109; 
@property(copy) NSString *centerText;	// G=0x307b6189; S=0x307b6661; 
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0x307b6169; S=0x307b6149; 
@property(copy) NSString *leftText;	// G=0x307b61e9; S=0x307b6739; 
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0x307b60e9; S=0x307b60c9; 
@property(copy) NSString *rightText;	// G=0x307b61b9; S=0x307b66e9; 
@property(copy) NSString *titleText;	// G=0x307b6219; S=0x307b6789; 
- (id)init;	// 0x307b6321
// declared property getter: - (id)centerBackgroundImageProxy;	// 0x307b6129
// declared property getter: - (id)centerText;	// 0x307b6189
- (void)dealloc;	// 0x307b6249
- (void)layoutSubcontrols;	// 0x307b67ed
// declared property getter: - (id)leftImageProxy;	// 0x307b6169
// declared property getter: - (id)leftText;	// 0x307b61e9
// declared property getter: - (id)rightImageProxy;	// 0x307b60e9
// declared property getter: - (id)rightText;	// 0x307b61b9
// declared property setter: - (void)setCenterBackgroundImageProxy:(id)proxy;	// 0x307b6109
// declared property setter: - (void)setCenterText:(id)text;	// 0x307b6661
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0x307b6149
// declared property setter: - (void)setLeftText:(id)text;	// 0x307b6739
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0x307b60c9
// declared property setter: - (void)setRightText:(id)text;	// 0x307b66e9
// declared property setter: - (void)setTitleText:(id)text;	// 0x307b6789
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x307b60b1
// declared property getter: - (id)titleText;	// 0x307b6219
@end

