/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSString;

@interface MCActionTrigger : MCAction {
	NSString *mActionKey;	// 16 = 0x10
}
@property(copy) NSString *actionKey;	// G=0x335bc1b9; S=0x335bc1cd; @synthesize=mActionKey
+ (id)actionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withActionKey:(id)actionKey;	// 0x335bbfc5
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x335bc03d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x335bc161
// declared property getter: - (id)actionKey;	// 0x335bc1b9
- (void)demolish;	// 0x335bc0ad
- (id)imprint;	// 0x335bc101
// declared property setter: - (void)setActionKey:(id)key;	// 0x335bc1cd
@end
