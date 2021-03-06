/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVGetDelegatesBaseTaskGroup.h"


@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {
	int _state;	// 68 = 0x44
	BOOL _fetchPrincipalDetails;	// 72 = 0x48
}
@property(assign) BOOL fetchPrincipalDetails;	// G=0x31427129; S=0x31427141; @synthesize=_fetchPrincipalDetails
@property(assign) int state;	// G=0x314270fd; S=0x31427111; @synthesize=_state
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x314265f9
- (void)_expandPropertiesWithAllowWrite:(BOOL)allowWrite;	// 0x314268a9
- (void)_fetchOnlyHrefs;	// 0x314266c1
- (void)_finishWithError:(id)error state:(int)state;	// 0x3142665d
- (void)_getChildProperties;	// 0x314269e5
- (id)_urlAppendingSegmentWithAllowWrite:(BOOL)allowWrite;	// 0x3142685d
// declared property getter: - (BOOL)fetchPrincipalDetails;	// 0x31427129
// declared property setter: - (void)setFetchPrincipalDetails:(BOOL)details;	// 0x31427141
// declared property setter: - (void)setState:(int)state;	// 0x31427111
- (void)startTaskGroup;	// 0x31426aa9
// declared property getter: - (int)state;	// 0x314270fd
- (void)task:(id)task didFinishWithError:(id)error;	// 0x31426b21
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x3142700d
@end

