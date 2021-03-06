/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, UIView;
@protocol UITextSelectingContainer;

@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (UINibLoadingAdditions)
- (void)awakeFromNib;	// 0x30281da9
@end

@interface NSObject (UIKitAccessibilityInterfaceBuilderSupport)
- (unsigned long long)defaultAccessibilityTraits;	// 0x3028f395
- (BOOL)isAccessibilityElementByDefault;	// 0x3028f3a5
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3028f3a9
@end

@interface NSObject (UIAccessibilityPrivate)
- (void)_accessibilityFinalize;	// 0x3009f031
- (void)accessibilitySetIdentification:(id)identification;	// 0x300f8401
@end

@interface NSObject (UIAccessibilityContainer)
- (id)accessibilityElementAtIndex:(int)index;	// 0x3028f389
- (int)accessibilityElementCount;	// 0x3028f385
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x3028f38d
@end

@interface NSObject (UIAccessibilityAction)
- (void)accessibilityDecrement;	// 0x3028f37d
- (void)accessibilityIncrement;	// 0x3028f379
- (BOOL)accessibilityScroll:(int)scroll;	// 0x3028f381
@end

@interface NSObject (UIAccessibilityFocus)
- (void)accessibilityElementDidBecomeFocused;	// 0x3028f36d
- (void)accessibilityElementDidLoseFocus;	// 0x3028f371
- (BOOL)accessibilityElementIsFocused;	// 0x3028f375
@end

@interface NSObject (UIAccessibility)
@property(retain) id accessibilityContainer;	// G=0x3028f33d; S=0x3028f365; converted property
@property(assign, nonatomic) CGRect accessibilityFrame;	// G=0x3028f319; S=0x3028f351; @dynamic
@property(copy, nonatomic) NSString *accessibilityHint;	// G=0x3028f315; S=0x3028f34d; @dynamic
@property(copy, nonatomic) NSString *accessibilityLabel;	// G=0x3017e68d; S=0x3028f345; @dynamic
@property(retain, nonatomic) NSString *accessibilityLanguage;	// G=0x3028f341; S=0x3028f369; @dynamic
@property(assign, nonatomic) unsigned long long accessibilityTraits;	// G=0x3028f331; S=0x3028f35d; @dynamic
@property(copy, nonatomic) NSString *accessibilityValue;	// G=0x3028f311; S=0x3028f349; @dynamic
@property(assign, nonatomic) BOOL isAccessibilityElement;	// G=0x3028f339; S=0x3028f361; @dynamic
// converted property getter: - (id)accessibilityContainer;	// 0x3028f33d
// declared property getter: - (CGRect)accessibilityFrame;	// 0x3028f319
// declared property getter: - (id)accessibilityHint;	// 0x3028f315
// declared property getter: - (id)accessibilityLabel;	// 0x3017e68d
// declared property getter: - (id)accessibilityLanguage;	// 0x3028f341
// declared property getter: - (unsigned long long)accessibilityTraits;	// 0x3028f331
// declared property getter: - (id)accessibilityValue;	// 0x3028f311
// declared property getter: - (BOOL)isAccessibilityElement;	// 0x3028f339
// converted property setter: - (void)setAccessibilityContainer:(id)container;	// 0x3028f365
// declared property setter: - (void)setAccessibilityFrame:(CGRect)frame;	// 0x3028f351
// declared property setter: - (void)setAccessibilityHint:(id)hint;	// 0x3028f34d
// declared property setter: - (void)setAccessibilityLabel:(id)label;	// 0x3028f345
// declared property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x3028f369
// declared property setter: - (void)setAccessibilityTraits:(unsigned long long)traits;	// 0x3028f35d
// declared property setter: - (void)setAccessibilityValue:(id)value;	// 0x3028f349
// declared property setter: - (void)setIsAccessibilityElement:(BOOL)element;	// 0x3028f361
@end

@interface NSObject (UITextRangeViewScrollerSupport)
- (void)_disableScrollingIfNecessary;	// 0x302c9985
- (void)_enableScrollingIfNecessary;	// 0x302c9981
@end

