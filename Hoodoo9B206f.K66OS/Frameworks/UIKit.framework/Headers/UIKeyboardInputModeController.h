/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, UIKeyboardInputMode, NSString, NSArray;

@interface UIKeyboardInputModeController : NSObject {
@private
	UIKeyboardInputMode *_currentInputMode;	// 4 = 0x4
	NSMutableArray *_supportedInputModeIdentifiers;	// 8 = 0x8
	NSArray *_inputModesWithoutHardwareSupport;	// 12 = 0xc
	NSString *currentLocale;	// 16 = 0x10
	NSString *currentLanguage;	// 20 = 0x14
	NSArray *keyboardInputModes;	// 24 = 0x18
	NSArray *enabledInputModes;	// 28 = 0x1c
	NSArray *normalizedInputModes;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) BOOL containsDictationSupportedInputMode;	// G=0x35674f15; 
@property(retain) UIKeyboardInputMode *currentInputMode;	// G=0x35332f25; S=0x35381f71; 
@property(retain) NSString *currentLanguage;	// G=0x353eb3e1; S=0x3537e8a5; @synthesize
@property(retain) NSString *currentLocale;	// G=0x353eb3cd; S=0x3537e881; @synthesize
@property(readonly, assign) NSArray *enabledInputModeIdentifiers;	// G=0x3537df1d; 
@property(retain) NSArray *enabledInputModes;	// G=0x3537e86d; S=0x35380619; @synthesize
@property(readonly, assign) NSArray *inputModesWithoutHardwareSupport;	// G=0x35675105; 
@property(retain) NSArray *keyboardInputModes;	// G=0x356750dd; S=0x3538063d; @synthesize
@property(readonly, assign) NSArray *normalizedEnabledInputModeIdentifiers;	// G=0x3567517d; 
@property(retain) NSArray *normalizedInputModes;	// G=0x356750f1; S=0x353805f5; @synthesize
@property(readonly, assign) NSArray *supportedInputModeIdentifiers;	// G=0x3537f7e5; 
+ (id)sharedInputModeController;	// 0x35332ef9
- (id)activeInputModes;	// 0x35674ee5
- (void)clearCachedValues;	// 0x35674ff5
// declared property getter: - (BOOL)containsDictationSupportedInputMode;	// 0x35674f15
// declared property getter: - (id)currentInputMode;	// 0x35332f25
// declared property getter: - (id)currentLanguage;	// 0x353eb3e1
// declared property getter: - (id)currentLocale;	// 0x353eb3cd
- (void)dealloc;	// 0x35674dad
- (id)defaultEnabledInputModesForCurrentLocale:(BOOL)currentLocale;	// 0x3537e269
// declared property getter: - (id)enabledInputModeIdentifiers;	// 0x3537df1d
- (id)enabledInputModeIdentifiers:(BOOL)identifiers;	// 0x3537df31
// declared property getter: - (id)enabledInputModes;	// 0x3537e86d
- (id)inputModeWithIdentifier:(id)identifier;	// 0x35380919
// declared property getter: - (id)inputModesWithoutHardwareSupport;	// 0x35675105
// declared property getter: - (id)keyboardInputModes;	// 0x356750dd
// declared property getter: - (id)normalizedEnabledInputModeIdentifiers;	// 0x3567517d
// declared property getter: - (id)normalizedInputModes;	// 0x356750f1
// declared property setter: - (void)setCurrentInputMode:(id)mode;	// 0x35381f71
// declared property setter: - (void)setCurrentLanguage:(id)language;	// 0x3537e8a5
// declared property setter: - (void)setCurrentLocale:(id)locale;	// 0x3537e881
// declared property setter: - (void)setEnabledInputModes:(id)modes;	// 0x35380619
// declared property setter: - (void)setKeyboardInputModes:(id)modes;	// 0x3538063d
// declared property setter: - (void)setNormalizedInputModes:(id)modes;	// 0x353805f5
// declared property getter: - (id)supportedInputModeIdentifiers;	// 0x3537f7e5
@end
