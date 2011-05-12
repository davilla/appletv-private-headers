/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarServiceItemView : UIStatusBarItemView {
@private
	NSString *_pathToBlackServiceImage;	// 72 = 0x48
	NSString *_pathToSilverServiceImage;	// 76 = 0x4c
	NSString *_serviceString;	// 80 = 0x50
	int _contentType;	// 84 = 0x54
	BOOL _loopingNecessaryForString;	// 88 = 0x58
	BOOL _usingStringForBlack;	// 89 = 0x59
	BOOL _usingStringForSilver;	// 90 = 0x5a
	BOOL _loopNowIfNecessary;	// 91 = 0x5b
	float _letterSpacing;	// 92 = 0x5c
}
- (void)_loopAnimationDidStop:(id)_loopAnimation finished:(id)finished context:(void *)context;	// 0x3220ebf1
- (BOOL)_loopingNecessary;	// 0x31f8d2d5
- (void)_setUsingString:(BOOL)string;	// 0x31fa7dc1
- (BOOL)animatesDataChange;	// 0x31f8b8d1
- (BOOL)animatesFrameChange;	// 0x31fa7919
- (id)contentsImageForStyle:(int)style;	// 0x31fa7af9
- (void)dealloc;	// 0x32071c09
- (void)performPendedActions;	// 0x31f8d191
- (void)setVisible:(BOOL)visible frame:(CGRect)frame duration:(double)duration;	// 0x31f9bba9
- (float)standardPadding;	// 0x31f8d02d
- (id)textColorForStyle:(int)style;	// 0x3220eb79
- (float)updateContentsAndWidth;	// 0x31fa7921
- (BOOL)updateForNewData:(XXStruct_LyCp7D *)newData actions:(int)actions;	// 0x31f8b8d5
- (BOOL)usesSmallerTextFont;	// 0x31fa791d
@end

