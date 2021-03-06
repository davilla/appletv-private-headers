/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKeyboardCandidateList.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList> {
	CGRect m_originalTypedTextRect;	// 84 = 0x54
	NSString *m_typedText;	// 100 = 0x64
	NSString *m_correction;	// 104 = 0x68
	NSMutableArray *m_typedTextViews;	// 108 = 0x6c
	UIView *m_correctionView;	// 112 = 0x70
	UIView *m_correctionAnimationView;	// 116 = 0x74
	UIView *m_typedTextAnimationView;	// 120 = 0x78
	UIView *m_correctionShadowView;	// 124 = 0x7c
	BOOL m_fits;	// 128 = 0x80
	BOOL m_mouseDown;	// 129 = 0x81
	id m_delegate;	// 132 = 0x84
	int m_index;	// 136 = 0x88
	int m_promptTextType;	// 140 = 0x8c
	float m_originalTypedTextRectCorrectionAmount;	// 144 = 0x90
}
@property(readonly, retain) NSString *correction;	// G=0x30e2c3a1; converted property
@property(readonly, retain) UIView *correctionAnimationView;	// G=0x30d9594d; converted property
@property(readonly, retain) UIView *correctionShadowView;	// G=0x30d9595d; converted property
@property(readonly, retain) UIView *correctionView;	// G=0x30d9593d; converted property
@property(readonly, retain) NSString *typedText;	// G=0x30e2c3b1; converted property
@property(readonly, retain) UIView *typedTextAnimationView;	// G=0x30e2c3c1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x30d91c9d
- (void)_candidateSelected:(id)selected;	// 0x30e2c6a1
- (id)activeCandidateList;	// 0x30e2c885
- (void)addTypedTextRect:(CGRect)rect;	// 0x30e2c1b1
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x30e2be39
- (id)candidateAtIndex:(unsigned)index;	// 0x30e2c185
- (void)candidatesDidChange;	// 0x30e2be25
- (void)configureKeyboard:(id)keyboard;	// 0x30e2be3d
// converted property getter: - (id)correction;	// 0x30e2c3a1
// converted property getter: - (id)correctionAnimationView;	// 0x30d9594d
- (CGRect)correctionFrameFromDesiredFrame:(CGRect)desiredFrame textHeight:(int)height withExtraGap:(float)extraGap;	// 0x30d93189
// converted property getter: - (id)correctionShadowView;	// 0x30d9595d
// converted property getter: - (id)correctionView;	// 0x30d9593d
- (unsigned)count;	// 0x30d92d31
- (id)currentCandidate;	// 0x30e2c0ed
- (unsigned)currentIndex;	// 0x30e2be29
- (void)dealloc;	// 0x30d94de5
- (void)dismiss;	// 0x30e2c45d
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x30e2c5bd
- (CGRect)horizontallySquishedCorrectionFrame:(CGRect)frame;	// 0x30d92e15
- (unsigned)index;	// 0x30e2c7d9
- (BOOL)isAcceptableTextEffectsFrame:(CGRect)frame afterScrollBy:(float)by;	// 0x30d93619
- (void)layout;	// 0x30e2bf59
- (float)maximumCandidateWidth;	// 0x30e2c2c5
- (void)mouseDown:(GSEventRef)down;	// 0x30e2c491
- (void)mouseDragged:(GSEventRef)dragged;	// 0x30e2c4a5
- (void)mouseUp:(GSEventRef)up;	// 0x30e2c4a9
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x30e2c889
- (unsigned)numberOfShownItems;	// 0x30e2c7e9
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x30e2c3d1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x30e2c405
- (BOOL)prepareForAnimation:(CGRect)animation;	// 0x30d953e1
- (void)removePromptSubviews;	// 0x30d92919
- (void)setCandidateObject:(id)object type:(int)type typedText:(id)text inRect:(CGRect)rect maxX:(float)x;	// 0x30d91d91
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x30e2bd99
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x30e2bddd
- (void)setCorrection:(id)correction typedText:(id)text inRect:(CGRect)rect maxX:(float)x;	// 0x30d91d4d
- (void)setSelectedItem:(unsigned)item;	// 0x30e2c809
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x30e2bd89
- (CGRect)shadowFrameForFrame:(CGRect)frame;	// 0x30e2bd55
- (void)showCandidate:(id)candidate;	// 0x30e2bf5d
- (void)showCandidateAtIndex:(unsigned)index;	// 0x30e2bfe5
- (void)showNextCandidate;	// 0x30e2c029
- (void)showNextPage;	// 0x30e2c17d
- (void)showPageAtIndex:(unsigned)index;	// 0x30e2c179
- (void)showPreviousCandidate;	// 0x30e2c0b9
- (void)showPreviousPage;	// 0x30e2c181
- (int)textEffectsVisibilityLevel;	// 0x30e2bd19
- (int)textEffectsVisibilityLevelWhenKey;	// 0x30e2bd05
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30e2c52d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30e2c58d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30e2c55d
// converted property getter: - (id)typedText;	// 0x30e2c3b1
// converted property getter: - (id)typedTextAnimationView;	// 0x30e2c3c1
- (id)typedTextView;	// 0x30d958f9
@end

