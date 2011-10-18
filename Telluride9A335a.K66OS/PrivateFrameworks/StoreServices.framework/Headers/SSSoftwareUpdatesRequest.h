/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class SSSoftwareUpdatesContext;
@protocol SSSoftwareUpdatesRequestDelegate;

@interface SSSoftwareUpdatesRequest : SSRequest {
@private
	SSSoftwareUpdatesContext *_context;	// 36 = 0x24
}
@property(assign, nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSSoftwareUpdatesContext *updateQueueContext;	// G=0x30eb8129; 
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x30eb8081
- (id)initWithUpdateQueueContext:(id)updateQueueContext;	// 0x30eb7f69
- (void)_sendResponseToDelegate:(id)delegate;	// 0x30eb829d
- (id)copyPropertyListEncoding;	// 0x30eb8009
- (void)dealloc;	// 0x30eb7fbd
- (id)handleFailureResponse:(id)response;	// 0x30eb8161
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x30eb8209
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x30eb8275
// declared property getter: - (id)updateQueueContext;	// 0x30eb8129
@end

