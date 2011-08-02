/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVContainerSyncTaskGroup.h"


@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
	BOOL _isInitialSync;	// 120 = 0x78
}
@property(assign) BOOL isInitialSync;	// G=0x33176295; S=0x331762a5; @synthesize=_isInitialSync
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager appSpecificDataItemClass:(Class)aClass;	// 0x33176339
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager appSpecificDataItemClass:(Class)aClass;	// 0x33176995
- (id)copyGetTaskWithURL:(id)url;	// 0x331762b5
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x331762e5
- (id)dataContentType;	// 0x33176289
// declared property getter: - (BOOL)isInitialSync;	// 0x33176295
// declared property setter: - (void)setIsInitialSync:(BOOL)sync;	// 0x331762a5
@end
