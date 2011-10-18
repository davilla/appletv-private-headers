/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVTaskDelegate.h"
#import "CoreDAVTaskGroupDelegate.h"

@class NSURL, NSMutableSet, NSSet, NSMutableArray;

@interface CalDAVGetDelegatesBaseTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate> {
	BOOL _serverSupportsExpandPropertyReport;	// 44 = 0x2c
	NSURL *_principalURL;	// 48 = 0x30
	NSMutableArray *_readPrincipalURLs;	// 52 = 0x34
	NSMutableArray *_writePrincipalURLs;	// 56 = 0x38
	NSMutableSet *_writeDetails;	// 60 = 0x3c
	NSMutableSet *_readDetails;	// 64 = 0x40
}
@property(retain) NSURL *principalURL;	// G=0x332654b1; S=0x3326548d; @synthesize=_principalURL
@property(retain) NSMutableSet *readDetails;	// G=0x332655a1; S=0x3326557d; @synthesize=_readDetails
@property(readonly, retain) NSSet *readOnlyPrincipalDetails;	// G=0x33265379; 
@property(retain) NSMutableArray *readPrincipalURLs;	// G=0x332654ed; S=0x332654c9; @synthesize=_readPrincipalURLs
@property(readonly, retain) NSSet *readWritePrincipalDetails;	// G=0x332653b5; 
@property(assign) BOOL serverSupportsExpandPropertyReport;	// G=0x33264fd5; S=0x33264fe5; @synthesize=_serverSupportsExpandPropertyReport
@property(retain) NSMutableSet *writeDetails;	// G=0x33265565; S=0x33265541; @synthesize=_writeDetails
@property(retain) NSMutableArray *writePrincipalURLs;	// G=0x33265529; S=0x33265505; @synthesize=_writePrincipalURLs
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x332656d9
- (void)_getPrincipalDetailsForURL:(id)url;	// 0x33265179
- (id)_mappingsForPrincipalDetails;	// 0x33264ff5
- (id)_popFromArray:(id)array;	// 0x33265219
- (void)_processDetailsFromMultiStatus:(id)multiStatus allowWrite:(BOOL)write;	// 0x332655b9
- (void)dealloc;	// 0x332653f1
// declared property getter: - (id)principalURL;	// 0x332654b1
// declared property getter: - (id)readDetails;	// 0x332655a1
// declared property getter: - (id)readOnlyPrincipalDetails;	// 0x33265379
// declared property getter: - (id)readPrincipalURLs;	// 0x332654ed
// declared property getter: - (id)readWritePrincipalDetails;	// 0x332653b5
// declared property getter: - (BOOL)serverSupportsExpandPropertyReport;	// 0x33264fd5
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3326548d
// declared property setter: - (void)setReadDetails:(id)details;	// 0x3326557d
// declared property setter: - (void)setReadPrincipalURLs:(id)urls;	// 0x332654c9
// declared property setter: - (void)setServerSupportsExpandPropertyReport:(BOOL)report;	// 0x33264fe5
// declared property setter: - (void)setWriteDetails:(id)details;	// 0x33265541
// declared property setter: - (void)setWritePrincipalURLs:(id)urls;	// 0x33265505
- (void)task:(id)task didFinishWithError:(id)error;	// 0x33265269
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x332652f1
// declared property getter: - (id)writeDetails;	// 0x33265565
// declared property getter: - (id)writePrincipalURLs;	// 0x33265529
@end

