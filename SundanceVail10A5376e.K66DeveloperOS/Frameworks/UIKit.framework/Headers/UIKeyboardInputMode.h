/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputMode.h"

@class NSString, NSArray;

@interface UIKeyboardInputMode : UITextInputMode {
	NSString *primaryLanguage;	// 4 = 0x4
	NSString *identifier;	// 8 = 0x8
	NSString *softwareLayout;	// 12 = 0xc
	NSString *hardwareLayout;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *hardwareLayout;	// G=0x3028aa2d; S=0x3028a959; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x3028a969; S=0x3028a4fd; @synthesize
@property(readonly, assign, nonatomic) NSArray *normalizedIdentifierLevels;	// G=0x30592335; 
@property(retain, nonatomic) NSString *primaryLanguage;	// G=0x3030bd59; S=0x3028a8b9; @synthesize
@property(retain, nonatomic) NSString *softwareLayout;	// G=0x3030bf7d; S=0x3028a8f1; @synthesize
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)identifier;	// 0x3028a50d
+ (id)hardwareLayoutFromIdentifier:(id)identifier;	// 0x3028a901
+ (id)keyboardInputModeWithIdentifier:(id)identifier;	// 0x3028a37d
+ (id)softwareLayoutFromIdentifier:(id)identifier;	// 0x3028a8c9
- (id)initWithIdentifier:(id)identifier;	// 0x3028a431
- (void)dealloc;	// 0x30592275
// declared property getter: - (id)hardwareLayout;	// 0x3028aa2d
// declared property getter: - (id)identifier;	// 0x3028a969
// declared property getter: - (id)normalizedIdentifierLevels;	// 0x30592335
// declared property getter: - (id)primaryLanguage;	// 0x3030bd59
// declared property setter: - (void)setHardwareLayout:(id)layout;	// 0x3028a959
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3028a4fd
// declared property setter: - (void)setPrimaryLanguage:(id)language;	// 0x3028a8b9
// declared property setter: - (void)setSoftwareLayout:(id)layout;	// 0x3028a8f1
// declared property getter: - (id)softwareLayout;	// 0x3030bf7d
@end

