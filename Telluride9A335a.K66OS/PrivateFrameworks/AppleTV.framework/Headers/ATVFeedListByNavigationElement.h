/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedGenericCollectionElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedListByNavigationElement : ATVFeedGenericCollectionElement {
@private
	int _currentIndex;	// 56 = 0x38
	NSArray *_navigationItems;	// 60 = 0x3c
}
@property(assign, nonatomic) int currentIndex;	// G=0x3430cf01; S=0x3430cf11; @synthesize=_currentIndex
@property(retain, nonatomic) NSArray *navigationItems;	// G=0x3430cf21; S=0x3430cf31; @synthesize=_navigationItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3430cd09
// declared property getter: - (int)currentIndex;	// 0x3430cf01
- (void)dealloc;	// 0x3430ceb5
// declared property getter: - (id)navigationItems;	// 0x3430cf21
// declared property setter: - (void)setCurrentIndex:(int)index;	// 0x3430cf11
// declared property setter: - (void)setNavigationItems:(id)items;	// 0x3430cf31
@end

