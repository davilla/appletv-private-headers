/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIResponder;

__attribute__((visibility("hidden")))
@interface UIInputViewPostPinningReloadState : NSObject {
@private
	UIResponder *_responderPreventedFromSettingInputViews;	// 4 = 0x4
}
@property(retain, nonatomic) UIResponder *responderToReload;	// G=0x3031b04d; S=0x3031cd9d; @synthesize=_responderPreventedFromSettingInputViews
+ (id)stateWithResponder:(id)responder;	// 0x3031c815
- (void)dealloc;	// 0x3031ccd5
// declared property getter: - (id)responderToReload;	// 0x3031b04d
// declared property setter: - (void)setResponderToReload:(id)reload;	// 0x3031cd9d
@end

