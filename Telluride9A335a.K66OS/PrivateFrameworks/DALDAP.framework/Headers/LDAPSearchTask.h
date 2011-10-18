/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import "DALDAP-Structs.h"
#import "LDAPTask.h"

@class DAContactsSearchQuery, NSMutableArray, NSDate;

@interface LDAPSearchTask : LDAPTask {
	ldap *_ld;	// 16 = 0x10
	int _msgId;	// 20 = 0x14
	DAContactsSearchQuery *_query;	// 24 = 0x18
	dispatch_source_s *_checkResultsTimer;	// 28 = 0x1c
	NSMutableArray *_foundContacts;	// 32 = 0x20
	NSDate *_dateConnectionWentOut;	// 36 = 0x24
}
@property(readonly, assign) DAContactsSearchQuery *query;	// G=0x33569021; @synthesize=_query
- (id)initWithQuery:(id)query;	// 0x335671c5
- (void)_appendKey:(id)key value:(id)value toSearchResultElement:(id)searchResultElement;	// 0x33567fe9
- (id)_copyContactSearchElementFromLDAPElement:(ldapmsg *)ldapelement;	// 0x335683a9
- (id)_copySearchStringForQueryInput:(id)queryInput;	// 0x335679e5
- (void)_failImmediately;	// 0x33568a75
- (id)_initializeServer;	// 0x335672e1
- (void)_invokeBlockOnMainThread:(id)thread;	// 0x33568dd9
- (void)_promptForPasswordDueToError:(id)error;	// 0x33568961
- (id)_startQuery;	// 0x33567be1
- (void)checkForResults;	// 0x335685e5
- (void)dealloc;	// 0x33567249
- (void)finishWithError:(id)error;	// 0x33568de1
- (int)numDownloadedElements;	// 0x33569001
- (void)performTaskInBackground;	// 0x33568b21
// declared property getter: - (id)query;	// 0x33569021
@end

