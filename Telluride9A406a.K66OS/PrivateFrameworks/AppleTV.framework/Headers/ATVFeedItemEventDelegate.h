/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import "BREventDelegate.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedItemEventDelegate : NSObject <BREventDelegate, BRSelectionHandler> {
@private
	NSDictionary *_eventDictionary;	// 4 = 0x4
	BRMerchant *_merchant;	// 8 = 0x8
}
@property(retain) BRMerchant *merchant;	// G=0x32fea169; S=0x32fea17d; @synthesize=_merchant
+ (id)feedItemDelegateWithEventHandlers:(id)eventHandlers;	// 0x32fe9d31
- (id)_initWithEventDictionary:(id)eventDictionary;	// 0x32fe9db5
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x32fe9e89
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x32fea0e5
- (void)dealloc;	// 0x32fe9e29
- (BOOL)handlePlayForControl:(id)control;	// 0x32fea129
- (BOOL)handleSelectionForControl:(id)control;	// 0x32fea0e9
// declared property getter: - (id)merchant;	// 0x32fea169
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x32fea17d
@end

