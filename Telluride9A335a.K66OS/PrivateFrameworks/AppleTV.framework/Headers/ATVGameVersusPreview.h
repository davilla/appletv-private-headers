/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "BRReady.h"

@class BRTextControl, BRAsyncImageControl, NSString;

__attribute__((visibility("hidden")))
@interface ATVGameVersusPreview : BRControl <BRReady> {
@private
	BRTextControl *_centerTextControl;	// 48 = 0x30
	BOOL _isReady;	// 52 = 0x34
	BRAsyncImageControl *_backgroundImageControl;	// 56 = 0x38
	BRAsyncImageControl *_leftImageControl;	// 60 = 0x3c
	BRAsyncImageControl *_rightImageControl;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) BRAsyncImageControl *backgroundImageControl;	// G=0x3413f6f9; @synthesize=_backgroundImageControl
@property(copy, nonatomic) NSString *centerText;	// G=0x3413f4b1; S=0x3413f4e9; 
@property(readonly, assign) BOOL isReady;	// G=0x3413f4a1; converted property
@property(readonly, assign, nonatomic) BRAsyncImageControl *leftImageControl;	// G=0x3413f709; @synthesize=_leftImageControl
@property(readonly, assign, nonatomic) BRAsyncImageControl *rightImageControl;	// G=0x3413f719; @synthesize=_rightImageControl
- (id)init;	// 0x3413f149
- (id)_centerTextAttributes;	// 0x3413f729
- (void)_imageLoadedNotification:(id)notification;	// 0x3413f74d
- (void)_setHiddenOnSubcontrols:(BOOL)subcontrols;	// 0x3413f841
// declared property getter: - (id)backgroundImageControl;	// 0x3413f6f9
// declared property getter: - (id)centerText;	// 0x3413f4b1
- (void)dealloc;	// 0x3413f375
- (void)getReady;	// 0x3413f42d
// converted property getter: - (BOOL)isReady;	// 0x3413f4a1
- (void)layoutSubcontrols;	// 0x3413f53d
// declared property getter: - (id)leftImageControl;	// 0x3413f709
// declared property getter: - (id)rightImageControl;	// 0x3413f719
// declared property setter: - (void)setCenterText:(id)text;	// 0x3413f4e9
@end

