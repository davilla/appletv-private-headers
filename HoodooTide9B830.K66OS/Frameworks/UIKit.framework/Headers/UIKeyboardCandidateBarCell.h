/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UIKeyboardCandidate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBarCell : UIView {
@private
	UIKeyboardCandidate *m_candidate;	// 48 = 0x30
	NSString *m_candidateText;	// 52 = 0x34
	id m_target;	// 56 = 0x38
	SEL m_action;	// 60 = 0x3c
	CGSize m_textSize;	// 64 = 0x40
	BOOL m_highlighted;	// 72 = 0x48
	BOOL m_special;	// 73 = 0x49
}
@property(assign, nonatomic) BOOL highlighted;	// G=0x303435f5; S=0x30343605; 
@property(readonly, assign, nonatomic) CGSize stringSize;	// G=0x30343b29; @synthesize=m_textSize
+ (id)fontForCandidateText:(id)candidateText;	// 0x30343191
- (id)initWithCandidate:(id)candidate tag:(int)tag target:(id)target action:(SEL)action;	// 0x3034352d
- (id)initWithCandidateText:(id)candidateText tag:(int)tag target:(id)target action:(SEL)action;	// 0x30343251
- (id).cxx_construct;	// 0x30343b45
- (void)dealloc;	// 0x30343595
- (void)drawRect:(CGRect)rect;	// 0x30343635
// declared property getter: - (BOOL)highlighted;	// 0x303435f5
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x30343aa1
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x30343605
// declared property getter: - (CGSize)stringSize;	// 0x30343b29
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30343931
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30343a81
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x303439f9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30343951
@end
