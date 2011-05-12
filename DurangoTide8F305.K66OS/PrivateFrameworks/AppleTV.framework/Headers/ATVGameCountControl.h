/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVGameCountControl : BRControl {
@private
	unsigned _gameCount;	// 44 = 0x2c
}
@property(assign, nonatomic) unsigned gameCount;	// G=0x307a54c9; S=0x307a5761; @synthesize=_gameCount
- (void)controlWasFocused;	// 0x307a5719
- (void)controlWasUnfocused;	// 0x307a56d1
// declared property getter: - (unsigned)gameCount;	// 0x307a54c9
- (void)layoutSubcontrols;	// 0x307a5589
- (id)preferredActionForKey:(id)key;	// 0x307a54d9
// declared property setter: - (void)setGameCount:(unsigned)count;	// 0x307a5761
@end

