/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library
#import "DAVResponseBodyReader.h"

@class NSMutableData, NSString, ICSCalendar, CalDAVAccount, CalDAVCacheManager, NSURL;

@interface CalDAVWriteEventOperation : NSObject <DAVResponseBodyReader> {
	ICSCalendar *_calendar;	// 4 = 0x4
	NSURL *_calendarURL;	// 8 = 0x8
	BOOL _overwrite;	// 12 = 0xc
	CalDAVAccount *_account;	// 16 = 0x10
	CalDAVCacheManager *_cache;	// 20 = 0x14
	NSString *_resourcePath;	// 24 = 0x18
	BOOL _wasResourceModifiedByServer;	// 28 = 0x1c
	NSMutableData *_responseBody;	// 32 = 0x20
	NSString *_newCtag;	// 36 = 0x24
	NSString *_newSyncToken;	// 40 = 0x28
}
@property(retain) NSString *newCtag;	// G=0x31458a0d; S=0x31458a3d; @synthesize=_newCtag
@property(retain) NSString *newSyncToken;	// G=0x31458a25; S=0x31458a69; @synthesize=_newSyncToken
@property(readonly, assign, nonatomic) NSString *resourcePath;	// G=0x31457c1d; @synthesize=_resourcePath
@property(readonly, assign, nonatomic) BOOL wasResourceModifiedByServer;	// G=0x31457c2d; @synthesize=_wasResourceModifiedByServer
- (id)initWithCalendar:(id)calendar calendarURL:(id)url account:(id)account cache:(id)cache;	// 0x31457d51
- (void)_handleMultistatusResponse:(id)response;	// 0x3145861d
- (id)_reallyPerformOperationWithFilename:(id)filename isBulkOperation:(BOOL)operation previousCtag:(id)ctag;	// 0x31457e05
- (void)dealloc;	// 0x31457c89
// declared property getter: - (id)newCtag;	// 0x31458a0d
// declared property getter: - (id)newSyncToken;	// 0x31458a25
- (id)performBulkOperation:(id)operation;	// 0x31457c3d
- (id)performOperation:(BOOL)operation;	// 0x314588f1
- (BOOL)request:(id)request acceptResponseWithHTTPStatusCode:(int)httpstatusCode;	// 0x31457c19
- (void)request:(id)request readResponseBody:(id)body;	// 0x31457c65
// declared property getter: - (id)resourcePath;	// 0x31457c1d
// declared property setter: - (void)setNewCtag:(id)ctag;	// 0x31458a3d
// declared property setter: - (void)setNewSyncToken:(id)token;	// 0x31458a69
// declared property getter: - (BOOL)wasResourceModifiedByServer;	// 0x31457c2d
@end

