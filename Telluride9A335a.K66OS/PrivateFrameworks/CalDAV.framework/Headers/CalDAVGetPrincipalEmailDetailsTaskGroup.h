/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVTaskDelegate.h"

@class NSURL, NSSet, NSString, CalDAVPrincipalEmailDetailsResult;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	CalDAVPrincipalEmailDetailsResult *_principalResult;	// 44 = 0x2c
	NSURL *_principalURL;	// 48 = 0x30
}
@property(readonly, retain) NSSet *addresses;	// G=0x33264071; 
@property(readonly, retain) NSString *displayName;	// G=0x33264099; 
@property(retain) CalDAVPrincipalEmailDetailsResult *principalResult;	// G=0x33264185; S=0x33264161; @synthesize=_principalResult
@property(retain) NSURL *principalURL;	// G=0x332641c1; S=0x3326419d; @synthesize=_principalURL
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x332641d9
- (void)_finishWithError:(id)error;	// 0x332639dd
- (void)_processPropFind:(id)find;	// 0x332639ed
// declared property getter: - (id)addresses;	// 0x33264071
- (void)dealloc;	// 0x33264101
// declared property getter: - (id)displayName;	// 0x33264099
// declared property getter: - (id)principalResult;	// 0x33264185
// declared property getter: - (id)principalURL;	// 0x332641c1
// declared property setter: - (void)setPrincipalResult:(id)result;	// 0x33264161
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3326419d
- (void)startTaskGroup;	// 0x33263771
- (void)task:(id)task didFinishWithError:(id)error;	// 0x33263fd9
@end

