/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputMode.h"

@class NSString;

@interface UIKeyboardInputMode : UITextInputMode {
	NSString *primaryLanguage;	// 4 = 0x4
	NSString *identifier;	// 8 = 0x8
	NSString *softwareLayout;	// 12 = 0xc
	NSString *hardwareLayout;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *hardwareLayout;	// G=0x32052741; S=0x32052679; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x31f7da61; S=0x32052491; @synthesize
@property(retain, nonatomic) NSString *primaryLanguage;	// G=0x32254d31; S=0x320525bd; @synthesize
@property(retain, nonatomic) NSString *softwareLayout;	// G=0x32254d21; S=0x32052609; @synthesize
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)identifier;	// 0x320524b9
+ (id)hardwareLayoutFromIdentifier:(id)identifier;	// 0x32052631
+ (id)keyboardInputModeWithIdentifier:(id)identifier;	// 0x32052321
+ (id)softwareLayoutFromIdentifier:(id)identifier;	// 0x320525e5
- (id)initWithIdentifier:(id)identifier;	// 0x320523d5
- (void)dealloc;	// 0x32254db1
// declared property getter: - (id)hardwareLayout;	// 0x32052741
// declared property getter: - (id)identifier;	// 0x31f7da61
// declared property getter: - (id)primaryLanguage;	// 0x32254d31
// declared property setter: - (void)setHardwareLayout:(id)layout;	// 0x32052679
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x32052491
// declared property setter: - (void)setPrimaryLanguage:(id)language;	// 0x320525bd
// declared property setter: - (void)setSoftwareLayout:(id)layout;	// 0x32052609
// declared property getter: - (id)softwareLayout;	// 0x32254d21
@end
