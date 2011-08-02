/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, CalDAVAccount, CalDAVCacheManager, NSURL;

@interface CalDAVDeleteEntityOperation : NSObject {
	NSString *_filename;	// 4 = 0x4
	NSURL *_calendarURL;	// 8 = 0x8
	CalDAVAccount *_account;	// 12 = 0xc
	CalDAVCacheManager *_cache;	// 16 = 0x10
}
- (id)initWithFilename:(id)filename calendarURL:(id)url account:(id)account cache:(id)cache;	// 0x3144f661
- (void)dealloc;	// 0x3144f5e1
- (void)performOperation:(BOOL)operation;	// 0x3144f6f9
- (id)readableDescription;	// 0x3144f5a9
@end

