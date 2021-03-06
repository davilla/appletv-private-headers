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
- (id)initWithAccessibilityObject:(AccessibilityObject *)accessibilityObject;	// 0x367afa0d
- (void)_accessibilityActivate;	// 0x369ac211
- (BOOL)_accessibilityIsLandmarkRole:(int)role;	// 0x3697d2b1
- (id)_accessibilityLandmarkAncestor;	// 0x369ad589
- (id)_accessibilityListAncestor;	// 0x369a8449
- (id)_accessibilityNextElementsWithCount:(unsigned long)count;	// 0x369ac591
- (id)_accessibilityParentForSubview:(id)subview;	// 0x369ac19d
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count;	// 0x369ac545
- (id)_accessibilityTableAncestor;	// 0x369a848d
- (unsigned long long)_accessibilityTraitsFromAncestors;	// 0x3697cf9d
- (id)_accessibilityWebDocumentView;	// 0x369ac5dd
- (BOOL)_addAccessibilityObject:(AccessibilityObject *)object toTextMarkerArray:(id)textMarkerArray;	// 0x369abc31
- (CGRect)_convertIntRectToScreenCoordinates:(IntRect)screenCoordinates;	// 0x369ac871
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x369aa76d
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x369aa7ed
- (BOOL)_prepareAccessibilityCall;	// 0x367cb1f9
- (id)_stringForRange:(NSRange)range attributed:(BOOL)attributed;	// 0x369a99d1
- (BOOL)accessibilityARIAIsBusy;	// 0x369a87b9
- (BOOL)accessibilityARIALiveRegionIsAtomic;	// 0x369a86e5
- (id)accessibilityARIALiveRegionStatus;	// 0x369a876d
- (id)accessibilityARIARelevantStatus;	// 0x369a8721
- (CGPoint)accessibilityActivationPoint;	// 0x369ac751
- (BOOL)accessibilityCanFuzzyHitTest;	// 0x369adae5
- (NSRange)accessibilityColumnRange;	// 0x369ad11d
- (id)accessibilityContainer;	// 0x3697ff05
- (void)accessibilityDecreaseSelection:(int)selection;	// 0x369abe6d
- (void)accessibilityDecrement;	// 0x369abcc1
- (id)accessibilityElementAtIndex:(int)index;	// 0x3697eb55
- (int)accessibilityElementCount;	// 0x3697d30d
- (void)accessibilityElementDidBecomeFocused;	// 0x369ac165
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x369ad1ed
- (CGRect)accessibilityElementRect;	// 0x369ac7e9
- (id)accessibilityFlowToElements;	// 0x369ac37d
- (id)accessibilityFocusedUIElement;	// 0x369ac691
- (CGRect)accessibilityFrame;	// 0x369ac6d1
- (id)accessibilityHeaderElements;	// 0x369ad23d
- (id)accessibilityHint;	// 0x369acac9
- (id)accessibilityHitTest:(CGPoint)test;	// 0x369ad915
- (id)accessibilityIdentifier;	// 0x369a8889
- (void)accessibilityIncreaseSelection:(int)selection;	// 0x369abe81
- (void)accessibilityIncrement;	// 0x369abcf9
- (BOOL)accessibilityIsComboBox;	// 0x369acbf9
- (id)accessibilityLabel;	// 0x3697ee91
- (id)accessibilityLanguage;	// 0x369ad5f5
- (id)accessibilityLinkedElement;	// 0x369ac249
- (void)accessibilityModifySelection:(int)selection increase:(BOOL)increase;	// 0x369abe95
- (void)accessibilityMoveSelectionToMarker:(id)marker;	// 0x369abd31
- (AccessibilityObject *)accessibilityObject;	// 0x36980039
- (id)accessibilityObjectForTextMarker:(id)textMarker;	// 0x369aa0bd
- (id)accessibilityPlaceholderValue;	// 0x369ad0d5
- (id)accessibilityPostProcessHitTest:(CGPoint)test;	// 0x369a83a5
- (void)accessibilityPostedNotification:(int)notification;	// 0x367caed1
- (BOOL)accessibilityRequired;	// 0x369ac509
- (NSRange)accessibilityRowRange;	// 0x369ad185
- (void)accessibilitySetPostedNotificationCallback:(/*function-pointer*/ void *)callback withContext:(void *)context;	// 0x369a8439
- (id)accessibilitySpeechHint;	// 0x369a87f5
- (id)accessibilityTitleElement;	// 0x369ad549
- (unsigned long long)accessibilityTraits;	// 0x367cafed
- (id)accessibilityURL;	// 0x369ac99d
- (id)accessibilityValue;	// 0x369acc39
- (id)arrayOfTextForTextMarkers:(id)textMarkers attributed:(BOOL)attributed;	// 0x369aabd5
- (id)attachmentView;	// 0x36980055
- (id)attributedStringForRange:(NSRange)range;	// 0x369a9989
- (BOOL)containsUnnaturallySegmentedChildren;	// 0x3698009d
- (void)dealloc;	// 0x36981265
- (void)detach;	// 0x369640d9
- (BOOL)determineIsAccessibilityElement;	// 0x3697cdd1
- (NSRange)elementTextRange;	// 0x369aa201
- (id)elementsForRange:(NSRange)range;	// 0x369a97f9
- (CGRect)frameForTextMarkers:(id)textMarkers;	// 0x369a8a41
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x369ad721
- (BOOL)isAccessibilityElement;	// 0x3697cd81
- (BOOL)isAttachment;	// 0x3697d389
- (id)lineEndMarkerForMarker:(id)marker;	// 0x369a935d
- (id)lineStartMarkerForMarker:(id)marker;	// 0x369a917d
- (id)nextMarkerForMarker:(id)marker;	// 0x369a8fa1
- (int)positionForTextMarker:(id)textMarker;	// 0x369aa56d
- (void)postChildrenChangedNotification;	// 0x369a8435
- (void)postFocusChangeNotification;	// 0x369a8421
- (void)postLayoutChangeNotification;	// 0x369a8429
- (void)postLiveRegionChangeNotification;	// 0x369a842d
- (void)postLoadCompleteNotification;	// 0x369a8431
- (void)postSelectedTextChangeNotification;	// 0x369a8425
- (id)previousMarkerForMarker:(id)marker;	// 0x369a8dc5
- (id)selectedTextMarker;	// 0x369a953d
- (id)selectionRangeString;	// 0x369a97c9
- (id)stringForRange:(NSRange)range;	// 0x369a99ad
- (id)stringForTextMarkers:(id)textMarkers;	// 0x369ab89d
- (BOOL)stringValueShouldBeUsedInLabel;	// 0x3697fa39
- (AccessibilityTableCell *)tableCellParent;	// 0x369a83a9
- (AccessibilityTable *)tableParent;	// 0x369a83e5
- (id)textMarkerForPoint:(CGPoint)point;	// 0x369a88dd
- (id)textMarkerForPosition:(int)position;	// 0x369a9c15
- (id)textMarkerRange;	// 0x369aa2c5
- (id)textMarkerRangeForSelection;	// 0x369a9e39
@end

