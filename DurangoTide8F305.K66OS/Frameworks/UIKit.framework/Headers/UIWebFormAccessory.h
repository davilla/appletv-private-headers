/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIToolbar.h"
#import "UIKit-Structs.h"

@class UISegmentedControl, UIBarButtonItem;
@protocol UIWebFormAccessoryDelegate;

__attribute__((visibility("hidden")))
@interface UIWebFormAccessory : UIToolbar {
@private
	UISegmentedControl *_tab;	// 104 = 0x68
	UIBarButtonItem *_autofill;	// 108 = 0x6c
	id<UIWebFormAccessoryDelegate> delegate;	// 112 = 0x70
}
@property(retain, nonatomic) UIBarButtonItem *_autofill;	// G=0x32225d59; S=0x3222632d; @synthesize
@property(retain, nonatomic) UISegmentedControl *_tab;	// G=0x32225d69; S=0x32226305; @synthesize
@property(assign, nonatomic, getter=isAutoFillEnabled) BOOL autoFillEnabled;	// G=0x32225e09; S=0x32225e2d; 
@property(assign, nonatomic) id<UIWebFormAccessoryDelegate> delegate;	// G=0x32225d39; S=0x32225d49; @synthesize
@property(assign, nonatomic, getter=isNextEnabled) BOOL nextEnabled;	// G=0x32225dc1; S=0x32225de5; 
@property(assign, nonatomic, getter=isPreviousEnabled) BOOL previousEnabled;	// G=0x32225d79; S=0x32225d9d; 
- (id)init;	// 0x32225f65
// declared property getter: - (id)_autofill;	// 0x32225d59
- (void)_orientationDidChange:(id)_orientation;	// 0x32225ed9
// declared property getter: - (id)_tab;	// 0x32225d69
- (void)_updateFrame;	// 0x3222629d
- (void)autoFill:(id)fill;	// 0x32225e51
- (void)dealloc;	// 0x32225eed
// declared property getter: - (id)delegate;	// 0x32225d39
- (void)done:(id)done;	// 0x32225eb9
// declared property getter: - (BOOL)isAutoFillEnabled;	// 0x32225e09
// declared property getter: - (BOOL)isNextEnabled;	// 0x32225dc1
// declared property getter: - (BOOL)isPreviousEnabled;	// 0x32225d79
// declared property setter: - (void)setAutoFillEnabled:(BOOL)enabled;	// 0x32225e2d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32225d49
// declared property setter: - (void)setNextEnabled:(BOOL)enabled;	// 0x32225de5
// declared property setter: - (void)setPreviousEnabled:(BOOL)enabled;	// 0x32225d9d
// declared property setter: - (void)set_autofill:(id)autofill;	// 0x3222632d
// declared property setter: - (void)set_tab:(id)tab;	// 0x32226305
- (void)tab:(id)tab;	// 0x32225e71
@end
