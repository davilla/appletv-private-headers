/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivity.h"

@class MFMessageComposeViewController;

@interface UIMessageActivity : UIActivity {
@private
	MFMessageComposeViewController *_messageComposeViewController;	// 8 = 0x8
}
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController;	// G=0x304bb1c1; S=0x304bb1fd; @synthesize=_messageComposeViewController
- (id)_activityImage;	// 0x304baf89
- (void)_cleanup;	// 0x304bb1e9
- (id)activityTitle;	// 0x304baffd
- (id)activityType;	// 0x304baf79
- (id)activityViewController;	// 0x304bb1b1
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x304bb019
- (void)dealloc;	// 0x304baf2d
// declared property getter: - (id)messageComposeViewController;	// 0x304bb1c1
- (void)messageComposeViewController:(id)controller didFinishWithResult:(int)result;	// 0x304bb1d1
- (void)prepareWithActivityItems:(id)activityItems;	// 0x304bb055
// declared property setter: - (void)setMessageComposeViewController:(id)controller;	// 0x304bb1fd
@end
