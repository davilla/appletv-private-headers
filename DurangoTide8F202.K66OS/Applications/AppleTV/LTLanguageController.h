/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTLanguageController.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface LTLanguageController : XXUnknownSuperclass {
	BOOL _useVoiceOverGreeting;	// 64 = 0x40
}
@property(assign, nonatomic) BOOL useVoiceOverGreeting;	// G=0x17e41; S=0x17e51; @synthesize=_useVoiceOverGreeting
- (id)init;	// 0x17f89
- (BOOL)brEventAction:(id)action;	// 0x17ed9
- (void)dealloc;	// 0x17f35
- (void)languageSelected:(id)selected;	// 0x17ffd
// declared property setter: - (void)setUseVoiceOverGreeting:(BOOL)greeting;	// 0x17e51
// declared property getter: - (BOOL)useVoiceOverGreeting;	// 0x17e41
- (void)wasPushed;	// 0x17ef9
@end

@interface LTLanguageController (Private)
- (void)_showLanguageChooser;	// 0x17e61
@end

