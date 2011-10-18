/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"

@class NSString, NSURL;
@protocol MSStreamsProtocolDelegate;

@interface MSStreamsProtocol : NSObject {
@private
	id<MSStreamsProtocolDelegate> _delegate;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
	NSURL *_baseURL;	// 12 = 0xc
	NSURL *_URL;	// 16 = 0x10
	int _lastURLType;	// 20 = 0x14
}
@property(assign, nonatomic) id<MSStreamsProtocolDelegate> delegate;	// G=0x322c7771; S=0x322c7781; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSURL *getURL;	// G=0x322c70a1; 
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x322c7791; @synthesize=_personID
@property(readonly, assign, nonatomic) NSURL *putURL;	// G=0x322c7129; 
@property(readonly, assign, nonatomic) NSURL *reauthorizeURL;	// G=0x322c7239; 
@property(readonly, assign, nonatomic) NSURL *resetURL;	// G=0x322c71b1; 
@property(readonly, assign, nonatomic) NSURL *uploadCompleteURL;	// G=0x322c72c1; 
+ (id)deviceInfoDictForPersonID:(id)personID;	// 0x322c73a9
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x322c7001
- (void)_didFindServerSideConfigurationVersion:(id)version;	// 0x322c7659
- (void)_didReceiveRetryAfterDate:(id)date;	// 0x322c76a5
- (void)_refreshAuthTokenForContext:(MSSPCContext *)context;	// 0x322c7729
- (void)abort;	// 0x322c7349
- (void)dealloc;	// 0x322c7055
// declared property getter: - (id)delegate;	// 0x322c7771
- (id)deviceInfoDict;	// 0x322c7371
// declared property getter: - (id)getURL;	// 0x322c70a1
// declared property getter: - (id)personID;	// 0x322c7791
// declared property getter: - (id)putURL;	// 0x322c7129
// declared property getter: - (id)reauthorizeURL;	// 0x322c7239
// declared property getter: - (id)resetURL;	// 0x322c71b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x322c7781
// declared property getter: - (id)uploadCompleteURL;	// 0x322c72c1
@end

