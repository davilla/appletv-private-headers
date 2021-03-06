/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIWordSearchOperation.h"

@class TIMecabraWrapper, UIKeyboardCandidate;

@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation {
	TIMecabraWrapper *_mecabraWrapper;	// 12 = 0xc
	UIKeyboardCandidate *_candidate;	// 16 = 0x10
	BOOL _partialCandidate;	// 20 = 0x14
}
@property(retain, nonatomic) UIKeyboardCandidate *candidate;	// G=0x315fe615; S=0x315fe625; @synthesize=_candidate
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper;	// G=0x315fe5f5; S=0x315fe605; @synthesize=_mecabraWrapper
@property(assign, nonatomic, getter=isPartialCandidate) BOOL partialCandidate;	// G=0x315fe635; S=0x315fe645; @synthesize=_partialCandidate
- (id)initWithWordSearch:(id)wordSearch candidate:(id)candidate isPartial:(BOOL)partial;	// 0x315fe421
- (void)cancel;	// 0x315fe521
// declared property getter: - (id)candidate;	// 0x315fe615
- (void)dealloc;	// 0x315fe4bd
// declared property getter: - (BOOL)isPartialCandidate;	// 0x315fe635
// declared property getter: - (id)mecabraWrapper;	// 0x315fe5f5
- (void)perform;	// 0x315fe525
// declared property setter: - (void)setCandidate:(id)candidate;	// 0x315fe625
// declared property setter: - (void)setMecabraWrapper:(id)wrapper;	// 0x315fe605
// declared property setter: - (void)setPartialCandidate:(BOOL)candidate;	// 0x315fe645
@end

