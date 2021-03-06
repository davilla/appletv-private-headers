/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileReactorProxy.h"


__attribute__((visibility("hidden")))
@interface NSFilePresenterProxy : NSFileReactorProxy {
@private
	BOOL _isInSuperArbiter;	// 20 = 0x14
	id _prewritingProcedure;	// 24 = 0x18
	unsigned _writingRelinquishmentCount;	// 28 = 0x1c
	id _currentWriterPurposeID;	// 32 = 0x20
	id _postwritingProcedure;	// 36 = 0x24
	BOOL _didObserveMovingByWriter;	// 40 = 0x28
	BOOL _didObserveVersionChangingByWriter;	// 41 = 0x29
}
@property(readonly, retain) id currentWriterPurposeID;	// G=0x31b06941; converted property
+ (id)urlWithItemURL:(id)itemURL subitemPath:(id)path;	// 0x31b05a8d
- (void)accommodateDeletionWithSubitemPath:(id)subitemPath completionHandler:(id)handler;	// 0x31b05d59
- (void)afterRelinquishingToWriterInvokeProcedure:(id)writerInvokeProcedure;	// 0x31b068e9
- (void)beforeReacquiringFromWriterInvokeProcedure:(id)writerInvokeProcedure;	// 0x31b06979
// converted property getter: - (id)currentWriterPurposeID;	// 0x31b06941
- (void)dealloc;	// 0x31b05869
- (BOOL)didObserveMoving;	// 0x31b069cd
- (void)forwardObservationMessageWithKind:(id)kind parameters:(id)parameters;	// 0x31b06819
- (void)forwardRelinquishmentMessageWithKind:(id)kind parameters:(id)parameters resultHandler:(id)handler;	// 0x31b06275
- (void)forwardUsingMessageSender:(id)sender;	// 0x31b05929
- (BOOL)hasRelinquishedToWriter;	// 0x31b06929
- (void)observeChangeByWriterWithPurposeID:(id)purposeID;	// 0x31b05e85
- (void)observeChangeOfSubitemAtURL:(id)url byWriterWithPurposeID:(id)purposeID;	// 0x31b05fa5
- (void)observeMoveByWriterWithPurposeID:(id)purposeID;	// 0x31b05efd
- (void)observeMoveOfSubitemAtURL:(id)url toURL:(id)url2 byWriterWithPurposeID:(id)purposeID;	// 0x31b0602d
- (void)observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemPath:(id)path;	// 0x31b060c9
- (void)relinquishToReadingClaimWithID:(id)anId options:(unsigned)options purposeID:(id)anId3 resultHandler:(id)handler;	// 0x31b059c9
- (void)relinquishToWritingClaimWithID:(id)anId options:(unsigned)options purposeID:(id)anId3 subitemPath:(id)path resultHandler:(id)handler;	// 0x31b05b19
- (void)resetMoveObserving;	// 0x31b069b9
- (void)saveChangesWithCompletionHandler:(id)completionHandler;	// 0x31b05c85
- (void)setInSuperarbiter;	// 0x31b059b5
- (void)setItemLocation:(id)location;	// 0x31b058e1
- (void)updateLastEventIdentifier:(unsigned long long)identifier;	// 0x31b061d5
@end

