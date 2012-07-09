/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSControlTableCell.h"

@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell {
	UIActivityIndicatorView *_activityIndicator;	// 364 = 0x16c
	BOOL _alternateSwitchColor;	// 368 = 0x170
}
@property(assign, nonatomic) BOOL loading;	// G=0x31d93899; S=0x31d938b1; 
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x31d935ad
- (BOOL)canReload;	// 0x31d937e9
- (id)controlValue;	// 0x31d93b51
- (void)dealloc;	// 0x31d93b05
- (void)layoutSubviews;	// 0x31d93cc5
// declared property getter: - (BOOL)loading;	// 0x31d93899
- (id)newControl;	// 0x31d9379d
- (void)prepareForReuse;	// 0x31d93759
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0x31d9360d
- (void)reloadWithSpecifier:(id)specifier animated:(BOOL)animated;	// 0x31d93b99
- (void)setCellEnabled:(BOOL)enabled;	// 0x31d93845
// declared property setter: - (void)setLoading:(BOOL)loading;	// 0x31d938b1
- (void)setValue:(id)value;	// 0x31d93c41
@end
