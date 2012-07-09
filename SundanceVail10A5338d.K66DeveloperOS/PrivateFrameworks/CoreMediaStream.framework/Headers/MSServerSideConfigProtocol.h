/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString;
@protocol MSServerSideConfigProtocolDelegate;

@interface MSServerSideConfigProtocol : NSObject {
	id<MSServerSideConfigProtocolDelegate> _delegate;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
	NSURL *_configURL;	// 12 = 0xc
	MSSSCPCContext _context;	// 16 = 0x10
}
@property(assign, nonatomic) id<MSServerSideConfigProtocolDelegate> delegate;	// G=0x337561ad; S=0x337561bd; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x3375619d; @synthesize=_personID
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x33755eed
- (void).cxx_destruct;	// 0x337561cd
- (void)_didFailAuthenticationWithError:(id)error;	// 0x33756179
- (void)_didFinishWithResponse:(id)response error:(id)error;	// 0x33756149
- (void)abort;	// 0x33756135
- (void)dealloc;	// 0x337560b1
// declared property getter: - (id)delegate;	// 0x337561ad
// declared property getter: - (id)personID;	// 0x3375619d
- (void)queryConfiguration;	// 0x33756101
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x337561bd
@end
