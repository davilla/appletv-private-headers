/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSSet, NSDictionary, CoreDAVLeafItem, NSMutableSet;

@interface CoreDAVBulkRequestsItem : CoreDAVItem {
	CoreDAVLeafItem *_maxResourcesItem;	// 28 = 0x1c
	CoreDAVLeafItem *_maxSizeItem;	// 32 = 0x20
	NSMutableSet *_supportedItems;	// 36 = 0x24
}
@property(readonly, assign) NSDictionary *dictRepresentation;	// G=0x33a68e25; 
@property(readonly, assign) int maxResources;	// G=0x33a69015; 
@property(retain) CoreDAVLeafItem *maxResourcesItem;	// G=0x33a69451; S=0x33a69465; @synthesize=_maxResourcesItem
@property(readonly, assign) int maxSize;	// G=0x33a6904d; 
@property(retain) CoreDAVLeafItem *maxSizeItem;	// G=0x33a69475; S=0x33a69489; @synthesize=_maxSizeItem
@property(readonly, assign) NSSet *supportedItems;	// G=0x33a69499; @synthesize=_supportedItems
@property(readonly, assign) BOOL supportsDelete;	// G=0x33a6941d; 
@property(readonly, assign) BOOL supportsInsert;	// G=0x33a693b5; 
@property(readonly, assign) BOOL supportsUpdate;	// G=0x33a693e9; 
+ (id)copyParseRules;	// 0x33a68b91
- (id)init;	// 0x33a68999
- (void)addSupportedItem:(id)item;	// 0x33a68b25
- (void)dealloc;	// 0x33a689c5
- (id)description;	// 0x33a68a3d
// declared property getter: - (id)dictRepresentation;	// 0x33a68e25
// declared property getter: - (int)maxResources;	// 0x33a69015
// declared property getter: - (id)maxResourcesItem;	// 0x33a69451
// declared property getter: - (int)maxSize;	// 0x33a6904d
// declared property getter: - (id)maxSizeItem;	// 0x33a69475
// declared property setter: - (void)setMaxResourcesItem:(id)item;	// 0x33a69465
// declared property setter: - (void)setMaxSizeItem:(id)item;	// 0x33a69489
// declared property getter: - (id)supportedItems;	// 0x33a69499
// declared property getter: - (BOOL)supportsDelete;	// 0x33a6941d
// declared property getter: - (BOOL)supportsInsert;	// 0x33a693b5
- (BOOL)supportsItemWithNameSpace:(id)nameSpace name:(id)name;	// 0x33a69085
// declared property getter: - (BOOL)supportsUpdate;	// 0x33a693e9
@end
