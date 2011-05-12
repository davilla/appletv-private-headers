/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITextRangeView, UITextSelection, NSTimer;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextSelectionView : UIView {
@private
	UIView<UITextSelectingContainer> *m_view;	// 44 = 0x2c
	UITextSelection *m_selection;	// 48 = 0x30
	NSTimer *m_caretTimer;	// 52 = 0x34
	UIView *m_caretView;	// 56 = 0x38
	UITextRangeView *m_rangeView;	// 60 = 0x3c
	BOOL m_caretBlinks;	// 64 = 0x40
	BOOL m_caretNeedsColorUpdate;	// 65 = 0x41
	BOOL m_caretShowingNow;	// 66 = 0x42
	BOOL m_visible;	// 67 = 0x43
	BOOL m_activated;	// 68 = 0x44
	BOOL m_wasShowingCommands;	// 69 = 0x45
	BOOL m_delayShowingCommands;	// 70 = 0x46
	int m_showingCommandsCounter;	// 72 = 0x48
}
@property(assign, nonatomic) BOOL caretBlinks;	// G=0x321c61f5; S=0x3204b5dd; @synthesize=m_caretBlinks
@property(readonly, assign, nonatomic) UIView *caretView;	// G=0x32050ca1; @synthesize=m_caretView
@property(readonly, assign, nonatomic) UITextRangeView *rangeView;	// G=0x320b885d; 
@property(readonly, assign, nonatomic) UITextSelection *selection;	// G=0x3204b769; 
@property(readonly, assign, nonatomic) BOOL selectionCommandsShowing;	// G=0x320a1a1d; 
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *view;	// G=0x3204b7e9; @synthesize=m_view
@property(assign, nonatomic) BOOL visible;	// G=0x3204b5cd; S=0x3204b35d; @synthesize=m_visible
- (id)initWithView:(id)view;	// 0x3204b0bd
- (void)activate;	// 0x320509e9
- (BOOL)affectedByScrollerNotification:(id)notification;	// 0x320733f9
- (void)appearOrFadeIfNecessary;	// 0x3204b37d
- (void)calculateAndShowReplacements:(id)replacements;	// 0x321c64f1
- (void)cancelDelayedCommandRequests;	// 0x3204fb45
- (void)caretBlinkTimerFired:(id)fired;	// 0x3205a471
// declared property getter: - (BOOL)caretBlinks;	// 0x321c61f5
// declared property getter: - (id)caretView;	// 0x32050ca1
- (void)clearCaret;	// 0x3206ac4d
- (void)clearCaretBlinkTimer;	// 0x3204fb89
- (void)clearRange;	// 0x32050ae5
- (CGRect)clippedTargetRect:(CGRect)rect;	// 0x320bc2b5
- (void)configureForReplacementMode;	// 0x321c63f5
- (void)configureForSelectionMode;	// 0x321c6419
- (id)convertedSelectionRects;	// 0x320b89e1
- (void)deactivate;	// 0x3206b0e1
- (void)dealloc;	// 0x321c65d5
- (void)detach;	// 0x3204fb75
- (void)didRotate:(id)rotate;	// 0x320aff95
- (void)doneMagnifying;	// 0x321c630d
- (void)hideCaret:(int)caret;	// 0x3205a511
- (void)hideSelectionCommands;	// 0x3204fb19
- (void)hideSelectionCommandsAfterDelay:(double)delay;	// 0x321c643d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x320bb165
- (void)inputViewDidAnimate;	// 0x3205a3e1
- (void)inputViewWillAnimate;	// 0x32058471
- (void)installIfNecessary;	// 0x32050b05
- (void)layoutChanged;	// 0x320a1991
- (void)prepareForMagnification;	// 0x321c6391
// declared property getter: - (id)rangeView;	// 0x320b885d
- (void)removeFromSuperview;	// 0x3204fa29
- (void)scaleDidChange:(id)scale;	// 0x320c8bdd
- (void)scaleWillChange:(id)scale;	// 0x320c888d
- (id)scrollView;	// 0x320bc775
// declared property getter: - (id)selection;	// 0x3204b769
- (CGRect)selectionBoundingBox;	// 0x321c6659
- (void)selectionChanged;	// 0x320500c5
// declared property getter: - (BOOL)selectionCommandsShowing;	// 0x320a1a1d
- (void)selectionDidScroll:(id)selection;	// 0x3206c3dd
- (void)selectionWillScroll:(id)selection;	// 0x3206c345
// declared property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x3204b5dd
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x3204b35d
- (BOOL)shouldBeVisible;	// 0x3204b4a9
- (void)showCaret:(int)caret;	// 0x32050f11
- (void)showCommandsWithReplacements:(id)replacements;	// 0x320bb4b5
- (void)showReplacementsWithGenerator:(id)generator afterDelay:(double)delay;	// 0x321c647d
- (void)showSelectionCommands;	// 0x321c6545
- (void)showSelectionCommandsAfterDelay:(double)delay;	// 0x320bb445
- (void)startCaretBlinkIfNeeded;	// 0x321c63d1
- (void)textSelectionViewActivated:(id)activated;	// 0x32050a6d
- (void)touchCaretBlinkTimer;	// 0x3204b65d
- (void)updateBaseIsStartWithContentPoint:(CGPoint)contentPoint;	// 0x321c6229
- (BOOL)updateCalloutBarRects:(id)rects effectsWindow:(id)window;	// 0x320bbde9
- (void)updateSelectionCommands;	// 0x320a19b9
- (void)updateSelectionDots;	// 0x321c657d
- (void)updateSelectionRects;	// 0x3204f58d
- (void)updateSelectionWithContentPoint:(CGPoint)contentPoint;	// 0x321c6205
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x321c634d
// declared property getter: - (id)view;	// 0x3204b7e9
// declared property getter: - (BOOL)visible;	// 0x3204b5cd
- (void)willRotate:(id)rotate;	// 0x321c624d
@end

