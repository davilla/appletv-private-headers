/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import "CoreDAVAddedContainer.h"
#import "CoreDAVModifiedContainer.h"
#import <CoreDAVContainer.h> // Unknown library

@class NSDictionary;

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVModifiedContainer, CoreDAVAddedContainer> {
	NSDictionary *_appleAttributes;	// 60 = 0x3c
}
@property(readonly, assign) NSDictionary *appleAttributes;	// G=0x339efeb9; @synthesize=_appleAttributes
@property(assign) BOOL isBookmarkBarFolder;	// G=0x339f04e1; S=0x339f02b9; @dynamic
@property(assign) BOOL isBookmarkFolder;	// G=0x339f0509; S=0x339f0361; @dynamic
@property(assign) BOOL isBookmarkMenuFolder;	// G=0x339f04b9; S=0x339f0211; @dynamic
+ (id)copyPropertyMappingsForParser;	// 0x339f0611
- (id)initWithServerID:(id)serverID containerName:(id)name appleAttributes:(id)attributes;	// 0x339f06f9
- (id)_appleAttributesString;	// 0x339f0769
- (void)_faultResourceType;	// 0x339f0409
// declared property getter: - (id)appleAttributes;	// 0x339efeb9
- (void)applyParsedProperties:(id)properties;	// 0x339f0531
- (id)copyMkcolTask;	// 0x339efec9
- (id)copyPropPatchTask;	// 0x339f0049
- (void)dealloc;	// 0x339f06b1
// declared property getter: - (BOOL)isBookmarkBarFolder;	// 0x339f04e1
// declared property getter: - (BOOL)isBookmarkFolder;	// 0x339f0509
// declared property getter: - (BOOL)isBookmarkMenuFolder;	// 0x339f04b9
// declared property setter: - (void)setIsBookmarkBarFolder:(BOOL)folder;	// 0x339f02b9
// declared property setter: - (void)setIsBookmarkFolder:(BOOL)folder;	// 0x339f0361
// declared property setter: - (void)setIsBookmarkMenuFolder:(BOOL)folder;	// 0x339f0211
@end

