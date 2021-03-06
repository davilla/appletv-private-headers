/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsRemoteLearningView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRImageControl, ATVMultistateProgressIndicator, BRTextControl, NSTimer;

@interface SettingsRemoteLearningView : XXUnknownSuperclass {
	BRTextControl *_title;	// 44 = 0x2c
	BRTextControl *_prompt;	// 48 = 0x30
	BRTextControl *_subPrompt;	// 52 = 0x34
	BRTextControl *_bottomPrompt;	// 56 = 0x38
	BRTextControl *_inactivityMessage;	// 60 = 0x3c
	BRTextControl *_progressBarText;	// 64 = 0x40
	BRImageControl *_buttonImage;	// 68 = 0x44
	ATVMultistateProgressIndicator *_progressBar;	// 72 = 0x48
	NSTimer *_inactivityTimer;	// 76 = 0x4c
}
@property(retain) BRTextControl *bottomPrompt;	// G=0xee45; S=0xf625; converted property
@property(assign) double progressPercentage;	// G=0xed69; S=0xed95; converted property
@property(retain) BRTextControl *prompt;	// G=0xeea5; S=0xf4d5; converted property
@property(retain) BRTextControl *subPrompt;	// G=0xee75; S=0xf42d; converted property
@property(retain) BRTextControl *title;	// G=0xeed5; S=0xf57d; converted property
- (id)init;	// 0xefcd
// converted property getter: - (id)bottomPrompt;	// 0xee45
- (void)dealloc;	// 0xef05
- (void)layoutSubcontrols;	// 0xf6c5
// converted property getter: - (double)progressPercentage;	// 0xed69
// converted property getter: - (id)prompt;	// 0xeea5
// converted property setter: - (void)setBottomPrompt:(id)prompt;	// 0xf625
- (void)setButtonImage:(id)image;	// 0xee11
- (void)setInactivityMessage:(id)message timeout:(double)timeout;	// 0xf2f1
// converted property setter: - (void)setProgressPercentage:(double)percentage;	// 0xed95
- (void)setProgressText:(id)text;	// 0xf249
// converted property setter: - (void)setPrompt:(id)prompt;	// 0xf4d5
// converted property setter: - (void)setSubPrompt:(id)prompt;	// 0xf42d
// converted property setter: - (void)setTitle:(id)title;	// 0xf57d
- (void)showProgress:(BOOL)progress;	// 0xed15
// converted property getter: - (id)subPrompt;	// 0xee75
// converted property getter: - (id)title;	// 0xeed5
@end

@interface SettingsRemoteLearningView (Private)
- (void)_hideInactivityMessage;	// 0xecd9
- (void)_showInactivityMessage;	// 0xfb6d
@end

