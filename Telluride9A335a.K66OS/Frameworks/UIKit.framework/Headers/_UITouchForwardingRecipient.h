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
@property(assign, nonatomic) int autocompletedPhase;	// G=0x33ad97cd; S=0x33ad34c9; @synthesize
@property(assign, nonatomic) UIResponder *fromResponder;	// G=0x33aa5d6d; S=0x33baca25; @synthesize
@property(assign, nonatomic) int recordedPhase;	// G=0x33ad34b9; S=0x33aa3855; @synthesize
@property(assign, nonatomic) UIResponder *responder;	// G=0x33aa5d5d; S=0x33baca35; @synthesize
- (id)initWithResponder:(id)responder fromResponder:(id)responder2;	// 0x33aa3805
// declared property getter: - (int)autocompletedPhase;	// 0x33ad97cd
- (id)description;	// 0x33bac91d
// declared property getter: - (id)fromResponder;	// 0x33aa5d6d
// declared property getter: - (int)recordedPhase;	// 0x33ad34b9
// declared property getter: - (id)responder;	// 0x33aa5d5d
// declared property setter: - (void)setAutocompletedPhase:(int)phase;	// 0x33ad34c9
// declared property setter: - (void)setFromResponder:(id)responder;	// 0x33baca25
// declared property setter: - (void)setRecordedPhase:(int)phase;	// 0x33aa3855
// declared property setter: - (void)setResponder:(id)responder;	// 0x33baca35
@end

