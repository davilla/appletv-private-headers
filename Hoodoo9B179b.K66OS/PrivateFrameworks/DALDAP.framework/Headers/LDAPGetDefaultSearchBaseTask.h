/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import "DALDAP-Structs.h"
#import "LDAPTask.h"

@class NSString, NSDate;

@interface LDAPGetDefaultSearchBaseTask : LDAPTask {
	ldap *_ld;	// 16 = 0x10
	NSString *_defaultNamingContext;	// 20 = 0x14
	NSDate *_dateConnectionWentOut;	// 24 = 0x18
}
- (id)_copyDefaultNamingContextFromLDAPElement:(ldapmsg *)ldapelement;	// 0x34aa0741
- (id)_initializeServer;	// 0x34aa0085
- (void)_invokeBlockOnMainThread:(id)thread;	// 0x34aa0d19
- (id)_performQuery;	// 0x34aa08c9
- (void)dealloc;	// 0x34aa0025
- (void)finishWithError:(id)error;	// 0x34aa0d21
- (int)numDownloadedElements;	// 0x34aa0e7d
- (void)performTaskInBackground;	// 0x34aa0c1d
@end
