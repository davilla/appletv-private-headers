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
- (void)_loopAnimationDidStop:(id)_loopAnimation finished:(id)finished context:(void *)context;	// 0x30828bf1
- (BOOL)_loopingNecessary;	// 0x305a72d5
- (void)_setUsingString:(BOOL)string;	// 0x305c1dc1
- (BOOL)animatesDataChange;	// 0x305a58d1
- (BOOL)animatesFrameChange;	// 0x305c1919
- (id)contentsImageForStyle:(int)style;	// 0x305c1af9
- (void)dealloc;	// 0x3068bc09
- (void)performPendedActions;	// 0x305a7191
- (void)setVisible:(BOOL)visible frame:(CGRect)frame duration:(double)duration;	// 0x305b5ba9
- (float)standardPadding;	// 0x305a702d
- (id)textColorForStyle:(int)style;	// 0x30828b79
- (float)updateContentsAndWidth;	// 0x305c1921
- (BOOL)updateForNewData:(XXStruct_LyCp7D *)newData actions:(int)actions;	// 0x305a58d5
- (BOOL)usesSmallerTextFont;	// 0x305c191d
@end
