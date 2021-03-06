/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSString;

@interface MPActionTrigger : MPAction {
	NSString *_actionKey;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *actionKey;	// G=0x30969d25; S=0x30969b49; @synthesize=_actionKey
+ (id)actionTrigger;	// 0x30969a09
- (id)init;	// 0x30969a4d
- (id)initWithCoder:(id)coder;	// 0x30969a8d
// declared property getter: - (id)actionKey;	// 0x30969d25
- (id)copyWithZone:(NSZone *)zone;	// 0x30969c75
- (void)dealloc;	// 0x30969afd
- (void)encodeWithCoder:(id)coder;	// 0x30969c15
- (void)setAction:(id)action;	// 0x30969cc9
// declared property setter: - (void)setActionKey:(id)key;	// 0x30969b49
@end

