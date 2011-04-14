/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRViewController.h> // Unknown library

@class NSDictionary, BRSystemLanguages, NSArray;

@interface ATVLanguageChooserController : BRViewController {
@private
	BRSystemLanguages *_systemLanguages;	// 64 = 0x40
	NSArray *_languageKeys;	// 68 = 0x44
	NSDictionary *_languageKeysAndPrompts;	// 72 = 0x48
	BOOL _canBePopped;	// 76 = 0x4c
	BOOL _isOOB;	// 77 = 0x4d
	BOOL _useVoiceOverGreeting;	// 78 = 0x4e
	double _lastPlayButtonPress;	// 80 = 0x50
	int _playButtonPressCount;	// 88 = 0x58
}
@property(assign) BOOL canBePopped;	// G=0x3367ecc5; S=0x3367ecb5; converted property
@property(assign, nonatomic) BOOL useVoiceOverGreeting;	// G=0x3367ecd5; S=0x3367ece5; @synthesize=_useVoiceOverGreeting
+ (id)controlOOB;	// 0x3367ef45
- (id)init;	// 0x3367ef2d
- (id)initWithOOBLayout:(BOOL)ooblayout;	// 0x3367f0e9
- (void)_collectLanguages;	// 0x3367f659
- (long)_defaultIndex;	// 0x3367ecf5
- (void)_performLanguageChange:(id)change;	// 0x3367f57d
- (void)_showProgressForLanguage:(id)language;	// 0x3367f47d
- (BOOL)brEventAction:(id)action;	// 0x3367f2e1
// converted property getter: - (BOOL)canBePopped;	// 0x3367ecc5
- (void)dealloc;	// 0x3367f07d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3367edad
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3367ee55
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3367ee35
// converted property setter: - (void)setCanBePopped:(BOOL)popped;	// 0x3367ecb5
// declared property setter: - (void)setUseVoiceOverGreeting:(BOOL)greeting;	// 0x3367ece5
// declared property getter: - (BOOL)useVoiceOverGreeting;	// 0x3367ecd5
- (void)wasPushed;	// 0x3367eff1
@end
