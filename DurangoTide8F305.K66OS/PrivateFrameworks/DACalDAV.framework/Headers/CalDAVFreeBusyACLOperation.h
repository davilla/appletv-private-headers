/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <AYOperation.h> // Unknown library

@class DAVSession, NSString, DAVXMLNode;

@interface CalDAVFreeBusyACLOperation : AYOperation {
	NSString *_uri;	// 64 = 0x40
	DAVSession *_session;	// 68 = 0x44
	DAVXMLNode *_authPrivilegesNode;	// 72 = 0x48
}
- (id)initWithSession:(id)session uri:(id)uri;	// 0x340ba399
- (id)appendSlashIfNeeded:(id)needed;	// 0x340ba2ed
- (void)dealloc;	// 0x340ba32d
- (BOOL)getACL;	// 0x340b9ea1
- (void)getAuthenticatedProperties:(id)properties;	// 0x340b9d89
- (BOOL)getXMLRequestForFreeBusy:(id)freeBusy;	// 0x340b9add
- (void)setFreeBusyACL;	// 0x340ba059
@end

