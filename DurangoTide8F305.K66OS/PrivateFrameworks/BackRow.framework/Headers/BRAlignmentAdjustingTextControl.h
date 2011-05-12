/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRTextControl.h"


@interface BRAlignmentAdjustingTextControl : BRTextControl {
@private
	int _singleLineAlignment;	// 48 = 0x30
	int _multiLineAlignment;	// 52 = 0x34
}
@property(assign) int multiLineAlignment;	// G=0x32a24ee5; S=0x32a24ef5; @synthesize=_multiLineAlignment
@property(assign) int singleLineAlignment;	// G=0x32a24f05; S=0x32a24f15; @synthesize=_singleLineAlignment
- (id)init;	// 0x32a24f25
- (void)_updateAttributes;	// 0x32a25005
// declared property getter: - (int)multiLineAlignment;	// 0x32a24ee5
- (void)setAttributedString:(id)string;	// 0x32a24f6d
- (void)setBounds:(CGRect)bounds;	// 0x32a24fa9
// declared property setter: - (void)setMultiLineAlignment:(int)alignment;	// 0x32a24ef5
// declared property setter: - (void)setSingleLineAlignment:(int)alignment;	// 0x32a24f15
// declared property getter: - (int)singleLineAlignment;	// 0x32a24f05
@end

