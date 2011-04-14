/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {
	CoreDAVMultiStatusItem *_multiStatus;	// 104 = 0x68
	NSSet *_propertiesToFind;	// 108 = 0x6c
}
@property(retain) CoreDAVMultiStatusItem *multiStatus;	// G=0x317c6d39; S=0x317c6d7d; @synthesize=_multiStatus
@property(retain) NSSet *propertiesToFind;	// G=0x317c6d21; S=0x317c6d51; @synthesize=_propertiesToFind
- (id)initWithPropertiesToFind:(id)find atURL:(id)url;	// 0x317c68e9
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x317c6705
- (void)dealloc;	// 0x317c688d
- (id)description;	// 0x317c67cd
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x317c6ac9
- (id)getTotalFailureError;	// 0x317c6b95
// declared property getter: - (id)multiStatus;	// 0x317c6d39
- (id)parseHints;	// 0x317c67b9
// declared property getter: - (id)propertiesToFind;	// 0x317c6d21
// declared property setter: - (void)setMultiStatus:(id)status;	// 0x317c6d7d
// declared property setter: - (void)setPropertiesToFind:(id)find;	// 0x317c6d51
- (id)successfulValueForNameSpace:(id)nameSpace elementName:(id)name;	// 0x317c69e5
- (void)updateMultiStatusFromResponse;	// 0x317c6671
@end