@interface NSObject (UITextInput_Internal)
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *_textSelectingContainer;	// G=0x302eda7d; 
- (unsigned short)_characterAfterCaretSelection;	// 0x30157d79
- (unsigned short)_characterBeforeCaretSelection;	// 0x30157b59
- (unsigned short)_characterInRelationToCaretSelection:(int)caretSelection;	// 0x30157b71
- (unsigned short)_characterInRelationToRangedSelection:(int)rangedSelection;	// 0x30157bd9
- (id)_clampedpositionFromPosition:(id)position offset:(int)offset;	// 0x302ef265
- (void)_deleteBackwardAndNotify:(BOOL)notify;	// 0x302ef335
- (void)_deleteByWord;	// 0x302ef5e9
- (void)_deleteToEndOfLine;	// 0x302ef359
- (void)_deleteToStartOfLine;	// 0x302ef4a1
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;	// 0x302ef67d
- (void)_extendCurrentSelection:(int)selection;	// 0x302ef851
- (id)_fontForCaretSelection;	// 0x301b9359
- (id)_fullText;	// 0x302efb41
- (BOOL)_hasMarkedTextOrRangedSelection;	// 0x302ef915
- (int)_indexForTextPosition:(id)textPosition;	// 0x301bb789
- (BOOL)_isEmptySelection;	// 0x302ef975
- (id)_keyInput;	// 0x302eda6d
- (CGRect)_lastRectForRange:(id)range;	// 0x302f0201
- (void)_moveCurrentSelection:(int)selection;	// 0x302ef76d
- (id)_moveDown:(BOOL)down withHistory:(id)history;	// 0x302ee181
- (id)_moveLeft:(BOOL)left withHistory:(id)history;	// 0x302ee09d
- (id)_moveRight:(BOOL)right withHistory:(id)history;	// 0x302edfb9
- (id)_moveToEndOfDocument:(BOOL)document withHistory:(id)history;	// 0x302ee589
- (id)_moveToEndOfLine:(BOOL)line withHistory:(id)history;	// 0x302eea39
- (id)_moveToEndOfParagraph:(BOOL)paragraph withHistory:(id)history;	// 0x302ee6c5
- (id)_moveToEndOfWord:(BOOL)word withHistory:(id)history;	// 0x302eecf1
- (id)_moveToStartOfDocument:(BOOL)document withHistory:(id)history;	// 0x302ee629
- (id)_moveToStartOfLine:(BOOL)line withHistory:(id)history;	// 0x302eeb95
- (id)_moveToStartOfParagraph:(BOOL)paragraph withHistory:(id)history;	// 0x302ee87d
- (id)_moveToStartOfWord:(BOOL)word withHistory:(id)history;	// 0x302eee31
- (id)_moveUp:(BOOL)up withHistory:(id)history;	// 0x302ee385
- (id)_newPhraseBoundaryGestureRecognizer;	// 0x302edd65
- (NSRange)_nsrangeForTextRange:(id)textRange;	// 0x301bb701
- (void)_phraseBoundaryGesture:(id)gesture;	// 0x302f04c5
- (id)_positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset withAffinityDownstream:(BOOL)affinityDownstream;	// 0x302edf85
- (id)_rangeOfEnclosingWord:(id)enclosingWord;	// 0x30157891
- (CGRect)_rectContainingCaretSelection;	// 0x301bd425
- (void)_replaceCurrentWordWithText:(id)text;	// 0x302ef2cd
- (void)_scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x302eda71
- (id)_selectableText;	// 0x301578fd
- (int)_selectionAffinity;	// 0x302ede3d
- (NSRange)_selectionAsNSRange;	// 0x302f0b01
- (BOOL)_selectionAtDocumentEnd;	// 0x302ef9e1
- (BOOL)_selectionAtDocumentStart;	// 0x302efa49
- (BOOL)_selectionAtWordStart;	// 0x302efab1
- (void)_setGestureRecognizers;	// 0x302f02e1
- (id)_setHistory:(id)history withExtending:(BOOL)extending withAnchor:(int)anchor withAffinityDownstream:(BOOL)affinityDownstream;	// 0x302ef06d
- (void)_setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x302efec1
- (void)_setSelectedTextRange:(id)range withAffinityDownstream:(BOOL)affinityDownstream;	// 0x302edf21
- (id)_setSelectionRangeWithHistory:(id)history;	// 0x302effc9
- (id)_textColorForCaretSelection;	// 0x301bde5d
// declared property getter: - (id)_textSelectingContainer;	// 0x302eda7d
- (void)_unmarkText;	// 0x30176679
- (void)_updateSelectionWithTextRange:(id)textRange withAffinityDownstream:(BOOL)affinityDownstream;	// 0x302ef239
- (id)_wordContainingCaretSelection;	// 0x302efba1
@end

