/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <CoreDAVRecursiveContainerSyncTaskGroup.h> // Unknown library


@interface BookmarkDAVRecursiveContainerSyncTaskGroup : CoreDAVRecursiveContainerSyncTaskGroup {
}
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousPTag:(id)tag3 previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x339f0859
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x339f0801
- (id)dataContentType;	// 0x339f07d9
- (BOOL)shouldSyncChildWithResourceType:(id)resourceType;	// 0x339f07e5
@end

