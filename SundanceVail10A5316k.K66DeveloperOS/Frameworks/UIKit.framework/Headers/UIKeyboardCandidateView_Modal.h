/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateViewInline.h"
#import "UIKeyboardCandidateView.h"

@class UIKeyboardCandidateGridHeader;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView_Modal : UIKeyboardCandidateView <UIKeyboardCandidateViewInline> {
@private
	UIKeyboardCandidateGridHeader *_header;	// 180 = 0xb4
	CGRect _collapsedRect;	// 184 = 0xb8
}
- (id)initWithFrame:(CGRect)frame;	// 0x304c1291
- (void)_collapse:(id)collapse;	// 0x304c1a19
- (id)activeCandidateList;	// 0x304c1909
- (void)candidatesDidChange;	// 0x304c1919
- (void)layoutSubviews;	// 0x304c1939
- (void)setCandidateBarExtended:(BOOL)extended fromRect:(CGRect)rect;	// 0x304c151d
@end

