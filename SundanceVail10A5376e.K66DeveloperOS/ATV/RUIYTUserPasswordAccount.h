/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTAccount.h"
#import "BRUserPasswordAccount.h"


__attribute__((visibility("hidden")))
@interface RUIYTUserPasswordAccount : BRUserPasswordAccount <RUIYTAccount> {
}
@property(assign) BOOL ytAllowsInappropriate;	// G=0x254bc5; S=0x254c09; 
+ (int)_currentVersion;	// 0x254b01
- (id)initWithCoder:(id)coder;	// 0x254b05
- (id)_keychainAccessGroup;	// 0x254c79
// declared property setter: - (void)setYtAllowsInappropriate:(BOOL)inappropriate;	// 0x254c09
- (id)type;	// 0x254c5d
// declared property getter: - (BOOL)ytAllowsInappropriate;	// 0x254bc5
@end
