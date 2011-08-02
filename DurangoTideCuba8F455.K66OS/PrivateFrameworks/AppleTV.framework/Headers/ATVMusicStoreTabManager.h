/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library

@class NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreTabManager : BRSingleton {
@private
	NSMutableDictionary *_tabsContainer;	// 4 = 0x4
	NSString *_savedTabsFilePath;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x306887c9
+ (id)singleton;	// 0x306887bd
- (id)init;	// 0x30688931
- (void)_loadTabs;	// 0x30688a31
- (void)_saveTabs;	// 0x306889c5
- (id)_tabs;	// 0x306887d5
- (void)dealloc;	// 0x306888d5
- (BOOL)preferredSegmentExistsForTabName:(id)tabName;	// 0x3068882d
- (id)preferredSegmentNameForTabName:(id)tabName;	// 0x306888ad
- (BOOL)segmentNamed:(id)named isPreferredSegmentForTabName:(id)tabName;	// 0x30688801
- (void)setPreferredSegmentName:(id)name forTabName:(id)tabName;	// 0x30688849
@end

