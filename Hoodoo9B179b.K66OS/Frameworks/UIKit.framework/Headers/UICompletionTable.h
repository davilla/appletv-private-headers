/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIView.h"

@class UICompletionTablePrivate;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource> {
	UICompletionTablePrivate *_private;	// 48 = 0x30
}
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x330d4b2d; S=0x330d4b6d; 
@property(assign, nonatomic) id delegate;	// G=0x330d49c5; S=0x33030989; 
@property(assign, nonatomic) UIEdgeInsets scrollIndicatorInsets;	// G=0x330d4bb1; S=0x330d4bf1; 
+ (id)_cellFont;	// 0x330d4955
+ (id)_shadowImage;	// 0x33030951
- (id)initWithFrame:(CGRect)frame;	// 0x330306e9
- (id)_completionForRow:(int)row;	// 0x330d4c35
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x330d4b2d
- (void)dealloc;	// 0x330d4979
// declared property getter: - (id)delegate;	// 0x330d49c5
- (id)dequeueReusableCellWithIdentifier:(id)identifier;	// 0x33030da9
- (void)layoutSubviews;	// 0x33030a91
- (void)reloadData;	// 0x330309a9
// declared property getter: - (UIEdgeInsets)scrollIndicatorInsets;	// 0x330d4bb1
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x330d4b6d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33030989
// declared property setter: - (void)setScrollIndicatorInsets:(UIEdgeInsets)insets;	// 0x330d4bf1
- (void)setTopStrokeColor:(id)color;	// 0x330d49e5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33030c2d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x330d4c79
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33030a61
@end

