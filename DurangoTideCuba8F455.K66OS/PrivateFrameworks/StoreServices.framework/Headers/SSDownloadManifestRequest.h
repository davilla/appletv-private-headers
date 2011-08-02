/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class NSURLRequest;
@protocol SSDownloadManifestRequestDelegate;

@interface SSDownloadManifestRequest : SSRequest {
@private
	int _manifestFormat;	// 36 = 0x24
	NSURLRequest *_urlRequest;	// 40 = 0x28
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x32724459; 
@property(assign, nonatomic) id<SSDownloadManifestRequestDelegate> delegate;	// @dynamic
@property(assign, nonatomic) int manifestFormat;	// G=0x327243cd; S=0x327243dd; @synthesize=_manifestFormat
- (id)init;	// 0x32724489
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x327244a1
- (id)initWithURLRequest:(id)urlrequest;	// 0x32724629
// declared property getter: - (id)URLRequest;	// 0x32724459
- (void)_sendResponseToDelegate:(id)delegate;	// 0x327243ed
- (id)copyPropertyListEncoding;	// 0x3272454d
- (void)dealloc;	// 0x327245e1
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x327246f1
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x32724799
// declared property getter: - (int)manifestFormat;	// 0x327243cd
// declared property setter: - (void)setManifestFormat:(int)format;	// 0x327243dd
@end

