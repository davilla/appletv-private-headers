/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivity.h"

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIQuickLookActivity : UIActivity {
	UIDocumentInteractionController *_documentInteractionController;	// 8 = 0x8
}
- (id)initWithDocumentInteractionController:(id)documentInteractionController;	// 0x30549b65
- (void)_cleanup;	// 0x30549bf5
- (id)activityImage;	// 0x30549bcd
- (id)activityTitle;	// 0x30549bb1
- (id)activityType;	// 0x30549ba5
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x30549bdd
- (void)performActivity;	// 0x30549be1
@end

