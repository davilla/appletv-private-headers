/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfElement : ATVFeedElement {
	int _columnCount;	// 4 = 0x4
	BOOL _center;	// 8 = 0x8
	NSArray *_sections;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL center;	// G=0x1437b1; S=0x1437c1; @synthesize=_center
@property(assign, nonatomic) int columnCount;	// G=0x143791; S=0x1437a1; @synthesize=_columnCount
@property(retain, nonatomic) NSArray *sections;	// G=0x1437d1; S=0x1437e1; @synthesize=_sections
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x143541
// declared property getter: - (BOOL)center;	// 0x1437b1
// declared property getter: - (int)columnCount;	// 0x143791
- (void)dealloc;	// 0x143745
// declared property getter: - (id)sections;	// 0x1437d1
// declared property setter: - (void)setCenter:(BOOL)center;	// 0x1437c1
// declared property setter: - (void)setColumnCount:(int)count;	// 0x1437a1
// declared property setter: - (void)setSections:(id)sections;	// 0x1437e1
@end
