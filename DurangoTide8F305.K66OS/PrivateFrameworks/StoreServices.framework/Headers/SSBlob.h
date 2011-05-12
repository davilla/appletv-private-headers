/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class SSBlobIdentifier, NSData;

@interface SSBlob : NSObject <NSCopying> {
@private
	NSData *_blobData;	// 4 = 0x4
	SSBlobIdentifier *_blobIdentifier;	// 8 = 0x8
	dispatch_queue_s *_dispatchQueue;	// 12 = 0xc
}
@property(copy) NSData *blobData;	// G=0x324df029; S=0x324deb65; 
@property(copy) SSBlobIdentifier *blobIdentifier;	// G=0x324def7d; S=0x324deb15; 
- (id)init;	// 0x324de72d
- (id)initWithBlobIdentifier:(id)blobIdentifier data:(id)data;	// 0x324de89d
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324de5a9
// declared property getter: - (id)blobData;	// 0x324df029
// declared property getter: - (id)blobIdentifier;	// 0x324def7d
- (id)copyPropertyListEncoding;	// 0x324debb5
- (id)copyWithZone:(NSZone *)zone;	// 0x324df0fd
- (void)dealloc;	// 0x324de98d
- (id)description;	// 0x324deea1
- (unsigned)hash;	// 0x324de4bd
- (BOOL)isEqual:(id)equal;	// 0x324de409
// declared property setter: - (void)setBlobData:(id)data;	// 0x324deb65
// declared property setter: - (void)setBlobIdentifier:(id)identifier;	// 0x324deb15
@end

