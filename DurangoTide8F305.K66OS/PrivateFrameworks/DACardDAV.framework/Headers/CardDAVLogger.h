/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSFileHandle;

@interface CardDAVLogger : NSObject {
	NSString *_logFilePath;	// 4 = 0x4
	NSFileHandle *_logFileHandle;	// 8 = 0x8
}
- (id)init;	// 0x348235cd
- (void)dealloc;	// 0x348234a1
- (void)finishSnippets;	// 0x3482350d
- (void)logSnippet:(id)snippet;	// 0x3482359d
@end

