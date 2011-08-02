/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextSelectingContainer.h"
#import "UIKit-Structs.h"
#import "UITextInputTraits_Private.h"
#import "UITextInput.h"
#import "UITextInputTokenizer.h"


@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private, UITextSelectingContainer>
@property(retain) id markedText;	// converted property
- (NSRange)_markedTextNSRange;
@optional
- (id)automaticallySelectedOverlay;
@required
- (unsigned short)characterBeforeCaretSelection;
- (id)fontForCaretSelection;
@optional
- (void)handleKeyWebEvent:(id)event;
@required
- (BOOL)hasContent;
- (BOOL)hasSelection;
// converted property getter: - (id)markedText;
- (void)moveBackward:(unsigned)backward;
- (void)moveForward:(unsigned)forward;
- (CGRect)rectContainingCaretSelection;
- (CGRect)rectForNSRange:(NSRange)nsrange;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)textWithoutClosingTyping replacementText:(id)text;
@optional
- (BOOL)requiresKeyEvents;
@required
- (void)selectAll;
- (id)selectedDOMRange;
- (NSRange)selectionRange;
@optional
- (void)setBottomBufferHeight:(float)height;
@required
// converted property setter: - (void)setMarkedText:(id)text;
- (void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;
- (BOOL)shouldEnableAutoShift;
- (id)textColorForCaretSelection;
- (id)textInputTraits;
- (id)wordContainingCaretSelection;
- (id)wordInRange:(id)range;
- (id)wordRangeContainingCaretSelection;
@end

