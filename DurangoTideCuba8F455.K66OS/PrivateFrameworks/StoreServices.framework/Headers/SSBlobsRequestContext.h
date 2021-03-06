/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "SSCoding.h"

@class NSString;

@interface SSBlobsRequestContext : NSObject <NSCopying, SSCoding> {
@private
	unsigned _blobRequestOptions;	// 4 = 0x4
	NSString *_blobStoreDomain;	// 8 = 0x8
}
@property(assign, nonatomic) unsigned blobRequestOptions;	// G=0x3273f799; S=0x3273f7a9; @synthesize=_blobRequestOptions
@property(copy, nonatomic) NSString *blobStoreDomain;	// G=0x3273f789; S=0x3273fb11; @synthesize=_blobStoreDomain
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3273f9e9
// declared property getter: - (unsigned)blobRequestOptions;	// 0x3273f799
// declared property getter: - (id)blobStoreDomain;	// 0x3273f789
- (id)copyPropertyListEncoding;	// 0x3273f7d9
- (id)copyWithZone:(NSZone *)zone;	// 0x3273f851
- (void)dealloc;	// 0x3273fa71
// declared property setter: - (void)setBlobRequestOptions:(unsigned)options;	// 0x3273f7a9
// declared property setter: - (void)setBlobStoreDomain:(id)domain;	// 0x3273fb11
@end

