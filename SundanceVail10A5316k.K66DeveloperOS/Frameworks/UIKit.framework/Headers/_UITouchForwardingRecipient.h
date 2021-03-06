/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UITouchForwardingRecipient : NSObject {
@private
	UIResponder *fromResponder;	// 4 = 0x4
	UIResponder *responder;	// 8 = 0x8
	int recordedPhase;	// 12 = 0xc
	int autocompletedPhase;	// 16 = 0x10
}
@property(assign, nonatomic) int autocompletedPhase;	// G=0x301d5f5d; S=0x301d10b9; @synthesize
@property(assign, nonatomic) UIResponder *fromResponder;	// G=0x301a4d41; S=0x302b048d; @synthesize
@property(assign, nonatomic) int recordedPhase;	// G=0x301d10a9; S=0x301a2715; @synthesize
@property(assign, nonatomic) UIResponder *responder;	// G=0x301a4d31; S=0x302b049d; @synthesize
- (id)initWithResponder:(id)responder fromResponder:(id)responder2;	// 0x301a26c5
// declared property getter: - (int)autocompletedPhase;	// 0x301d5f5d
- (id)description;	// 0x302b0385
// declared property getter: - (id)fromResponder;	// 0x301a4d41
// declared property getter: - (int)recordedPhase;	// 0x301d10a9
// declared property getter: - (id)responder;	// 0x301a4d31
// declared property setter: - (void)setAutocompletedPhase:(int)phase;	// 0x301d10b9
// declared property setter: - (void)setFromResponder:(id)responder;	// 0x302b048d
// declared property setter: - (void)setRecordedPhase:(int)phase;	// 0x301a2715
// declared property setter: - (void)setResponder:(id)responder;	// 0x302b049d
@end

