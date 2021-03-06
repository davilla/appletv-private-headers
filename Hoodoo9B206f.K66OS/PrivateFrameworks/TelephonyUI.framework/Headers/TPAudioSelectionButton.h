/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIButton.h> // Unknown library


@interface TPAudioSelectionButton : UIButton {
	int _index;	// 140 = 0x8c
}
@property(assign, nonatomic) int index;	// G=0x33d9cc4d; S=0x33d9cc5d; @synthesize=_index
- (void)_audioSelectionButtonTitleRect:(CGRect *)rect imageRect:(CGRect *)rect2 forContentRect:(CGRect)contentRect;	// 0x33d9cd3d
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x33d9ccd5
// declared property getter: - (int)index;	// 0x33d9cc4d
// declared property setter: - (void)setIndex:(int)index;	// 0x33d9cc5d
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x33d9cc6d
@end

