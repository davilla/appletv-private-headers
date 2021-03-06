/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import <NSObject.h> // Unknown library
#import "BREventDelegate.h"

@class NSDictionary, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedItemEventDelegate : NSObject <BREventDelegate, BRSelectionHandler> {
@private
	NSDictionary *_eventDictionary;	// 4 = 0x4
	BRMerchant *_merchant;	// 8 = 0x8
}
@property(retain) BRMerchant *merchant;	// G=0x307be239; S=0x307be251; @synthesize=_merchant
+ (id)feedItemDelegateWithEventHandlers:(id)eventHandlers;	// 0x307bdf75
- (id)_initWithEventDictionary:(id)eventDictionary;	// 0x307bdf05
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x307bdff9
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x307bde31
- (void)dealloc;	// 0x307bdead
- (BOOL)handlePlayForControl:(id)control;	// 0x307bde35
- (BOOL)handleSelectionForControl:(id)control;	// 0x307bde71
// declared property getter: - (id)merchant;	// 0x307be239
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x307be251
@end

