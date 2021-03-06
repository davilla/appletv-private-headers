/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface AccessibilityObjectWrapper : NSObject {
@private
	AccessibilityObject *m_object;	// 4 = 0x4
	int m_isAccessibilityElement;	// 8 = 0x8
	unsigned long long m_accessibilityTraitsFromAncestor;	// 12 = 0xc
}
- (id)initWithAccessibilityObject:(AccessibilityObject *)accessibilityObject;	// 0x334af7d9
- (void)_accessibilityActivate;	// 0x336ad585
- (BOOL)_accessibilityIsLandmarkRole:(int)role;	// 0x3367e67d
- (id)_accessibilityLandmarkAncestor;	// 0x336ae8fd
- (id)_accessibilityListAncestor;	// 0x336a97bd
- (id)_accessibilityNextElementsWithCount:(unsigned long)count;	// 0x336ad905
- (id)_accessibilityParentForSubview:(id)subview;	// 0x336ad511
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count;	// 0x336ad8b9
- (id)_accessibilityTableAncestor;	// 0x336a9801
- (unsigned long long)_accessibilityTraitsFromAncestors;	// 0x3367e369
- (id)_accessibilityWebDocumentView;	// 0x336ad951
- (BOOL)_addAccessibilityObject:(AccessibilityObject *)object toTextMarkerArray:(id)textMarkerArray;	// 0x336acfa5
- (CGRect)_convertIntRectToScreenCoordinates:(IntRect)screenCoordinates;	// 0x336adbe5
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x336abae1
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x336abb61
- (BOOL)_prepareAccessibilityCall;	// 0x334cb1b1
- (id)_stringForRange:(NSRange)range attributed:(BOOL)attributed;	// 0x336aad45
- (BOOL)accessibilityARIAIsBusy;	// 0x336a9b2d
- (BOOL)accessibilityARIALiveRegionIsAtomic;	// 0x336a9a59
- (id)accessibilityARIALiveRegionStatus;	// 0x336a9ae1
- (id)accessibilityARIARelevantStatus;	// 0x336a9a95
- (CGPoint)accessibilityActivationPoint;	// 0x336adac5
- (BOOL)accessibilityCanFuzzyHitTest;	// 0x336aee59
- (NSRange)accessibilityColumnRange;	// 0x336ae491
- (id)accessibilityContainer;	// 0x3368138d
- (void)accessibilityDecreaseSelection:(int)selection;	// 0x336ad1e1
- (void)accessibilityDecrement;	// 0x336ad035
- (id)accessibilityElementAtIndex:(int)index;	// 0x3367ffdd
- (int)accessibilityElementCount;	// 0x3367e6d9
- (void)accessibilityElementDidBecomeFocused;	// 0x336ad4d9
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x336ae561
- (CGRect)accessibilityElementRect;	// 0x336adb5d
- (id)accessibilityFlowToElements;	// 0x336ad6f1
- (id)accessibilityFocusedUIElement;	// 0x336ada05
- (CGRect)accessibilityFrame;	// 0x336ada45
- (id)accessibilityHeaderElements;	// 0x336ae5b1
- (id)accessibilityHint;	// 0x336ade3d
- (id)accessibilityHitTest:(CGPoint)test;	// 0x336aec89
- (id)accessibilityIdentifier;	// 0x336a9bfd
- (void)accessibilityIncreaseSelection:(int)selection;	// 0x336ad1f5
- (void)accessibilityIncrement;	// 0x336ad06d
- (BOOL)accessibilityIsComboBox;	// 0x336adf6d
- (id)accessibilityLabel;	// 0x33680319
- (id)accessibilityLanguage;	// 0x336ae969
- (id)accessibilityLinkedElement;	// 0x336ad5bd
- (void)accessibilityModifySelection:(int)selection increase:(BOOL)increase;	// 0x336ad209
- (void)accessibilityMoveSelectionToMarker:(id)marker;	// 0x336ad0a5
- (AccessibilityObject *)accessibilityObject;	// 0x336814b5
- (id)accessibilityObjectForTextMarker:(id)textMarker;	// 0x336ab431
- (id)accessibilityPlaceholderValue;	// 0x336ae449
- (id)accessibilityPostProcessHitTest:(CGPoint)test;	// 0x336a9719
- (void)accessibilityPostedNotification:(int)notification;	// 0x334cae89
- (BOOL)accessibilityRequired;	// 0x336ad87d
- (NSRange)accessibilityRowRange;	// 0x336ae4f9
- (void)accessibilitySetPostedNotificationCallback:(/*function-pointer*/ void *)callback withContext:(void *)context;	// 0x336a97ad
- (id)accessibilitySpeechHint;	// 0x336a9b69
- (id)accessibilityTitleElement;	// 0x336ae8bd
- (unsigned long long)accessibilityTraits;	// 0x334cafa5
- (id)accessibilityURL;	// 0x336add11
- (id)accessibilityValue;	// 0x336adfad
- (id)arrayOfTextForTextMarkers:(id)textMarkers attributed:(BOOL)attributed;	// 0x336abf49
- (id)attachmentView;	// 0x336814d1
- (id)attributedStringForRange:(NSRange)range;	// 0x336aacfd
- (BOOL)containsUnnaturallySegmentedChildren;	// 0x33681519
- (void)dealloc;	// 0x33682751
- (void)detach;	// 0x33665359
- (BOOL)determineIsAccessibilityElement;	// 0x3367e19d
- (NSRange)elementTextRange;	// 0x336ab575
- (id)elementsForRange:(NSRange)range;	// 0x336aab6d
- (CGRect)frameForTextMarkers:(id)textMarkers;	// 0x336a9db5
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x336aea95
- (BOOL)isAccessibilityElement;	// 0x3367e14d
- (BOOL)isAttachment;	// 0x3367e755
- (id)lineEndMarkerForMarker:(id)marker;	// 0x336aa6d1
- (id)lineStartMarkerForMarker:(id)marker;	// 0x336aa4f1
- (id)nextMarkerForMarker:(id)marker;	// 0x336aa315
- (int)positionForTextMarker:(id)textMarker;	// 0x336ab8e1
- (void)postChildrenChangedNotification;	// 0x336a97a9
- (void)postFocusChangeNotification;	// 0x336a9795
- (void)postLayoutChangeNotification;	// 0x336a979d
- (void)postLiveRegionChangeNotification;	// 0x336a97a1
- (void)postLoadCompleteNotification;	// 0x336a97a5
- (void)postSelectedTextChangeNotification;	// 0x336a9799
- (id)previousMarkerForMarker:(id)marker;	// 0x336aa139
- (id)selectedTextMarker;	// 0x336aa8b1
- (id)selectionRangeString;	// 0x336aab3d
- (id)stringForRange:(NSRange)range;	// 0x336aad21
- (id)stringForTextMarkers:(id)textMarkers;	// 0x336acc11
- (BOOL)stringValueShouldBeUsedInLabel;	// 0x33680ec1
- (AccessibilityTableCell *)tableCellParent;	// 0x336a971d
- (AccessibilityTable *)tableParent;	// 0x336a9759
- (id)textMarkerForPoint:(CGPoint)point;	// 0x336a9c51
- (id)textMarkerForPosition:(int)position;	// 0x336aaf89
- (id)textMarkerRange;	// 0x336ab639
- (id)textMarkerRangeForSelection;	// 0x336ab1ad
@end

