/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSData, NSError;

@interface SSPlayInfoResponse : NSObject <SSXPCCoding, NSCopying> {
	NSError *_error;	// 4 = 0x4
	NSData *_playInfoData;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSError *error;	// G=0x3192ae6d; @synthesize=_error
@property(readonly, assign, nonatomic) NSData *playInfoData;	// G=0x3192ae7d; @synthesize=_playInfoData
- (id)initWithPlayInfoData:(id)playInfoData error:(id)error;	// 0x3192adf5
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3192ac2d
- (id)copyWithZone:(NSZone *)zone;	// 0x3192ab5d
- (id)copyXPCEncoding;	// 0x3192abd9
- (void)dealloc;	// 0x3192aaf9
- (id)description;	// 0x3192ad21
// declared property getter: - (id)error;	// 0x3192ae6d
// declared property getter: - (id)playInfoData;	// 0x3192ae7d
@end

