/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropPatchTaskDelegate.h"
#import "CoreDAVTaskGroupDelegate.h"

@class NSSet;

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {
	int _state;	// 44 = 0x2c
	NSSet *_addWriteURLs;	// 48 = 0x30
	NSSet *_addReadURLs;	// 52 = 0x34
	NSSet *_removeURLs;	// 56 = 0x38
	NSSet *_updatedWriteURLs;	// 60 = 0x3c
	NSSet *_updatedReadURLs;	// 64 = 0x40
}
@property(retain) NSSet *addReadURLs;	// G=0x35964719; S=0x359646f5; @synthesize=_addReadURLs
@property(retain) NSSet *addWriteURLs;	// G=0x359646dd; S=0x359646b9; @synthesize=_addWriteURLs
@property(retain) NSSet *removeURLs;	// G=0x35964755; S=0x35964731; @synthesize=_removeURLs
@property(assign) int state;	// G=0x359642e1; S=0x359642f1; @synthesize=_state
@property(retain) NSSet *updatedReadURLs;	// G=0x359647cd; S=0x359647a9; @synthesize=_updatedReadURLs
@property(retain) NSSet *updatedWriteURLs;	// G=0x35964791; S=0x3596476d; @synthesize=_updatedWriteURLs
- (id)initWithAccountInfoProvider:(id)accountInfoProvider addWriteURLs:(id)urls addReadURLs:(id)urls3 removeURLs:(id)urls4 taskManager:(id)manager;	// 0x35964ddd
- (void)_fetchExistingGrantedDelegates;	// 0x35964301
- (void)_finishWithError:(id)error state:(int)state;	// 0x35964d7d
- (void)_populateUpdatesFromFetched:(id)fetched allowWrite:(BOOL)write;	// 0x359643dd
- (void)_updateDelegatesWithAllowWrite:(BOOL)allowWrite;	// 0x35964a5d
// declared property getter: - (id)addReadURLs;	// 0x35964719
// declared property getter: - (id)addWriteURLs;	// 0x359646dd
- (void)dealloc;	// 0x3596461d
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x35964541
// declared property getter: - (id)removeURLs;	// 0x35964755
// declared property setter: - (void)setAddReadURLs:(id)urls;	// 0x359646f5
// declared property setter: - (void)setAddWriteURLs:(id)urls;	// 0x359646b9
// declared property setter: - (void)setRemoveURLs:(id)urls;	// 0x35964731
// declared property setter: - (void)setState:(int)state;	// 0x359642f1
// declared property setter: - (void)setUpdatedReadURLs:(id)urls;	// 0x359647a9
// declared property setter: - (void)setUpdatedWriteURLs:(id)urls;	// 0x3596476d
- (void)startTaskGroup;	// 0x35964531
// declared property getter: - (int)state;	// 0x359642e1
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x359647e5
// declared property getter: - (id)updatedReadURLs;	// 0x359647cd
// declared property getter: - (id)updatedWriteURLs;	// 0x35964791
@end

