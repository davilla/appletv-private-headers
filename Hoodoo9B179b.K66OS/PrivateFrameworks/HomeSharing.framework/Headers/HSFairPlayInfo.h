/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSArray, NSString;

@interface HSFairPlayInfo : NSObject {
@private
	void *_hwInfo;	// 4 = 0x4
	NSArray *_requestsToSign;	// 8 = 0x8
	void *_session;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *deviceGUID;	// G=0x317ac879; 
- (id)init;	// 0x317ac741
- (BOOL)_getHardwareInfo:(FairPlayHWInfo_ *)info;	// 0x317ad49d
- (id)_hexStringForData:(id)data;	// 0x317ad535
- (id)beginNegotiation;	// 0x317ac8f9
- (id)continueNegotationWithData:(id)data isComplete:(BOOL *)complete;	// 0x317ac979
- (void)dealloc;	// 0x317ac801
// declared property getter: - (id)deviceGUID;	// 0x317ac879
- (void)endMescalSession;	// 0x317acbb5
- (void)endSecuritySession;	// 0x317aca49
- (id)processSignedResponseData:(id)data withSignature:(id)signature;	// 0x317ad345
- (id)securityInfoForURL:(id)url;	// 0x317aca91
- (BOOL)setupMescalWithURL:(id)url certificateURL:(id)url2 requestsToSign:(id)sign userAgent:(id)agent;	// 0x317acbdd
- (BOOL)shouldSignRequestAction:(id)action;	// 0x317ad479
- (id)signatureForData:(id)data;	// 0x317ad3f1
@end
