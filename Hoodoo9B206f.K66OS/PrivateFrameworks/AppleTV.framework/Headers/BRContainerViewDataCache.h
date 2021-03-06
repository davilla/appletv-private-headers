/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRContainerViewDataCache : NSObject {
@private
	NSArray *_sectionInfos;	// 4 = 0x4
	long _numberOfItems;	// 8 = 0x8
	long _numberOfColumns;	// 12 = 0xc
}
@property(assign) long numberOfColumns;	// G=0x3671e879; S=0x3671e889; @synthesize=_numberOfColumns
@property(assign) long numberOfItems;	// G=0x3671e859; S=0x3671e869; @synthesize=_numberOfItems
@property(retain) NSArray *sectionInfos;	// G=0x3671e821; S=0x3671e835; @synthesize=_sectionInfos
- (void)dealloc;	// 0x3671e7d5
// declared property getter: - (long)numberOfColumns;	// 0x3671e879
// declared property getter: - (long)numberOfItems;	// 0x3671e859
// declared property getter: - (id)sectionInfos;	// 0x3671e821
// declared property setter: - (void)setNumberOfColumns:(long)columns;	// 0x3671e889
// declared property setter: - (void)setNumberOfItems:(long)items;	// 0x3671e869
// declared property setter: - (void)setSectionInfos:(id)infos;	// 0x3671e835
@end

