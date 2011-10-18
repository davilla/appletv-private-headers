/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "NSMutableCopying.h"
#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSArray;

@interface SSSoftwareUpdatesContext : NSObject <SSCoding, NSCopying, NSMutableCopying> {
@private
	NSString *_clientIdentifierHeader;	// 4 = 0x4
	BOOL _forced;	// 8 = 0x8
	NSArray *_softwareTypes;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *clientIdentifierHeader;	// G=0x30eb7eb1; @synthesize=_clientIdentifierHeader
@property(readonly, assign, nonatomic, getter=isForced) BOOL forced;	// G=0x30eb7ec1; @synthesize=_forced
@property(readonly, assign, nonatomic) NSArray *softwareTypes;	// G=0x30eb7b69; @synthesize=_softwareTypes
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x30eb7c9d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x30eb7d35
// declared property getter: - (id)clientIdentifierHeader;	// 0x30eb7eb1
- (id)copyPropertyListEncoding;	// 0x30eb7bd5
- (id)copyWithZone:(NSZone *)zone;	// 0x30eb7d71
- (void *)copyXPCEncoding;	// 0x30eb7c69
- (void)dealloc;	// 0x30eb7b09
// declared property getter: - (BOOL)isForced;	// 0x30eb7ec1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30eb7e11
// declared property getter: - (id)softwareTypes;	// 0x30eb7b69
@end

