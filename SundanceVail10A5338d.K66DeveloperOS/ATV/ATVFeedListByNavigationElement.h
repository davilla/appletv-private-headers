/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedGenericCollectionElement.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedListByNavigationElement : ATVFeedGenericCollectionElement {
	int _currentIndex;	// 8 = 0x8
	NSArray *_navigationItems;	// 12 = 0xc
	NSString *_onNavigate;	// 16 = 0x10
}
@property(assign, nonatomic) int currentIndex;	// G=0x1399cd; S=0x1399dd; @synthesize=_currentIndex
@property(retain, nonatomic) NSArray *navigationItems;	// G=0x1399ed; S=0x1399fd; @synthesize=_navigationItems
@property(copy, nonatomic) NSString *onNavigate;	// G=0x139a0d; S=0x139a21; @synthesize=_onNavigate
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x139769
// declared property getter: - (int)currentIndex;	// 0x1399cd
- (void)dealloc;	// 0x139969
// declared property getter: - (id)navigationItems;	// 0x1399ed
// declared property getter: - (id)onNavigate;	// 0x139a0d
// declared property setter: - (void)setCurrentIndex:(int)index;	// 0x1399dd
// declared property setter: - (void)setNavigationItems:(id)items;	// 0x1399fd
// declared property setter: - (void)setOnNavigate:(id)navigate;	// 0x139a21
@end

