/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSString, NSMutableArray;

@interface SSBlobStore : NSObject {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	NSString *_domain;	// 8 = 0x8
	NSMutableArray *_requests;	// 12 = 0xc
}
@property(readonly, assign) NSString *blobStoreDomain;	// G=0x3273d865; 
- (id)init;	// 0x3273d895
- (id)initWithBlobStoreDomain:(id)blobStoreDomain;	// 0x3273d949
- (void)_enqueueBlobsRequest:(id)request withCompletion:(id)completion;	// 0x3273db85
- (void)_request:(id)request didReceiveResponse:(id)response;	// 0x3273de65
// declared property getter: - (id)blobStoreDomain;	// 0x3273d865
- (void)cancelAllBlobRequests;	// 0x3273df39
- (void)dealloc;	// 0x3273da7d
- (void)loadBlobWithIdentifier:(id)identifier options:(unsigned)options completion:(id)completion;	// 0x3273d7bd
- (void)loadBlobsWithIdentifiers:(id)identifiers options:(unsigned)options completion:(id)completion;	// 0x3273d675
- (void)setBlob:(id)blob options:(unsigned)options completion:(id)completion;	// 0x3273d60d
- (void)setBlobs:(id)blobs options:(unsigned)options completion:(id)completion;	// 0x3273d4c5
@end

